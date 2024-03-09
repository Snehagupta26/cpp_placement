#include<iostream>
using namespace std;
int add(int a , int b){
    return a+b;
}
int sub(int a , int b){
    return a-b;
}
int mul(int a , int b){
    return a*b;
}
int divi(int a , int b){
    return a/b;
}
int rem(int a , int b){
    return a%b;
}


int main(){
    int a , b;
    cout<<"enter the numbers : ";
    cin>>a>>b;
    int userinput;
    cout<<"enter 1 to add,2 to subtract , 3 to multiply , 4 to find quotient , 5 to find remainder \n";
    cin>>userinput;
    switch(userinput){
        case 1:
        cout<<"addition is : "<<add(a,b);
        break;
        case 2:
        cout<<"subtraction is : "<<sub(a,b);
        break;
        case 3:
        cout<<"multiplication is : "<<mul(a,b);
        break;
        case 4:
        cout<<"quotient is : "<<divi(a,b);
        break;
        case 5:
        cout<<"remainder is : "<<rem(a,b);
        break;
        default:
        cout<<"no suitable option";
    }


}