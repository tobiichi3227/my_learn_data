#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //建表
    long long int c[101][101]; //c[n][m]
    c[1][1]=1;
    for (int i=1;i<101;i++){
        c[i][0]=1;
    }
    for (int n=2;n<101;n++){
        for (int m=1;m<101;m++){
            c[n][m]=c[n-1][m-1]+c[n-1][m];
        }
    }
    //INPUT & OUTPUT
    int a,b;
    while (cin >> a >> b){
        if (a==0) return 0;  //a==0 結束
        cout << c[a][b] << "\n";
    }
}
