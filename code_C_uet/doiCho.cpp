#include<iostream>
using namespace std;
int a[10001];
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x =0;cin>>x;
    int y =0;cin>>y;
    int k = 0;
    for(int i=0;i<n;i++){
        if(i==x-1){
            k = a[i];
            a[i] = a[y-1];
            a[y-1] = k;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
