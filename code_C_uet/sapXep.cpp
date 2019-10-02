#include <iostream>
using namespace std;

int main(){ 
    char s[101];
    int numTest; cin>>numTest;
    for(int tCase =0; tCase<numTest;tCase++){
        int count[10]={0};
        cin>>s;
        int i=0;
        while(s[i] != '\0'){
            int x = s[i] -'0';
            count[x]++;
            i++;
        }
        
        for(int i=0; i<10;i++){
            for(int j=0;j<count[i]; j++){
                cout<<i;
            }
        }
        cout<<"\n";
    }
    return 0;
}
