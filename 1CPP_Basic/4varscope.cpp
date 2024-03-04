#include<iostream>
using namespace std;
int global = 9;
void sum(){
    cout<<global;//print above global
}
int main(){
    //local takes precedence over global
    int global = 6;//local
    global = 90;//local updated
    cout<<global<<endl;//local printed
    sum();//global printed
}