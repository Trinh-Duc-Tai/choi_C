#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float a[n];
    float b[n];
    float kq = 0;
    float thuong = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
        kq+= a[i]*b[i];
        thuong += b[i];
    }
//    cout<<kq;
    printf("%0.2f",kq/thuong);
    return 0;
}
