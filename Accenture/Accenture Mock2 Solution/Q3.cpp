#include<iostream>
using namespace std;


int GCD(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return GCD(a-b,a);
    }
    if(b>=a){
        return GCD(a,b-a);
    }
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<GCD(a,b);
    return 0;
}