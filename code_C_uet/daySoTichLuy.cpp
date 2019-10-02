#include<iostream>
using namespace std;
int a[100];
int b[100];
int main(){
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=0;
        for(int j=0;j<i+1;j++){
            b[i]+=a[j];
        }
    }
    for(int i =0;i<n;i++){
    	cout<<b[i]<<" ";		
	}
    return 0;
}
