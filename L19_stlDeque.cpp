#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Print INDEX zero element --> "<<d.at(0)<<endl;;

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    
    cout<<"size of deque before erasel "<<d.size()<<endl;
    cout<<"elements of deque before erasel"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.erase(d.begin(),d.begin()+2); //Need to enter the range of elements.
    cout<<"size of deque after erase "<<d.size()<<endl;

    cout<<"elements of deque after erasel"<<endl;
    for(int i:d){
    cout<<i<<" ";
    }cout<<endl;
    
}