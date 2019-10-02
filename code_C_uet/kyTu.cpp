#include<iostream>
using namespace std;
int main(){
    char s;
    cin>>s;
    int x = s-'\0';
    int lech = 'a'-'A';
    if(x>64&&x<91){
        x = x+lech;
        cout<<"The lower case character corresponding to "<<s<<" is "<<char(x);
    }else if(x>96 && x<123){
        x = x - lech;
        cout<<"The upper case character corresponding to "<<s<<" is "<<char(x);
    }else{
        cout<<s<<" is not a letter";
    }
    return 0;
}
