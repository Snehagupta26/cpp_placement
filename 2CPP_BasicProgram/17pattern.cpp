#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char abc = 'A';
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout<<abc<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
        abc++;
    }
}
//A+i-1