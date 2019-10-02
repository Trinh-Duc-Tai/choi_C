#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sSP[n];
    for(int i = 0;i<n;i++){
        cin>>sSP[i];
    }
    if (n==1){
        cout<<sSP[0];
    }else{
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=sSP[i];
        }
        int tb = sum/n;
        for(int i=0;i<n;i++){
            if(sSP[i]>tb){
                cout<<sSP[i]<<" ";
            }
        }
    }
    
    
    return 0;
}
