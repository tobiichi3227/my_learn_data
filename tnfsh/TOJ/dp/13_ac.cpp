
#include <bits/stdc++.h>
using namespace std;
long long int dp[105][100005];
int main() {
ios::sync_with_stdio(0),cin.tie(0);
int all,n;
while(cin>>all>>n){
long long int w[n+1],p[n+1];
for(int i=1;i>w[i]>>p[i];
}
long long int ans=0;
for(int i=1;i=0){
dp[i][j]=max(dp[i][j],dp[i][j-w[i]]+p[i]);
}
dp[i][j]=max(dp[i][j-1],dp[i][j]);
ans=max(dp[i][j],ans);
}
}
cout<<ans<<"\n";
}
}
