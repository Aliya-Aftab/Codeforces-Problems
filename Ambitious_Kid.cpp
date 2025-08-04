#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N ;
vector<int>A(N);
int minPos=INT_MAX;
int maxNeg=INT_MIN;
bool flag=false;
for(int i=0;i<N;i++){
cin>>A[i];
if(A[i]==0){
flag=true;
}
else if(A[i]>0){
minPos=min(minPos, A[i]);
}
else{
maxNeg=max(maxNeg, A[i]);
} 
}
if(flag){
cout<<"0"<<endl;
}
else if(maxNeg==INT_MIN){
cout<<minPos;
}
else if(minPos==INT_MAX){
cout<<-maxNeg;
}
else{
int ans=min(minPos, -maxNeg);
cout<<ans<<endl;
}
}