#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char abcd = 'A';
    int i = 1;
    while(i <= n){
        int j = 1;
        while( j <= i){
            cout<<abcd<<" ";
            abcd++;
            j++;
        }
        abcd = abcd-1;
        cout<<endl;
        
        i++;
    }
}//wrong