#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        if( i % 2 == 0){
            sum = sum + i;
        }
    }
    cout<<"sum of even numbers :"<<sum;
    cout<<endl;
    int sum2 = 0;
    for(int i = 1 ; i <= n ; i++){
        if( i % 2 != 0){
            sum2 = sum2 + i;
        }
    }
    cout<<"sum of odd numbers :"<<sum2;
    return 0;

}