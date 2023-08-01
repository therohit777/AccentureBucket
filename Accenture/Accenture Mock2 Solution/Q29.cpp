#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double Distance(int x1,int y1,int x2,int y2){
    double a = pow((x2-x1),2);
    double b = pow((y2-y1),2);
    
    return sqrt(a+b);
}

int main(){
    int x1;
    int y1;
    int x2;
    int y2;

    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;

    cout<<Distance(x1,y1,x2,y2);

    return 0;
}