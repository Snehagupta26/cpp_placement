#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //constants
    const int a = 89;
    cout<<a<<endl;
    //manipulators - endl and iomanip
    cout<<a<<endl;
    cout<<setw(4)<<a<<endl;
    //operator
    cout<<4*2+3-4*1<<endl;//should give 7
}