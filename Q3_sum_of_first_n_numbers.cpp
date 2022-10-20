//Print the sum of first n numbers
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number:"<<endl;
	int n,i=1,sum=0;
	cin>>n;
	while(i<=n){
		sum+=i;
		i++;
	}
	cout<<"the sum is "<<sum<<endl;
}
