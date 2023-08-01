#include<iostream>
using namespace std;

string Digital_time(string s){
    int evening = 0;
    if(s[s.length()-2]=='P'){
        evening =1;
    }
    int hours = s[0]-'0';
    hours=hours*10 + s[1]-'0';

    if(evening){
        hours+=12;
    }
    else if(evening==0 && hours==12){
        hours=0;
    }

    string digitalhour = to_string(hours);
    if(digitalhour.length()==1){
        string s = "0";
        digitalhour = s+digitalhour;
    }

    s.pop_back();
    s.pop_back();

    s[0]=digitalhour[0];
    s[1]=digitalhour[1];

    return s;
}

int main(){
    string s;
    cin>>s;

    cout<<Digital_time(s);
    return 0;
}