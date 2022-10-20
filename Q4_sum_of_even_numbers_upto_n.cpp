//Print the sum of even numbers upto n.
 
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number:"<<endl;
	int n,i=2,sum=0;
	cin>>n;
	while(i<=n){
		sum+=i;
		i+=2;
	}
	cout<<"the sum is "<<sum<<endl;
}
