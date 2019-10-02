#include<iostream>
#include<string>
using namespace std;

int main(){
    char a;
    cin>>a;
    int a1 = a-'\0';
    
    if(a1>96&&a1<123){
	    int x =a + ('A'-'a');
	    cout<<char(x);
    }else{
        cout<<a;
    }
//	cout<<x;
    
    return 0;
}
