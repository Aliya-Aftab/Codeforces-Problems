#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
bool flag=false;
int empty=0, blocked=0;
for(int i=0;i<n;i++){
if(s[i]=='.'){
empty++;
}
else{
blocked++;
}
}


for(int i=1;i<n-1;i++){
if(s[i]=='.'){
if(s[i-1]=='.' && s[i+1]=='.'){
flag=true;
break;
}
}
}
if(flag==true){
cout<<"2"<<endl;
}
else{
cout<<empty<<endl;
}
}   
}