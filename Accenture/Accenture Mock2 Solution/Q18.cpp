#include<iostream>
#include<cmath>
using namespace std;

bool plusPerfect(int x){
    int n = x;
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
    n=x;
    int sum = 0;
    while(n>0){
        sum += pow(n%10,count);
        n/=10;
    }

    if(sum==x){
        return true;
    }
    return false;
}

int main(){
    int x;
    cin>>x;
    cout<<plusPerfect(x);
    return 0;
}