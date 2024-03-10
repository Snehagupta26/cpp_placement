#include<iostream>
using namespace std;
int main(){
    int first = 0;
    int second = 1;
    int n;
    cin>>n;
    if(n==1){
        cout<<first;
    }
    else if(n==2){
        cout<<first<<" "<<second;
    }
    else{
        cout<<first<<" "<<second<<" ";
        int i = 3;
        while(i<=n){
        int num;
        num = first + second;
        cout<<num<<" ";
        first = second;
        second = num;
      
        
        i++;
    }
    }
 
    return 0;
}