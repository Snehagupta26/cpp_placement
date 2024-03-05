#include<iostream>
using namespace std;
//check if number is prime or not
int main(){
    int n ;
    cin>>n;
    int i = 2;
    while(i < n){
        if(n % i != 0){
              cout<<"number is prime for"<<i<<endl;
        }
        else{
            cout<<"not prime for "<<i<<endl;
        }
        i++;
    }
}