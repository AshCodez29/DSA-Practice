#include <iostream>
using namespace std;

struct Node {
    int coeff;
    int pow;
    Node* next;
};

void Insert(Node* &head,int pow,int coeff){
    if(coeff==0) return ;
    Node* newNode=new Node{pow,coeff,nullptr};
    if(head==nullptr) {
        head=newNode ;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = newNode;
}
Node* addPoly(Node* p1,Node* p2){
    Node* results=nullptr;
    while(p1 !=nullptr && p2 !=nullptr){
        if(p1->pow > p2->pow){
            Insert(results,p1->pow,p1->coeff);
            p1=p1->next;
        }
        else if(p1->pow<p2->pow){
            Insert(results,p2->pow,p2->coeff);
            p2=p2->next;
        }
        else {
            Insert(results,p1->pow,p1->coeff+p2->coeff);
            p1=p1->next;
            p2=p2->next;
        }
    }
    while (p1 != nullptr) {
        Insert(results, p1->coeff, p1->pow);
        p1 = p1->next;
    }
    while (p2 != nullptr) {
        Insert(results, p2->coeff, p2->pow);
        p2 = p2->next;
    }

    return results;
   
}

void printPolynomial(Node* head) {
    while (head != nullptr) {
        cout << head->coeff;
        if (head->pow > 0) cout << "x^" << head->pow;
        if (head->next != nullptr) cout << " + ";
        head = head->next;
    }
    cout << "\n";
}
int main() {
    Node* poly1 = nullptr; // 5x^3 + 4x^2 + 2
    Insert(poly1, 5, 3);
    Insert(poly1, 4, 2);
    Insert(poly1, 2, 0);

    Node* poly2 = nullptr; // 3x^3 + 2x + 7
    Insert(poly2, 3, 3);
    Insert(poly2, 2, 1);
    Insert(poly2, 7, 0);

    cout << "Poly 1: ";
    printPolynomial(poly1);

    cout << "Poly 2: ";
    printPolynomial(poly2);

    Node* sum = addPoly(poly1, poly2);
    cout << "Sum:    ";
    printPolynomial(sum); // 8x^3 + 4x^2 + 2x^1 + 9

    return 0;
}