#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
            if(j!=i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<i;
             if(j!=i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}