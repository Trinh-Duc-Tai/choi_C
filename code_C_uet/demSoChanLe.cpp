#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		int demSoChan = 0,demSoLe = 0;
		for(int i=0;s[i]!=0;i++){
			int x = s[i]-'0';
			if(x%2==0){
				demSoChan++;
			}else{
				demSoLe++;
			}
		}
		cout<<demSoChan<<" "<<demSoLe<<endl;
	}
	return 0;	
}
