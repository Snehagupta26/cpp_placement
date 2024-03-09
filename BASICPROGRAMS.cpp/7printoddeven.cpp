#include<iostream>
using namespace std;
int main(){
 cout<<"odd numbers : "<<endl;
    for(int i = 1 ; i <=100 ; i++){
        
        if(i % 2 != 0){
            cout<<i<<" ";
        }
        //cout<<"even numbers : "<<endl;
      
    }
    cout<<"even numbers : "<<endl;
       for(int i = 1 ; i <=100 ; i++){
        
        if(i % 2 == 0){
            cout<<i<<" ";
        }
        //cout<<"even numbers : "<<endl;
      
    }
    
}