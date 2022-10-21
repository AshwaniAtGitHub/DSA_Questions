#include<iostream>
#include<math.h>
using namespace std;
 int main(){
 	int decimal=0,bin=0;
 	cout<<"Enter a number in DECIMAL nuber system to convert in BINARI"<<endl;
 	cin>>decimal;
 	int i=0,bit=0;
 	while(decimal!=0){
 		
 			int bit = decimal&1;
 			
 			bin = (bit*pow(10,i))+bin;
 			
		 decimal=decimal>>1;
		 i++;
	 }	
	 cout<<bin;
 }
