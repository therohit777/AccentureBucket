#include<iostream>
using namespace std;

bool checkPass(char str[],int n){
    if(n<4){
        return false;
    }
    bool digitcheck=false;
    bool capcheck = false;
    for(int i=0;i<n;i++){
        if(isdigit(str[0])){
            return false;
        }
        if(isupper(str[i])){
            capcheck=true;
        }
        if(isdigit(str[i])){
            digitcheck=true;
        }
        if(str[i]==' ' || str[i]=='/'){
            return false;
        }
    }
    
    return digitcheck && capcheck;
}

int main(){
    int n;
    cin>>n;
    char* str = new char[n];
    cin>>str;
    cout<<checkPass(str,n);
    return 0;
}