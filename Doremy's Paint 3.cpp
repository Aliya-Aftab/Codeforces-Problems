#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>a(n);
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
} 
if(mp.size()>=3){
cout<<"No"<<endl;
}
else if(mp.size()==1){
cout<<"Yes"<<endl;
}
else{
auto it=mp.begin();
int freq1=it->second;
it++;
int freq2=it->second;
if(abs(freq1-freq2) <=1){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
}
}