#include<iostream>
using namespace std;

void addFraction(int n1,int d1,int n2,int d2){
    int num;
    int dnum;
    if(d1==d2){
        num = n1+n2;
        dnum = d1;
    }
    else{
        num = n1*d2+n2*d1;
        dnum = d1*d2;
    }

    int x=num;
    while(x>0){
        if(num%x==0 && dnum%x==0){
            num/=x;
            dnum/=x;
            x=num-1;
        }
        x--;
    }

    cout<<num<<" "<<dnum;

}


int main(){
    int n1;
    int d1;
    int n2;
    int d2;
    cin>>n1;
    cin>>d1;
    cin>>n2;
    cin>>d2;

    addFraction(n1,d1,n2,d2);
    return 0;
}