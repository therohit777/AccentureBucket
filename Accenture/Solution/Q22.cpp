#include<iostream>
using namespace std;

int charity(int n){
    int charity_total = 0;
    for(int i=1;i<=n;i++){
        charity_total+=i*i;
    }
    return charity_total;
}


int main(){
    int n;
    cin>>n;
    cout<<charity(n);
    return 0;
}