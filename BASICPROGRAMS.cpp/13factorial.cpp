#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to find factorial : "<<endl;
    cin>>n;
    int ans = 1;
    while(n != 0){
        ans = n * ans;
        n = n-1;
    }
    cout<<ans;
    return 0;
}