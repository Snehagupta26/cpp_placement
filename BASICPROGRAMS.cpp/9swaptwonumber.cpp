#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 3;
    cout<<"number before swapping : "<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"number after swapping : "<<a<<" "<<b<<endl;
}
//in function there is concept of call by value call by reference