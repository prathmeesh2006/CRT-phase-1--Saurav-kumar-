#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data =data;
        this->next = NULL;
    }
    void printnode (node*N){
        node*curr = N;
        while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}
};
int main()
{
    node*n1 = new node(5);
    node*n2 = new node (10);
    node*n3 = new node (15);
    n1->next =n2;
    n2->next = n3;
    n1->printnode(n1);
    return 0;
}
