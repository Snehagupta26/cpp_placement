#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(int data){
         Node* temp = new Node(data);
         temp->next = node1;
         temp = head;
}
int main(){
     Node* node1 = new Node(10);
     Node* head = node1;

     insertathead(80);
     cout<<head->data;
     //cout<<node->next;
}