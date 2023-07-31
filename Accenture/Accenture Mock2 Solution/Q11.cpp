#include<iostream>
#include<cmath>
using namespace std;

bool checkPerfectSquare(int n){
    int k = sqrt(n);
    if(k*k==n){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    if(checkPerfectSquare(n)){
        cout<<"Success";
    }
    else{
        cout<<"Failure";
    }
    return 0;
}