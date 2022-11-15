#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("Ashwani");
    s.push("Kumar");
    s.push("Maurya");

    cout<<"top element --> "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop --> "<<s.top()<<endl;

    cout<<"size of stack --> "<<s.size()<<endl;

    cout<<"stack is Empty or Not --> "<<s.empty()<<endl;   


}