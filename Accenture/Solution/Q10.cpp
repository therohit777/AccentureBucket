#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void print_sortedarrays(vector<int>v){
    vector<int> odd;
    vector<int> even;

    for(int i=0;i<v.size();i++){
        if(i%2==0){
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    cout<<"Even Array: ";
    for(int i:even){
        cout<<i<<",";
    }
    cout<<endl;

    cout<<"Odd Array: ";
    for(int i:odd){
        cout<<i<<",";
    }
    cout<<endl;



}

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }

    print_sortedarrays(v);
    return 0;
}