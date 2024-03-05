#include<iostream>
using namespace std;
int main(){
    int i ;
    int n;
    cin>>n;
    i = 1;
    int sum = 0;
    while(i <= n){
        if(i%2 == 0){
            sum = sum + i;
            i++;
        }
        i++;
    }
    cout<<"sum of even number is "<<sum;
}