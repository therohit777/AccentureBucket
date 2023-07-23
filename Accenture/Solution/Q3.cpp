#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool check_Anagram(string s1,string s2){
   vector<int> v (26,0);
   for(int i:s1){
      if(i>='A' && i<='Z'){
        i = i-'A'+'a';
      }
      v[i-'a']++;
   }

   for(int i:s2){
      if(i>='A' && i<='Z'){
        i = i-'A'+'a';
      }
      v[i-'a']--;
   }

   for(int i :v){
    if(i>=1){
        return false;
    }
   }
   return true;
}



int main(){
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;

    cout<<check_Anagram(s1,s2);
    return 0;
}