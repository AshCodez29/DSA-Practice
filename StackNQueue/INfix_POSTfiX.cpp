#include<iostream>
#include<string>
#include<stack>

using namespace std;
int pred(char c){
    if (c=='^') return 3;
    else if (c=='*'|| c=='/') return 2;
    else if (c=='+' || c=='-') return 1;
    return -1;
}
string infixToPostfix(string s){
    stack<char> st;
    string ans=" ";
    for(char c:s){
        if((c>='A'&& c<='Z')||(c>='a'&&c<='z')||(c>=0 && c<=9)){
            ans+=c;
        }
        else if (c='('){
            st.push(c);
        }
    }
}