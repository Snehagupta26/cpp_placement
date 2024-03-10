#include<iostream>
using namespace std;
int main(){
    int a = 12;
    int b = 16;
    int r;
    while(true){        // a b r    a b r
        r = b % a;    //   4 6 2    6 2 0
        if( r== 0){   
            break;
        } 
        a = b;       //    6 6 2    2 2 0
        b = r;          // 6 2 2    2 0 0
        

    }
       
        

    
    cout<<"hcf : "<<b;
    return 0;
}