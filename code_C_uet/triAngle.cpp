#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int k = 0;
	for(int y = 0;y<n;y++){
		int t = 0;
		while(t<k){
			cout<<".";
			t++;
		}
		for(int x = k;x<n;x++){
			
			cout<<"*";
		}
		k++;
		cout<<""<<endl;
	}
	return 0;
}
