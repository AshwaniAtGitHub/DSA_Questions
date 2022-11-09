#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	cout<<"The size is "<<v.size()<<endl; //prints the size of the vector
	cout<<"the capacity is "<<v.capacity()<<endl;// prints the Capacity of the vector
	
	v.push_back(1);//inserting the new element at end of the vector
	cout<<"The size is "<<v.size()<<endl; //prints the size of the vector
	cout<<"the capacity is "<<v.capacity()<<endl;// prints the Capacity of the vector
	
	v.push_back(2);//inserting the new element at end of the vector
	cout<<"The size is "<<v.size()<<endl; //prints the size of the vector
	cout<<"the capacity is "<<v.capacity()<<endl;// prints the Capacity of the vector
	
	v.push_back(3);//inserting the new element at end of the vector
	cout<<"The size is "<<v.size()<<endl; //prints the size of the vector
	cout<<"the capacity is "<<v.capacity()<<endl;// prints the Capacity of the vector

//	here size is 3 but capcity is 4 because capacity becomes
//	double on adding new element to the completely filled Vector.

//	Printing the vector
	for (int i:v){
		cout<<i<<" ";
	}cout<<endl;

//	adding more elements
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);


	cout<<"Before pop the vector is"<<endl;
	
	//	Printing the vector
	for (int i:v){
		cout<<i<<" ";
	}cout<<endl;
	cout<<"front element is "<<v.front()<<endl;//to print first element of the vector
	cout<<"back element is "<<v.back()<<endl;//to print the last element of the vector

	v.pop_back();//to pop out last element

	cout<<"After pop out the vector is"<<endl;

	//	Printing the vector after pop out of last element
	for (int i:v){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"front element is "<<v.front()<<endl;//to print first element of the vector
	cout<<"back element is "<<v.back()<<endl;//to print the last element of the vector

	cout<<"The size is "<<v.size()<<endl; //prints the size of the vector
	cout<<"the capacity is "<<v.capacity()<<endl;// prints the Capacity of the vector

}