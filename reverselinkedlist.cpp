#include<bits/stdc++.h>
using namespace std;

//creating class

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};





void deletenode(node* &prev){
        node* temp=prev->next;
        prev->next=prev->next->next;
        temp->next=NULL;
        delete temp;
}




void insertathead(node* &head,int element){


       node* temp=new node(element);
       temp->next=head;
       head=temp;
      
}

void reverse(node* &head,node* &curr,node* &prev){
       if(curr!=NULL){
          head=prev;
          return ;
       }
     node* forward=curr->next;
     cout<<"hello";
     reverse(head,forward,curr);
     curr->next=prev;
}

 
node* reverselinkedlist(node* &head){
       node* curr=head;
       node* prev=NULL;
     
       reverse(head,curr,prev);
       return head;
}

 
 
void printlist(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
}

 
  
int main(){
     node* x=new node(100);
     insertathead(x,200);
     insertathead(x,200);
     insertathead(x,400);
     insertathead(x,200);
     insertathead(x,600);
     printlist(x);
      
    node* curr=x;
    node* prev=NULL;
    while (curr!=NULL)
    {
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
   x=prev;
   printlist(x);
}