#include<iostream>
#include<string>
using namespace std;
int main(){
    int m,n,q;
    cin>>m>>n>>q;
    int a[m][n];
    for(int i =0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[q][2];
    for(int i=0;i<q;i++){
        cin>>b[i][1];
        cin>>b[i][2];
    }
    for(int i=0;i<q;i++){
    	cout<<a[b[i][1]-1][b[i][2]-1]<<endl;
    }
    return 0;
}
