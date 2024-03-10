#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if( n % 4 == 0){
        cout<<"leap year "<<endl;
    }
    else{
        cout<<"no leap year"<<endl;
    }
    return 0;
}