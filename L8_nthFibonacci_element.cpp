#include<iostream>
using namespace std;

// Ashwani defined function

int nthFibonacci(int n){
	int a=0, b=1, nthFib;
	
	if(n==1){return a;	}
	else if(n==2){return b;	}
	else{
		for (int i=1; i<=n-2; i++)//using n-2 because already printed two fibonacci elaments a & b (0 & 1).
	{
		nthFib = a+b;		
		a=b;
		b=nthFib;
	}
	
	return nthFib;
	}
	
	
}

// main function
int main(){
	
	int num;
	cout<<"Enter the value of n "<<endl;
	cin>>num;
	cout<<"The nth Fibonacci element is "<<nthFibonacci(num);
	
}
