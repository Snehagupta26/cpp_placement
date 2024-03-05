#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    
    while(i<=n){
        char abc = 'A';
        int j = 1;
        while(j <= n){
            cout<<abc<<" ";
            abc++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//A+j-1