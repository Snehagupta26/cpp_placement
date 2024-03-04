#include<iostream>
using namespace std;
int globalvar = 300;
int samename = 7000;
void fun(){
    int localvar = 90;
    int samename = 900;
    cout<<"this is local var : "<<localvar<<endl;
    cout<<"this is global var : "<<globalvar<<endl;
    cout<<samename<<endl;//print local one
    cout<<samename<<endl;//print local one
}
int main(){
    int a = 0000;//print 0 only
    char abc = 'a';
    float b = 1.4;
    double c = 1.445777;
    string name = "sneha";
    bool istrue = true;
    cout<<a<<" "<<abc<<" "<<b<<" "<<c<<" "<<name<<" "<<istrue<<endl;
    //fun();
    cout<<samename<<" "<<globalvar<<endl;//print samename global one
}