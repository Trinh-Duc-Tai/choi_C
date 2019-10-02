#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    float kq = x;
    for(int i=1;i<=n;i++){
        kq+=0.7*kq*i/100;
    }
    printf("%0.0f",kq);
    return 0;
}
