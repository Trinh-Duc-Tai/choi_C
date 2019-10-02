#include<iostream>
#include<string>
using namespace std;
int a[10000];
int b[10000];
int main(){
	int t;cin>>t;
	for(int i =0;i<t;i++){
		cin>>a[i];
		
		while(a[i]>0){ //473,47
			b[i]+=a[i]%10; //3,7
			a[i] = a[i]/10; //47,4
		}	
		cout<<b[i]<<endl;
	}
    return 0;
}
