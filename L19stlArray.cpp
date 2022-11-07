#include<iostream>
#include<array>

using namespace std;

int main(){
	int basicArr[4]={1, 2, 3, 4};
	
	
	array<int, 4> a = {1, 2, 3, 4};
	
	int size = a.size();
	
	for (int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	cout<<a.at(2)<<endl;  //returns element at index 2
	cout<<a.empty()<<endl; //returns 0 if array is empty Else 1
	cout<<a.front()<<endl; //returns first element of the array
	cout<<a.back()<<endl; //returns the last element of the array

}
