#include<iostream>
using namespace std;
int a = 90;
int main(){
    int a = 80;
    cout<<"value of local a "<<a<<endl;
    cout<<"value of global a "<<::a<<endl;
    float f = 90.90;
    double d = 90.90;
    cout<<sizeof(90.90);
    cout<<endl;
    float f1 = 89.90f;
    long double d1 = 89.90l;
    cout<<sizeof(89.90l)<<endl;
    cout<<sizeof(89.90f)<<endl;
    //reference variables
    int x = 67;
    int &y = x;
    cout<<"value of y : "<<y<<endl;
    float abc = 90.65;
    cout<<int(abc)<<" "<<(int)abc;
}