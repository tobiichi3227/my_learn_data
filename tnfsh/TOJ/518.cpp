#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int n,wrong;
    cin>>n>>wrong;
    int correct[n+10000];
    for(int i=0;i<n;i++){
        cin>>correct[i];
    }
    for(int i=n;i<n+10000;i++){
        correct[i]=0;
    }
    int m;
    cin>>m;
    int input[m+5],x=0,count=0,correcty=0;
    for(int i=0;i<m;i++){
        cin>>input[i];
        if(input[i]==correct[x]){
            x++;
            count=0;
            correcty++;
        }
        else{
            count++;
            if(count>wrong){
            cout<<"Failed.."<<endl;
                return 0;
            }
        }
    }
    if(correcty==n){
        cout<<"Triggered!!"<<endl;
    }
    else{
        cout<<"Failed.."<<endl;
    }
}
