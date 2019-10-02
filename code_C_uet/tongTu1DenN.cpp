#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0;i<=n;i++){
    	cout<<"Lan chay thu "<<i<<endl;
        sum=sum+i;
        cout<<"Lan chay thu"<<i<<"co tong sum = "<<sum<<endl;
    }
    cout<<endl;
    cout<<sum;
    return 0;
}
