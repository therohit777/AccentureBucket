#include<iostream>
using namespace std;

int hcf(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>=b){
        return hcf(a-b,b);
    }
    else{
        return hcf(a,b-a);
    }
}

int main(){
    int a;
    int b;

    cin>>a;
    cin>>b;

    int Hcf = hcf(a,b);
    int lcm = (a*b)/Hcf;

    cout<<lcm;

    return 0;
}