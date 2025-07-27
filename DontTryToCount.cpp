#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int generateStr(string x, string s,int n, string temp, int count){
temp=x;
while(n--){
if(temp.find(s)!=string::npos){
return count;
}
else{
temp+=x;
x=temp;
}
}
return -1;
}
int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string x,s;
cin>>x>>s;
string temp=x;
int count=0;
int a=10;
bool flag=false;
while(a){
if(temp.find(s)!=string::npos){
cout<<count<<endl;
flag=true;
break;
}
else{
temp+=x;
x=temp;
count++;
}
a--;
}
if(!flag){
 cout<<"-1"<<endl;
}
}
}