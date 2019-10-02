#include<iostream>
using namespace std;
int a[100];
int uocLeLonNhat(int n){
    int res = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            if(i%2!=0){
                res = i;
            }
        }
    }
    return res;
}
int main(){
    int t;cin>>t;
    for(int i =0;i<t;i++){
        cin>>a[i];
        cout<<uocLeLonNhat(a[i])<<endl;
    }
    
    return 0;
}
