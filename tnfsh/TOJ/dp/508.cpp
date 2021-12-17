#include<iostream>
using namespace std;
int n, m, ans, dp[1005][1005];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
char arr[1005][1005];

int dfs(int x, int y){
	if(arr[x][y] == '0') return dp[x][y] = 1;
	
	if(dp[x][y]) return dp[x][y];
	int res = 0;
	for(int i=0 ; i<4 ; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || nx >= n || ny < 0 || ny >=m || arr[nx][ny] + 1 != arr[x][y]) continue;
		res += dfs(nx, ny);
	}
	return dp[x][y] = res;
}

int main(){
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(arr[i][j] == '9')
				ans += dfs(i, j);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
