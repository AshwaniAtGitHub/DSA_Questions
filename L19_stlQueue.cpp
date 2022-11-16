#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<string> q;
	
	q.push("Ashwani");
	q.push("Kumar");
	q.push("Maurya");
	
	cout<<"first element is "<<q.front()<<endl;
	cout<<"Size before pop --> "<<q.size()<<endl;
	q.pop();
	cout<<"first element after pop is "<<q.front()<<endl;
	cout<<"Size after pop --> "<<q.size()<<endl;
}
