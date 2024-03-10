#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2 ; i <= n ;i++){
        for(int j = 2 ; j <= i-1 ; j++){
             //pending



        }
        if(n % i != 0){
            cout<<"prime for "<<i<<endl;
        }
        // else{
        //     cout<<"notprime for "<<i<<endl;
        // }
    }
    
    return 0;
}