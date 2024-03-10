#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2 ; i < n ;i++){
        if(n % i != 0){
            cout<<"prime for "<<i<<endl;
        }
        else{
            cout<<"notprime for "<<i<<endl;
        }
    }
    return 0;
}