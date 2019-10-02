#include<iostream>
using namespace std;
int daoNguocSo(int n);
int main(){
	int n;
	cin>>n;
	int a = n/100;
	int c = n%10;
	if(a>c){
		int soB = n- daoNguocSo(n);
		int bNguoc = daoNguocSo(soB);
		int kq = bNguoc + soB;
		cout<<kq;
	}else{
		cout<<"invalid";
	}
	
	
	return 0;
}
int daoNguocSo(int n){
	int a = n/100;
	int c = n%10;
	int b = (n-a*100-c)/10;
	int daoNguocA = c*100+b*10+a;
	return daoNguocA;
}
