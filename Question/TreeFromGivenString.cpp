#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
    Node(int k){
        value=k;
        left=right=NULL;
}
};

void TreeFromString(string str , Node *root){

Node *curr = new Node(str[0]);
stack<char>S; 
while(i < str.length()){
    if(str[i] == '('){
        S.push(str[i]);
    }
    if(str[i] == ')' && S.empty() == false){
        S.pop();
    }
    else{
       if(S.empty() == false){
           curr->left = new Node(str[i]);
           curr=curr->left;
       }
    }
  i++;
}

}

int main() {
    Node *root ;
    string str = "4(2(3)(1))(6(5))";
    TreeFromString(str , root);
return 0;
}