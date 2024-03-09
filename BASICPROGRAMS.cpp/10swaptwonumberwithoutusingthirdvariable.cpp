#include<iostream>
using namespace std;
int main(){
    int a = 6;
    int b = 9;
    cout<<"before swapping : "<<a<<" "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swapping : "<<a<<" "<<b<<endl;
}