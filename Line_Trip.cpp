#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<int>a;
a.push_back(0);
for(int i=0;i<n;i++){
long long point;
cin>>point;
a.push_back(point);
}
a.push_back(x);
n=a.size();
int maxDist = INT_MIN;
        for (int i = 1; i < n; i++) {
            if(i==n-1){
            maxDist = max(maxDist, 2*(a[i] - a[i - 1]));
            }
            else{
            maxDist = max(maxDist, a[i] - a[i - 1]);
            }

        }

        cout << maxDist << endl;
    }

}