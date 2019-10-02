#include<iostream>
using namespace std;
int arr[1000];
int main(){
	int n;cin>>n;
	int res = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		res = res xor arr[i];
	}	
	cout<<res;
	return 0;
}
