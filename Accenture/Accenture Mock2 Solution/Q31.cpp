#include<iostream>
using namespace std;


int countSetbits(int n){
    int count = 0;
    while(n>0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countSetbits(n);
    return 0;
}