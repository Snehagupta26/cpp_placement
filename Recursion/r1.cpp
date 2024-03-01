#include<iostream>
using namespace std;
//5! = 5*4*3*2*1
// n! = n*(n-1)!
int factorial(int n){
       if(n==0){
        return 1;
       }
    //cout<<n;
       return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<"ans is "<<ans<<endl;
}