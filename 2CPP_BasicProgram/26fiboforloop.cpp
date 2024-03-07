
#include <iostream>
using namespace std;
int main()
{
   int first = 0;
   int second = 1;
   int count = 3;
   int n;
   cin>>n;
   int num;
    //cout<<first<<" "<<second<<" ";
   for(count ; count <= n ; count++){
       
       num = first + second;
       //cout <<" "<<num<<" ";
       //num ++ ;
       first = second;
       second = num;
       
   }
    cout<<num;
    return 0;
}