#include<iostream>
#include<math.h>
using namespace std;
int main(){
//	ax4+bx2+c=0 
	int a,b,c;
	cin>>a>>b>>c;
	if((a==1&&b==0&&c==0)||(a==0&&b==1&&c==0)||(a==1&&b==1&&c==0)){
		cout<<"phuong trinh co 1 nghiem"<<endl;
		printf("%0.5f",c);
	}else{
		if(a==0){
		if(b==0){
			if(c==0){
				cout<<"phuong trinh co vo so nghiem";
			}else{
				cout<<"phuong trinh vo nghiem";
			}
		}else{
			float x = -float(c)/float(b);
			if(x<0){
				cout<<"phuong trinh vo nghiem";
			}else{
				cout<<"phuong trinh co 2 nghiem"<<endl;
				printf("%0.5f %0.5f",-sqrt(x),sqrt(x));
			}
			
		}
	}else{
		if(c==0){
			float x1 = 0;
			float x2 = -sqrt(-b/a);
			float x3 = sqrt(-b/a);
			cout<<"phuong trinh co 3 nghiem"<<endl;
			printf("%0.5f %0.5f %0.5f",x2,x1,x3);
		}else{
			float delta = b*b-4*a*c;
		if(delta<0){
			cout<<"phuong trinh vo nghiem";
		}else if(delta == 0){
			float x = -float(b)/(2*float(a));
			if(x<0){
				cout<<"phuong trinh vo nghiem";
			}else{
				cout<<"phuong trinh co 2 nghiem"<<endl;
				float x1 = -sqrt(x);
				float x2 = sqrt(x);
				printf("%0.5f %0.5f",x1,x2);
			}
		}else{
			float x1 = (-float(b)-sqrt(delta))/(2*a);
			float x2 = (-float(b)+sqrt(delta))/(2*a);
			if(x1<0&&x2<0){
				cout<<"phuong trinh vo nghiem";
			}
			if(x1<0&&x2>0){
				float x3 = -sqrt(x2);
				float x4 = sqrt(x2);
				cout<<"phuong trinh co 2 nghiem"<<endl;
				printf("%0.5f %0.5f",x3,x4);
			}
			if(x1>0&&x2<0){
				float x3 = -sqrt(x1);
				float x4 = sqrt(x1);
				cout<<"phuong trinh co 2 nghiem"<<endl;
				printf("%0.5f %0.5f",x3,x4);
			}
			if(x1>0&&x2>0){
				float x3 = -sqrt(x1);
				float x4 = sqrt(x1);
				float x5 = -sqrt(x2);
				float x6 = sqrt(x2);
				cout<<"phuong trinh co 4 nghiem"<<endl;
				printf("%0.5f %0.5f %0.5f %0.5f",x5,x3,x4,x6);
			}
		}
		}
		
	}
	}
	
	return 0;	
}
