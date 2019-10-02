#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
    	string s;cin>>s;
    	int so;cin>>so;
    	bool flag = false;
    	for(int j=0;s[j]!='\0';j++){
    		int x = s[j]-'0';
    		if(x==so){
    			flag = true;
    			cout<<j+1<<endl; //vi tri so trong chuoi
			}
		}
		if(flag==false){
			cout<<-1<<endl;
		}
	}
    return 0;
}
