#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i = 0; i < size ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;

}
int main(){
    // int arr[5] = {1,2,3,-4,5};
    //cout<<search(arr,5,-4);
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements : "<<endl;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"elements are : "<<endl;
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter key "<<endl;
    cin>>key;
    cout<<search(arr,n,key);//0 if not there 1 if there
    bool found = search(arr,n,key);
    cout<<endl;
    if(found){
        cout<<"key present \n";
    }
    else{
        cout<<"key absent";
    }


}