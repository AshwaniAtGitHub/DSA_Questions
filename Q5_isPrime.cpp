#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number:"<<endl;
	int n,i=2,Flag=0;
	cin>>n;
	while(i<n){
		if(n%i==0){
			Flag=1;
			break;			
		}
		else{i++;}
	}
	if(Flag==0){
		cout<<"PRIME"<<endl;
	}
	else{
		cout<<"NOT PRIME"<<endl;
	}
}
