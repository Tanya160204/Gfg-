/*#include<iostream>
using namespace.std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
*/
 class Solution{
    public:
        Node* prev=NULL;
        Node* head=NULL;
        void fun(Node* root){
            if(!root){return;}
            fun(root->left);
            if(!prev){
                head=root;
            }
            else{
                prev->right=root;
                root->left=prev;
            }
            prev=root;
            fun(root->right);
            return;
        }
        Node* btoDLL(Node* root){
            fun(root);
            return head;
        }
 };
 /*int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string inp;
        getline=(cin,inp);
        Node* root=buildTree(inp);
        Solution ob;
        Node* head=ob.btoDLL(root);
        printList(head);
    }
    return 0;
 }*/