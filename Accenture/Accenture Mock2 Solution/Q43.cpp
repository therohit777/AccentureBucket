#include<iostream>
using namespace std;

bool check(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==9){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=100;i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}