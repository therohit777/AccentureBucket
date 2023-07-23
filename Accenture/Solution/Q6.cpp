#include<iostream>
using namespace std;


int countCarry(int n1 ,int n2){
    string s1= to_string(n1);
    string s2 = to_string(n2);

    int carry = 0;
    int carrycounter = 0;

    int i=s1.length()-1;
    int j=s2.length()-1;

    while(i>=0 && j>=0){
        int num1=s1[i--]-'0';
        int num2=s2[j--]-'0';
        if(num1+num2+carry>9){
            carrycounter++;
            carry=1;
        }
        else{
            carry=0;
        }
    }

    while(i>=0){
      int num1=s1[i--]-'0';
       if(num1+carry>9){
            carrycounter++;
            carry=1;
        }
        else{
            carry=0;
        }  
    }

    while(j>=0){
      int num2=s2[j--]-'0';
       if(num2+carry>9){
            carrycounter++;
            carry=1;
        }
        else{
            carry=0;
        }  
    }

    

    return carrycounter;
}


int main(){
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;

    cout<<countCarry(n1,n2);
    return 0;
}