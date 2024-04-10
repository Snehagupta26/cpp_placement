// #include<iostream>
// using namespace std;
// class Node{
//     public :
//     int data;//node mae data
//     Node* next;//pointer of node type jo next ko point krta hai
// };
// int main(){
//     Node* node1 = new Node();//creating object of node
//     cout<< node1->data <<endl;//printing data and next of node
//     cout<<node1->next<<endl;
// // give 0 0
// }
#include<iostream>
using namespace std;
class Node{
    public :
    int data;//node mae data
    Node* next;//pointer of node type jo next ko point krta hai
    Node(int data /*data1*/)//constructor so that new node mae data ho sake and uska next NULL KO POINT KRE
    {
        this->data = data;
        this->next = NULL;
        // data = data1;
        
        // next = NULL;
    }
};
int main(){
    Node* node1 = new Node(10);//creating object of node
    cout<< node1->data <<endl;//printing data and next of node
    cout<<node1->next<<endl;
// give 10 0
}