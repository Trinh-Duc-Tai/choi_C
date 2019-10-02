#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string s;cin>>s;
        int dodai = 0;
        int demChan = 0,demLe=0;
        for(int i=0;s[i]!=0;i++){
        	dodai++;
		}
//		cout<<dodai;
        for(int i=0;s[i]!=0;i++){
        	int x = s[i]-'0';
			if(x%2==0){
        		demChan++;
			}else{
				demLe++;
			}
			
		}
		if(demChan==dodai||demLe==dodai){
			cout<<"yes"<<endl;	
		}else{
			cout<<"no"<<endl;
		}
    }
    return 0;
}
