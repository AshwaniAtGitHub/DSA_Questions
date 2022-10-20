#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a letter"<<endl;
	char L;
	cin>>L;
	if(L>='a' && L<='z'){
		cout<<"This is LowerCase"<<endl;
	}
	else if(L>='A' && L<='Z'){
		cout<<"This is UpperCase"<<endl;
	}
	else if(L>='0' && L<='9'){
		cout<<"This is Numeric"<<endl;
	}
}
