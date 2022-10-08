#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node(int x){
            data =x;
            next=NULL;
        }
};



void insertatbegin(Node*&head, int x){
    if (head==NULL){
        head= new Node(x);
        return;
    }
    Node *n= new Node(x);
    n->next= head;
    head= n;
}



int length(Node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}



void insesrtatend(Node*&head,int x){
    if(head==NULL){
        head= new Node(x);
        return;
    }

    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    Node*n= new Node(x);
    temp->next= n;
    return;

}



void insertinmiddle(Node*&head,int d, int p){
    if(p==0 or head==NULL){
        insertatbegin(head,d);
    }
    else  if(p>length(head)){
        insesrtatend(head,d);
    }

    else{
        int jump=1;
        Node*temp=head;
        while(jump<p-1){
            temp=temp->next;
            jump++;
        }
        Node* n= new Node(d);
        n->next=temp->next; 
        temp->next= n;

    }

    }

void print(Node *head){
    while(head!=NULL){
        cout<<head->data << "->";
        head=head->next;
    }
}

void deleteHead(Node*&head){
    if(head==NULL){
        return;
    }
    Node*temp=head->next;
    delete head;
    head=temp;
}

bool search(Node*head, int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}

bool searchrecursive(Node *head, int key){
    if(head==NULL){
        return false;
    }

    if(head->data==key){
        return true;
    }
    else{
        return searchrecursive(head->next,key);

    }
}

int main() {
Node *head= NULL;
insertatbegin(head,30);
insertatbegin(head,20);
insertatbegin(head,10);
insesrtatend(head,90);
insesrtatend(head,100);
insertinmiddle(head,40,4);
insertinmiddle(head,50,5);
insertinmiddle(head,60,6);
insertinmiddle(head,70,7);
insertinmiddle(head,80,8);
deleteHead(head);

cout<<searchrecursive(head,71)<<endl;
print(head);
}