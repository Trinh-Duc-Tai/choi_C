#include<iostream>
#include<math.h>
using namespace std;
int a[100];
int b[100];
int c[100];
void demChan(int arr[]);
void demLe(int arr[]);
int demSoChan = 0;
int demSoLe = 0;
int n = 0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]%2==0){
    		b[i]=a[i];
			demSoChan++;
			c[i]=-1;
		}else{
			b[i]=-1;
			c[i]=a[i];
			demSoLe++;
		}	
	}
	
	demChan(b);
	demLe(c);
	for(int i=0;i<n;i++){
		if(b[i]!=-1){
			cout<<b[i]<<" ";
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]!=-1){
			cout<<c[i]<<" ";
		}
	}
	
    return 0;
}
void demChan(int arr[]) {
//    int so = n;
    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
    }
}
void demLe(int arr[]) {
//    int n = demSoLe;
    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
    }
}
