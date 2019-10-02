#include<iostream>
using namespace std;
int main(){
//	1/2+2/3+...+n/(n+1)
	int n;
	cin>>n;
	long thuong = 1;
	for(int i=2;i<=(n+1);i++){
		thuong*=i;	
	}
	long tu = 0;
	float tong;
	for(int i=1;i<=n;i++){
		for(int j=2;j=<(n+1);j++){
			if(j!=(i+1)){
				tong=i;
				tong*=j;
			}
		}
		tu+=tong;
	}
	float kq = tu/thuong;
	printf("%0.5f",kq);
	return 0;	
}
