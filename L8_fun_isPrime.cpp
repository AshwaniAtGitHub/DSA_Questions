#include<iostream>
using namespace std;

bool isPrime(int n){
	
	for (int i=2; i<n; i++){
		
		if(n%i==0){
			return 0;
		}	
	}
	return 1;

}

int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	
	if(isPrime(num)){
		cout<<" is a PRIME number"<<endl;
	}
	else{
		cout<<" is NOT a PRIME number"<<endl;
	}

}
