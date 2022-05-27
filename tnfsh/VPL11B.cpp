#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main(){
    miyuki_is_my_wife;
    int n;
    cin>>n;
    if(n&1==1) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<i+1;
            }
            cout<<endl;
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                cout<<" ";
            }
            cout<<i+1<<endl;
        }
    }
    else{
        cout<<"This is a Xmas tree.\n";
    }
}
