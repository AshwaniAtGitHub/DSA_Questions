//To print length of  the given string

#include<iostream>
using namespace std;

int lengthOf(char name[]){
	int length=0;
	for(int i=0; name[i] != '\0'; i++){
		length++;
	}
	return length;
}

int main(){
	char name[50];
	cout<<"Enter your name:"<<endl;
	cin>>name;
	
	cout<<"Your name is "<<name<<" and its length is "<<lengthOf(name);
}
