#include<iostream>
#include<cmath>
using namespace std;

bool check(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    bool prime = check(n);
    if(prime){
        cout<<n<<" is a Prime number "<<round(sqrt(n)*100)/100;
    }
    else{
        cout<<n<<" is not a Prime number";
    }
    return 0;
}