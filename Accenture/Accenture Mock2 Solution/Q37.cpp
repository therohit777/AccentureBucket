#include<iostream>
using namespace std;

int remainder(int a,int b){
    return a%b;
}

int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;

    cout<<remainder(num1,num2);   
    return 0;
}