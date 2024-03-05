#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int count = i;
//         int j = 1;
//         while(j <= i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
int main(){
    int n;
    cin>>n;
    int i = 1,j=1;
    while(i<=n){
        //int count = i;
        int j = 1;
        while(j <= i){
            // cout<<count<<" ";
            // count++;
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}