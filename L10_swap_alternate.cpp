#include<iostream>
using namespace std;

void swap_alternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if( i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
int n, arr[50];
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
swap_alternate(arr,n);

printArray(arr,n);
}