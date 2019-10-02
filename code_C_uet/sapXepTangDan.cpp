#include<iostream>
using namespace std;
int a[101];
int dem[1000000];
int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
    	cin>>a[i];
    	dem[a[i]]++;
	}
	for(int i =0;i<100;i++){
		if(dem[i]!=0){
			for(int j=0;j<dem[i];j++){
				cout<<i<<" ";
			}
		}
	}
    return 0;
}
