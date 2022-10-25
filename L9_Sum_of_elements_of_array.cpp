#include<iostream>
using namespace std;

int sum_of_elements_of_array(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}

int main(){
    int n, arr[50];
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The sum of elements of the array is: "<<sum_of_elements_of_array(arr,n);
}