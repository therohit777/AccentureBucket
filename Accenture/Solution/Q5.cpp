#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string DectoNBase(int n, int num){
    string temp;
    string a[]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    while(num>n){
        int remainder = num%n;
        temp=a[remainder]+temp;
        num/=n;
    }
    temp=a[num%n]+temp;

    return temp;
}


int main(){
    int n;
    int num;

    cin>>n;
    cin>>num;

    cout<<DectoNBase( n,  num);
    return 0;
}