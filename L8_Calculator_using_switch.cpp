#include<iostream>
using namespace std;

int main(){
	int a,b;
	char op;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<"Enter the operation"<<endl;
	cin>>op;
	
	switch(op){
		case'+': cout<< a+b <<endl;
				break;
		case'-': cout<< a-b <<endl;
				break;
		case'*': cout<< a*b <<endl;
				break;
		case'/': cout<< a/b <<endl;
				break;
		case'%': cout<< a%b <<endl;
				break;
		default: cout<<"Please enter a valid Operation"<<endl;
	}

}
