#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char abcd = 'A';
    int i = 1;
    while(i <= n){
        int j = 1;
        while( j <= n){
            cout<<abcd<<" ";
            abcd++;
            j++;
        }
        cout<<endl;
        abcd = abcd - 2;
        i++;
    }
}
//A + i + j -2