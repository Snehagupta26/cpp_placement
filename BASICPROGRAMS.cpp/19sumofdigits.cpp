#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        //int sum = 0;
        sum = sum + digit;
        n = n/10;
    }
    cout<<sum;
    return 0;
}