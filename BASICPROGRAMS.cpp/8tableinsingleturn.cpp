#include<iostream>
using namespace std;
int main(){
    // cout<<"enter the table which you want : "<<endl;
    // int n;
    // cin>>n;
  //  cout<<"table of "<<n<<" is as follows : "<<endl;
  for(int n = 2 ; n<= 10 ; n++){
      for(int i = 1; i <= 10 ;i++){
        cout<<n<<" multiply by "<<i<<" gives "<< (n*i)<<endl;
    }
  }
    
}