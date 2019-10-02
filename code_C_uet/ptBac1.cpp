#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==0){
        if(b==0){
            cout<<"phuong trinh co vo so nghiem";
        }else{
            cout<<"phuong trinh vo nghiem";
        }
    }else{
        if(b==0){
            cout<<"0";
        }else{
            float c=float(-b)/float(a);
            printf("%0.2f",c);
        }
    }
    return 0;
}
