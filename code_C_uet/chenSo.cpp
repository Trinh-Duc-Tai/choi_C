#include<iostream>
using namespace std;
int a[1001];
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Chen so: ";
    int x;cin>>x;
    cout<<"Chen vi tri";
    int vitri;cin>>vitri;
	int vt = vitri-1;
	
    for(int i=n;i>=vt;i--){
        a[i+1]=a[i];
    }
    a[vt]=x;
    for(int i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
