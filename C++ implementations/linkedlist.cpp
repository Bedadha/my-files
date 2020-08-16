#include<iostream>
using namespace std;

struct
 Node{
int data;
Node * next;
};

void printlist(Node *n){
    while(n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
    }
}

int main(){
    Node * A;
    A=NULL;

    Node* B =NULL;
    Node *C=NULL;

    A=new Node();
    B=new Node();
    C=new Node();

    A->data=2;
    A->next=B;
    B->data=3;
    B->next=C;
    C->data=4;
    C->next=NULL;
    printlist(A);

return 0;
}
