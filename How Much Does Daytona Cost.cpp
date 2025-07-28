#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool exists(vector<int>a, int n, int k){
for(int i=0;i<n;i++){
if(a[i]==k){
return true;
}
}
return false;
}
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
if(exists(a,n,k)){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
}