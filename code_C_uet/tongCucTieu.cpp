#include<iostream>
using namespace std;
int a[101];
int main(){
    int n;cin>>n;
    cin>>a[0];
    long sum = 0;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    for(int i =1;i<n;i++){
        if(a[i]<a[i-1]&&a[i]<a[i+1]){
            sum+=a[i];
        }
    }
    if(a[0]<a[1]) sum+= a[0];
    if(a[n-1]<a[n-2])sum+=a[n-1];
    cout<<sum;
    return 0;
}
