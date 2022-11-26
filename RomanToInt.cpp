#include <bits/stdc++.h>
using namespace std;

int roman_to_int(string s){
	map<char,int> conversion;
	conversion['I'] =   1;
	conversion['V'] =   5;
	conversion['X'] =  10;
	conversion['L'] =  50;
	conversion['C'] = 100;
	conversion['D'] = 500;
	conversion['M'] =1000;
	int number=0,i=0;
	
	
	if(s.length()<=1){
		return conversion[s.at(0)];
	}
	else{
		while(i<s.size()){
			if(conversion[s[i]]<conversion[s[i+1]]){
				number+=conversion[s[i+1]]-conversion[s[i]];
				i+=2;
			}
			else{
				number+=conversion[s[i]];
				i++;
			}
		}
		return number;
	}
}

int main(){
	string roman;
	
	cout<<"Enter the roman number (in capital only): ";
	getline(cin,roman);
	
	int number;
	number=roman_to_int(roman);
	
	cout<<"The interger form is: "<<number;
	
	return 0;
}
