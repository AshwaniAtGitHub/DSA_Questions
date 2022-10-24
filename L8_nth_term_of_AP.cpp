// a+(n-1)d
// a=7, d=3;
#include<iostream>
using namespace std;

// Ashwani defined function
int nthTerm(int n){
	int nthTerm=(7+((n-1)*3));
	return nthTerm;
}


int main(){
	int n ;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"The nth Term is "<< nthTerm(n) <<endl;
}
