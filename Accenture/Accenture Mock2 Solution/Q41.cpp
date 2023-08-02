#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>=b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}