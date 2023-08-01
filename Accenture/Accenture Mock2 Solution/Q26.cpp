#include<iostream>
#include<cmath>
using namespace std;

int Binary_Decimal(int n){
    int i=0;
    int sum=0;
    while(n>0){
        sum+=pow(2,i++)*(n%10);
        n/=10;
    }
    return sum;
}


int main(){
    int x;
    cin>>x;
    cout<<Binary_Decimal(x);
    return 0;
}