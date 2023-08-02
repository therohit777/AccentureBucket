#include<iostream>
using namespace std;

bool check_leap(int year){
    if(year%400==0){
        return true;
    }
    else if(year%4==0 && year%100!=0){
        return true;
    }
    
    return false;
}

int main(){
    int year;
    cin>>year;

    if(check_leap(year)){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}