#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool checkNguyenTo(int n){
	bool flag =true;
	int dem =0;
	if(n<2){
		flag = false;
	}else if(n==2){
		flag = true;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				dem++;
			}
		}
		if(dem!=0){
			flag = false;
		}
	}
	
	return flag;
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		string s;cin>>s;
		int dem=0;
		for(int j =0;s[j]!=0;j++){
			int x = s[j]-'0';
			if(checkNguyenTo(x)==true)dem++;
		}
		cout<<dem<<endl;	
	}
    return 0;
}
