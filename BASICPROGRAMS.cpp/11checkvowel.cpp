#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter the alphabet : "<<endl;
    cin>>alpha;
    if( alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ){
        cout<<"It is a vowel "<<endl;
    }
    else{
        cout<<"It is not a vowel "<<endl;
    }
}