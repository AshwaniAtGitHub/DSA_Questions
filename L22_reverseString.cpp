//To print REVERSE string of  the given string;

#include<iostream>
using namespace std;

void reverse(char name[], int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(name[s++], name[e--]);
	}
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
	cout<<"Enter your name:"<<endl;
	cin>>name;
	int len = lengthOf(name);
	cout<<"Your name is "<<name;
	reverse(name, len);
	cout<<" and its reverse is "<<name;
}
