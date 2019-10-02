#include <iostream>
using namespace std;

float tinhDiemTH(float arr[]){
    for(int i=0; i< 10; i++){
        for(int j =i + 1 ; j < 10 ; j++){
            if(arr[i]< arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    float res = 0;
    for (int i = 0 ;i<5;i++){
        res += arr[i];
    }
   
    return res / 5;
    
}

int main(){
    float cc, th, gk, ck, st;
    float arr[10];
    cin>>cc;
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
        if(arr[i] > 0) cc++;
    }
    th = tinhDiemTH(arr);
    
    float a, b; cin>>a>>b;
    gk = (a + b ) / 2;
    
    cin>>ck>>st;
    
    float res = 0;
    if(cc < 20){
        res = 0;
    } else{
        res = 0.2 * th + 0.2 * gk + 0.6 * ( ck + st );
        res = (res > 10)? 10: res;
    }
    printf("%.1f",res);
    
    return 0;
}
