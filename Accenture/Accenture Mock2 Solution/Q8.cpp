#include<iostream>
using namespace std;


int smallest(int a,int b,int c,int d){
    return min(a,min(b,min(c,d)));
}

int main(){
    int a;
    int b;
    int c;
    int d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<smallest(a,b,c,d);
    return 0;
}