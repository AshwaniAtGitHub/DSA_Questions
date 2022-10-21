#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<< "Enter a number:"<<endl;
	cin>>n;
	int flag=0;
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"PRIME";
	}
	else{
		cout<<"NOT PRIME";
	}
}
