#include<iostream>
using namespace std;

string reverseWords(string s){
    string news;
    string k;
    for(int i:s){
        if(i==' '){
            news=k+" "+news;
            k.clear();
            continue;
        }
        k.push_back(i);
    }
    news=k+" "+news;
    return news;
}

int main(){
    char s[1000];
    cin.getline(s,1000);
    cout<<reverseWords(s); 
    return 0;
}