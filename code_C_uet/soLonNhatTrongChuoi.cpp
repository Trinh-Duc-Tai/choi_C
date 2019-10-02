#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;//473
    int max;
    max = s[0]-'\0';
    for(int i=0;i<s.length();i++){
//    	cout<<"chay lan "<<i<<endl;
//        cout<<"max = "<<max<<endl;
        int t = s[i]-'\0';
//        cout<<"t = "<<t<<endl;
        if(max<t) max = t;
//        cout<<"max = "<<max<<endl;
    }
//    cout<<"----------------"<<endl<<max<<endl;
    cout<<char(max);
    
    return 0;
}
