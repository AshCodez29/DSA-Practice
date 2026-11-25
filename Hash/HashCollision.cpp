#include <iostream>
using namespace std;

const int SIZE = 7;
struct Node {
    int key;
    Node* next;
};

int hashFunc(int key) {
    return key % SIZE;
}

void insertKey(Node* table[], int key) {
    int index = hashFunc(key);
    Node* newNode = new Node{key, table[index]};
    table[index] = newNode;
}

bool searchKey(Node* table[], int key) {
    int index = hashFunc(key);
    Node* curr = table[index];
    while (curr != nullptr) {
        if (curr->key == key) return true;
        curr = curr->next;
    }
    return false;
}
int main() {
    Node* table[SIZE] = {nullptr}; 

    int keys[] = {10, 20, 15, 7, 17, 24}; 
    for (int k : keys) {
        insertKey(table, k);
    }

    for (int i = 0; i < SIZE; i++) {
        cout << i << " -> ";
        Node* curr = table[i];
        while (curr != nullptr) {
            cout << curr->key << " -> ";
            curr = curr->next;
        }
        cout << "NULL\n";
    }

    cout << "\nSearch 17: " << (searchKey(table, 17) ? "Found" : "Not Found") << "\n";
    cout << "Search 99: " << (searchKey(table, 99) ? "Found" : "Not Found") << "\n";
    for (int i = 0; i < SIZE; i++) {
        Node* curr = table[i];
        while (curr != nullptr) {
            Node* temp = curr->next;
            delete curr;
            curr = temp;
        }
    }
    return 0;
}