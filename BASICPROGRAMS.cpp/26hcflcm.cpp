#include<iostream>
using namespace std;
int main(){
    int a = 12;
    int b = 16;
    int x = a;
    int y = b;
    int r;
    while(true){        // a b r    a b r
        r = b % a;    //   4 6 2    6 2 0
        if( r== 0){   
            break;
        } 
        a = b;       //    6 6 2    2 2 0
        b = r;          // 6 2 2    2 0 0
        

    }
    cout<<"hcf : "<<b<<endl;
    int lcm = (x*y)/b;
    cout<<"lcm is "<<lcm;
    return 0;
    //return 0;
}