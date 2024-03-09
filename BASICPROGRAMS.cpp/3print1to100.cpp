#include<iostream>
using namespace std;
int main(){
    cout<<"enter number of integers you want to enter : \n";
    int n;
    cin>>n;
    // for(int i = 1 ; i <= n ; i++){
    //     cout<<i<<" ";
    // }
    int i = 1;
    while(i <= n){
        cout<<i<<" ";
        i++;
    }
}