#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    if(y < 0){
        cout<<"not a palindrome ";
    }
    int original = y;
    int n = y;
    int rev = 0;
    while( n!= 0){
        int bit = n %10;
        rev = rev*10 + bit;
        n = n/10;
    }
    cout<<rev<<endl;;
    if(rev == original){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}