#include<iostream>
#include<string>
using namespace std;
bool checkNamNhuan(int nam);
int main(){
    string s;
    cin>>s;
    int d1 = s[0]-'0';
    int d2 = s[1]-'0';
    int ngay = d1*10+d2;
    int m1 = s[3]-'0';
    int m2 = s[4]-'0';
    int thang = m1*10+m2;
    int y1 = s[6]-'0';
    int y2 = s[7]-'0';
    int y3 = s[8]-'0';
    int y4 = s[9]-'0';
    int nam = y1*1000+y2*100+y3*10+y4;
    bool flag = true;
    if(thang<1||thang>12){
    	flag = false;
	}else{
		switch(thang){
    		case 1:
    		case 3:
    		case 5:
    		case 7:
    		case 8:
    		case 10:
    		case 12:
    			if(ngay<0||ngay>31){
    				flag=false;
				}
    			break;
    		case 4:
    		case 6:
    		case 9:
    		case 11:
    			if(ngay<0||ngay>30){
    				flag=false;
				}
    			break;
    		case 2:
    			if(ngay<0){
    				flag=false;
				}else{
					if(checkNamNhuan(nam)==true){
						if(ngay>29){
							flag=false;
						}
					}else{
						if(ngay>28){
							flag=false;
						}
					}
				}
    			break;
		}
	}
    
    if(flag==false){
    	cout<<"no";
	}else{
		cout<<"yes";
	}
    
    return 0;
}
bool checkNamNhuan(int nam){
	if(nam%100==0){
		if(nam%400==0){
			return true;
		}else{
			return false;
		}
	}else if(nam%4==0){
		return true;
	}else{
		return false;
	}
}
