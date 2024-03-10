#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter number to check if its armstrong or not"<<endl;
    cin>>y;
    int n = y;
    int original = y;
    int sumofcubeofdigit = 0;
    while( n != 0){
        int bit = n %10;
        sumofcubeofdigit = sumofcubeofdigit + (bit*bit*bit);
        n = n/10;
    }
    cout<<sumofcubeofdigit<<endl;
    if(sumofcubeofdigit == original){
        cout<<"its armstrong";
    }
    else{
        cout<<"not an armstrong";
    }

    return 0;
}