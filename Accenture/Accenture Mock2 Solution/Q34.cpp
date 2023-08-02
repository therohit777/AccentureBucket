#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int mid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* temp = head;
    
    int count =0;
    while(temp){
        count++;
        temp = temp->next;
    }

    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(count%2==0){
        return slow->next->data;
    }
    return slow->data;
}


int main(){
    Node* head = new Node(0);
    
    int n;
    cin>>n;

    Node* temphead = head;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        Node* temp = new Node(data);
        temphead->next = temp;
        temphead=temp;
    }
    
    head=head->next;
    cout<<mid(head);
    // cout<<mid->data;
    return 0;
}