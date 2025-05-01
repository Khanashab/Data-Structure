// STRING LECTURE 2
// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

# include<iostream>
#include <algorithm>
using namespace std;
int main(){
  cout<<"ENTER THE STRING : ";
  string s1,s2;
  cin>>s1;
  cout<<"ENTER THE STRING : ";
   cin>>s2;
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  int flag=0;
  if(s1==s2){
    flag=1;
  }
  else{
    flag=0;
  }
  if(flag==1){
    cout<<"it is anagram string";
  }
  else{
    cout<<"it is not an anagram string";
  }
}