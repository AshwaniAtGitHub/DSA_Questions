#include<iostream>
using namespace std;
int fact(int n){
	
	int factorial=1;
	
	for(int i= 1; i<=n; i++){
		factorial = factorial*i;
	}
	
	return factorial;
}

int nCr(int n, int r){
	
	int nr= fact(n);
	
	int dr= fact(r) * fact(n-r);
	return nr/dr;
	
}
int main(){
	
	int n,r;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"Enter the value of r"<<endl;
	cin>>r;

	cout<<"The combination is " <<nCr(n, r)<<endl;

}
