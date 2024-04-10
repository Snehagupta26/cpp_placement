// #include<iostream>
// using namespace std;
// //increasing order
// int binarysearch(int arr[] ,int size, int key){
//         int left = 0;
//         int right = size - 1;
//         int mid = (left + right)/2;
//         while(left <= right){
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] < key){
//            left = mid + 1;

//         }
//         else if(arr[mid] > key){
//             right = mid - 1;
//         }
//         mid = (left + right)/2;
//       }
//       return -1;
     
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int key ;
//     int size = 5;
//     cout<<binarysearch(arr,5,1);
//     cout<<binarysearch(arr,5,2);
//     cout<<binarysearch(arr,5,3);
//     cout<<binarysearch(arr,5,4);
//     cout<<binarysearch(arr,5,5);
//     cout<<endl;
//     int arr2[4] = {1,2,4,6};
//     cout<<binarysearch(arr2,4,1);
//     cout<<binarysearch(arr2,4,2);
//     cout<<binarysearch(arr2,4,4);
//     cout<<binarysearch(arr2,4,6);
// }
#include<iostream>
using namespace std;
//increasing order
int binarysearch(int arr[] ,int size, int key){
        int left = 0;
        int right = size - 1;
        int mid = left + (right - left)/2;//(left + right)/2;
        while(left <= right){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
           right = mid - 1;

        }
        else if(arr[mid] > key){
            
            left = mid + 1;
        }
        mid = left + (right - left)/2;//(left + right)/2;
      }
      return -1;
     
}
int main(){
    int arr[5] = {81,72,63,44,15};
    int key ;
    int size = 5;
    cout<<binarysearch(arr,5,81);
    cout<<binarysearch(arr,5,72);
    cout<<binarysearch(arr,5,63);
    cout<<binarysearch(arr,5,44);
    cout<<binarysearch(arr,5,15);
    cout<<binarysearch(arr,5,156);
    
    cout<<endl;
    int arr2[4] = {71,42,14,6};
    cout<<binarysearch(arr2,4,71);
    cout<<binarysearch(arr2,4,42);
    cout<<binarysearch(arr2,4,14);
    cout<<binarysearch(arr2,4,6);
    cout<<binarysearch(arr2,4,63);
}