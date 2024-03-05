#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char count = 'A';
    while(i<=n){
        //char abc = 'A';
        int j = 1;
        while(j <= n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}