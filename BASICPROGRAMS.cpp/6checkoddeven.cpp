#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number you want to check as odd or even : "<<endl;
    cin>>n;
    if(n%2 == 0){
        cout<<"number is even ";
    }
    else{
        cout<<"number is odd ";
    }
}