#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float x = (float(a)+float(b)+float(c))/3;
    cout<<a+b+c<<endl;
    printf("%0.2f",x);
    cout<<endl<<a*b*c;
    return 0;
}
