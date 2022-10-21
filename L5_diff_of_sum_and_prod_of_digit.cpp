//To print the difference of product and sum of digits of a number.
#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,prod=1,value;
	cout<<"Enter a number"<<endl; 
	cin>>n;
	while(n!=0){
		value = n%10;
		sum = sum+value;
		prod = prod*value;
		n=n/10;			
	}
	int result = prod-sum;
	cout<<result;
	
}
