#include<iostream>
using namespace std;


long long int sqrtIntegerBinSearch(int n){

    int s=0,e=n;
    int sqRoot;
    long long int mid=s+(e-s)/2;

    while(s<=e){
        long long int square=mid*mid;
        if(n==square){
            return mid;
        }
        else if (square>n){
            e=mid-1;
        }
        else{
            sqRoot=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return sqRoot;
}

double sqrtMorePrecision(int n, int precision, int tempSolution){

    double factor = 1;
    double ans = 0;
    for(int i=0; i<precision; i++){
    	
        factor = factor/10;
        ans = tempSolution;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
            
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    long long int tempSolution=sqrtIntegerBinSearch(n);
    cout<<"Integral square root is "<<sqrtIntegerBinSearch(n)<<endl;
    cout<<"Square root is "<<sqrtMorePrecision(n, 3, tempSolution)<<endl;
    return 0;
}
