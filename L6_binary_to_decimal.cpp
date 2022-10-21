#include<iostream>
#include<math.h>
using namespace std;
 int main(){
 	int decimal=0,bin=0;
 	cout<<"Enter a number in BINARY nuber system to convert in DECIMAL"<<endl;
 	cin>>bin;
 	int i=0;
 	while(bin!=0){
 		
 			int digit = bin%10;
 			if(digit==1){
 				decimal=decimal+pow(2, i);
			 }
 			
 		bin=bin/10;	
		 i++;
	 }	
	 cout<<decimal;
 }
