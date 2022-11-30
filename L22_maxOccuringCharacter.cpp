#include<iostream>
using namespace std;


char getMaxOccuringChar(string s){
    int arr[26]={0};
    for(int i=0; i<=s.length(); i++){

        int num=0;
        if( s[i]>='a' && s[i]<='z'){
            num = s[i]-'a';
        }
        else{
            num = s[i] - 'A';
        }

        arr[num]++;

    }

    int maxi = -1, ans =-1;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi = arr[i];
        }
    }
    char finalAnswer = 'a'+ans;
    return finalAnswer;

}
int main(){
    string s;
    cout<<"Enter a string:"<<endl;
    cin>>s;

    cout<<getMaxOccuringChar(s);
    return 0;
}