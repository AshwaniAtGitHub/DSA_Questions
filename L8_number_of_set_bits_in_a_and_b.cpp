#include<iostream>
using namespace std;

// Ashwani defined function
int numb_of_set_bits(int a, int b){
	
	int setBits=0;
	
	while(a!=0){
		
		if(a&1){
			setBits++;			
		}
		
		a=a>>1;		
	}
	
	
	while(b!=0){
		
		if(b&1){
			setBits++;			
		}		
		b=b>>1;			
	}
	
	return setBits;
}


int main()
{
	int a,b;
	
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	
	cout<<"Number of set bits in a and b is "<<numb_of_set_bits(a, b)<<"."<<endl;
	
	
}
