#include<iostream>
#include<string>
using namespace std;

int main(){
	int ngay, thang;
	cin>>ngay;
	cin>>thang;
	switch(thang){
		case 1:
			if(ngay<20){
				cout<<"Ma Ket";
			}else{
				cout<<"Bao Binh";
			}
			break;
		case 2:
			if(ngay<19){
				cout<<"Bao Binh";
			}else{
				cout<<"Song Ngu";
			}
			break;
		case 3:
			if(ngay<21){
				cout<<"Song Ngu";
			}else{
				cout<<"Bach Duong";
			}
			break;
		case 4:
			if(ngay<20){
				cout<<"Bach Duong";
			}else{
				cout<<"Kim Nguu";
			}
			break;
		case 5:
			if(ngay<21){
				cout<<"Kim Nguu";
			}else{
				cout<<"Song Tu";
			}
			break;
		case 6:
			if(ngay<22){
				cout<<"Song Tu";
			}else{
				cout<<"Cu Giai";
			}
			break;
		case 7:
			if(ngay<23){
				cout<<"Cu Giai";
			}else{
				cout<<"Su Tu";
			}
			break;
		case 8:
			if(ngay<23){
				cout<<"Su Tu";
			}else{
				cout<<"Xu Nu";
			}
			break;
		case 9:
			if(ngay<23){
				cout<<"Xu Nu";
			}else{
				cout<<"Thien Binh";
			}
			break;
		case 10:
			if(ngay<24){
				cout<<"Thien Binh";
			}else{
				cout<<"Thien Yet";
			}
			break;
		case 11:
			if(ngay<23){
				cout<<"Thien Yet";
			}else{
				cout<<"Nhan Ma";
			}
			break;
		case 12:
			if(ngay<22){
				cout<<"Nhan Ma";
			}else{
				cout<<"Ma Ket";
			}
			break;

}
	return 0;	
}
