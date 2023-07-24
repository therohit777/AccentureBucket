#include<iostream>
using namespace std;

int operation(int a,int b,int c){
    switch(c){
        case 1:
              return a+b;
        case 2:
              return a-b;
        case 3:
             return a*b;
        case 4:
             return a/b;
    }
    return -1;
}

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<operation(a,b,c);
    return 0;
}