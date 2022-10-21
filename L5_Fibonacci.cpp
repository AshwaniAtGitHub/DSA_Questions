#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number N to print first N fibonacci elements:"<<endl;
	cin>>n;
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	for (int i=1; i<=n-2; i++)//using n-2 because already printed two fibonacci elaments a & b (0 & 1).
	{
		int nextNumber = a+b;
		cout<<nextNumber<<" ";
		a=b;
		b=nextNumber;
	}
}
