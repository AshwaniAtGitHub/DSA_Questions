// The getline function takes an input stream and a string as parameters and reads a line of text from the stream into the string.


#include<iostream>
using namespace std;
int main() {

    string bio;
    
    cout << "Tell us about yourself: ";
    
    getline(cin, bio);
    
    cout << "Your bio says: " << bio;
}