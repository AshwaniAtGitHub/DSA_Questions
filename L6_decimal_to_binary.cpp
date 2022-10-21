#include<iostream>
using namespace std;
 int main(){
 	int decimal,bin[100]={0};
 	
 	
 	cout<<"Enter a number in DECIMAL nuber system to convert in BINARI"<<endl;
 	cin>>decimal;
 	int i=0;
 	while(decimal!=0){
 		
 			int x = decimal%2;
 			
 			bin[i]= x;
 			
		 decimal=decimal/2;
		 i++;
	 }
	 
	 for(int k=i; k>=0; k--){
	 	cout<<bin[k]<<" ";
	 }
 	
 }
