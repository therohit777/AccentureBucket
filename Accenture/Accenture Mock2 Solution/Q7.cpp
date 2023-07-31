#include<iostream>
using namespace std;

int Greater_Number(int a,int b,int c){
    return max(a,max(b,c));
}

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<Greater_Number(a,b,c);
    return 0;
}