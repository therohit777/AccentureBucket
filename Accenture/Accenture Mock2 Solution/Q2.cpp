#include<iostream>
#include<cmath>
using namespace std;

double Area(int d){
    double r = (double) d/2;
    double area =  round(3.14*r*r*100)/100;
    return area;
}

int main(){
    int diameter;
    cin>>diameter;
    cout<<Area(diameter);
    return 0;
}