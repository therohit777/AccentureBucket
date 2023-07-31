#include<iostream>
using namespace std;

int Number_of_days_in_month(string s,int a[]){
    int sum = s[3]-'0';
    sum = sum * 10 + (s[4]-'0');
    return a[sum-1];
}

int main(){
    string s;
    cin>>s;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<Number_of_days_in_month(s,a);
    return 0;
}