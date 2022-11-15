// List stl is implemented using Doubly linked list(having two pointers )

#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_front(1);
    l.push_back(2);
    l.push_back(3);

    cout<<"elements of the deque are :"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

}