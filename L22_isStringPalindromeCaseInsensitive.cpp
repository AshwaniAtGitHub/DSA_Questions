//Check wheather the given String is PALINDROME or not;

#include<iostream>
using namespace std;

char toLowerCase(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		char press = ch - 'A'+'a';
		return press;
	}
}
bool isPalindrome(char name[], int len){
	int s=0;
	int e=len-1;
	
	while(s<e){
		if(  toLowerCase(name[s])  !=  toLowerCase(name[e]) ){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}

int lengthOf(char name[]){
	int length=0;
	for(int i=0; name[i] != '\0'; i++){
		length++;
	}
	return length;
}

int main(){
	char name[50];
	cout<<"Enter a String to check whether it is a Palindrome or not:"<<endl;
	cin>>name;
	int len=lengthOf(name);
	cout<<"Is it a Palindrome? : "<<isPalindrome(name,len);
}
