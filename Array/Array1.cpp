#include<iostream>
using namespace std;
int main(){
    int arr1[5];
    cout<<"printing array value : "<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<" "<<arr1[3]<<" "<<arr1[4]<<endl;//garbage values
    int arr2[10];
    cout<<"accessing element of greater value : "<<arr2[15]<<endl;//array error//garbage value
    cout<<"printing arr3 : "<<endl;
    int arr3[5] = {1,2,3,4,5};
    for(int i = 0; i < 5;i++){
        cout<<arr3[i]<<endl;//will print value of array
    }
    cout<<"printing arr4 : "<<endl;
    int arr4[15] = {6,7};
    for(int i = 0; i <15 ; i++){
        cout<<arr4[i]<<endl;//print 2 element and rest all element 0
    }
    cout<<"printing arr5 : "<<endl;
    int arr5[15] = {0};//all initialized to 0
    for(int i = 0; i <15 ; i++){
        cout<<arr5[i]<<endl;
    }
    cout<<"printing arr6 : "<<endl;
    int arr6[15] = {1};//only first element 1 rest all 0
    for(int i = 0; i <15 ; i++){
        cout<<arr6[i]<<endl;
    }
    //We can initialize the array with any value by using the fill_n command
    cout<<"filling whole array by 1 : "<<endl;
    int array[10];
    fill_n(array,10,1);
    for(int i = 0; i<10;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"filling whole array by 5 : "<<endl;
    int array1[10];
    fill_n(array1,10,5);
    for(int i = 0; i<10;i++){
        cout<<array1[i]<<" ";
    }
}