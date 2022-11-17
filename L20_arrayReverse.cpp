#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0, e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}


int main(){
    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(4);

    vector<int> result = reverse(v);
    
    cout<<"Printing given array"<<endl;
    print(v);
    cout<<"Printing reverse array"<<endl;
    print(result);


    return 0;
}