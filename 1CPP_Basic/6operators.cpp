#include<iostream>
using namespace std;
int main(){
    int a = 6,b = 8;
    cout<<"Arithmetic : "<<endl;
    //arithmetic
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<a--<<endl;
    cout<<--a<<endl;
    //assignment
    cout<<"Assignment : "<<endl;
    int c = 6;
    cout<<c<<endl;
    //comparison
    cout<<"comaprison : "<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    //logical
    cout<<"logical : "<<endl;
    cout<<((a==b) && (a<b))<<endl;
    cout<<((a==b) || (a<b))<<endl;
    cout<<((a==b) != (a<b))<<endl;
}