#include<iostream>
using namespace std;
int main(){
    int gbd,gkt;
    cin>>gbd>>gkt;
    int luong = 0;
    if(gbd>=12){
    	luong = (gkt-gbd)*7500;
	}else{
		if(gkt<12){
			luong = (gkt-gbd)*6000;
		}else{
			luong = (12-gbd)*6000 +(gkt-12)*7500;
		}
	}
	cout<<luong;
    return 0;
}
