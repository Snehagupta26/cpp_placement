#include<iostream>
using namespace std;
int main(){
    cout<<"enter the table which you want in reverse : "<<endl;
    int n;
    cin>>n;
    cout<<"table of "<<n<<" is as follows : "<<endl;
    for(int i = 10; i >= 1 ;i--){
        cout<<n<<" multiply by "<<i<<" gives "<< (n*i)<<endl;
    }
}