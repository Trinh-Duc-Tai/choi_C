#include<iostream>
using namespace std;
int main(){
    int gbd,gkt,soMay;
    cin>>gbd>>gkt>>soMay;
    int kq = 0;
    if(gbd>=17){
    	kq = (gkt-gbd)*3000*soMay;
	}else{
		if(gkt<17){
			kq = (gkt-gbd)*2500*soMay;
		}else{
			kq = ((17-gbd)*2500+(gkt-17)*3000)*soMay;
		}
	}
	cout<<kq;
    return 0;
}
