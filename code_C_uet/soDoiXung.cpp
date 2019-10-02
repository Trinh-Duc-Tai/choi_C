#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
    	string s;cin>>s;
    	int dodai = 0;
		for(int i=0;s[i]!=0;i++){
			dodai++;
		}
		bool flag = true;
		for(int i=0;s[i]!=0;i++){
			int x1 = s[i]-'0';
			int x2 = s[dodai-1-i]-'0';
			if(x1!=x2){
				flag = false;
			}
		}
		if(flag==true){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
    return 0;
}
