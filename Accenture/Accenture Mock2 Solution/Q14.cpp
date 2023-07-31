#include<iostream>
using namespace std;

void Patterns(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0 ||j==m-1||i==n-1){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    Patterns(n,m);
    return 0;
}