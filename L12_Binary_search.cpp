#include<iostream>
using namespace std;

int binSearch(int arr[], int size, int key){
	
	int s=0;
	int e=size-1;
	int mid=s/2 + e/2;
	
	while(s<=e){
		if(arr[mid]==key){
			return mid;
		}
		
		if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		
		mid = s/2 + e/2;
		
	}
return -1;
}

int main(){
	int even[6]={2, 4, 7, 9, 12, 19};
	int odd[7]={2, 3, 4, 5, 13, 17, 18};
	
	cout<<"The index of 12 is "<<binSearch(even, 6, 12)<<endl;
	cout<<"The index of 5 is "<<binSearch(odd, 7, 5)<<endl;
	
	return 0;
}
