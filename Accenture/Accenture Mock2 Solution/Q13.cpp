#include<iostream>
using namespace std;

void Printdigits(int n){
    int sum=0;
    while(n>0){
        sum=sum*10+n%10;
        n/=10;
    }
    while(sum>0){
        cout<<sum%10<<" ";
        sum/=10;
    }
}

int main(){
    int n;
    cin>>n;

    Printdigits(n);
    return 0;
}