#include<iostream>
#include<math.h>
using namespace std;
int a[100];
int b[100];
int c[100];
int b1[100];
int c1[100];
int mangI1[100];
int mangI2[100];
void demAm(int arr[]);
void demDuong(int arr[]);
int n = 0;
int main(){
    cin>>n;
    int dAm = 0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]<0){
    		b[i]=a[i];
    		mangI1[i]=i;
    		mangI2[i]=-1;
			c[i]=0;
			dAm++;
		}else{
			b[i]=0;
			c[i]=a[i];
			mangI1[i]=-1;
			mangI2[i]=i;
		}	
	}
	//sapxep
	demAm(b);
	demDuong(c);
	//ky thuat
	int k =0;
	for(int i= 0;i<n;i++){
		if(b[i]!=0){
//			cout<<b[i]<<" ";
//			cout<<endl;
			b[k]=b[i]; //b[0]
			k++;
		}	
	}
//	cout<<endl;
	k =0;
	for(int i= 0;i<n;i++){
		if(c[i]!=0){
//			cout<<c[i]<<" ";
//			cout<<endl;
			c[k]=c[i];
			k++;
		}	
	}
//	for(int i=0;i<dAm;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<n-dAm;i++){
//		cout<<c[i]<<" ";
//	}
//	cout<<endl;
	k = 0;
	for(int i=0;i<n;i++){
		if(mangI1[i]!=-1){
			mangI1[k] = mangI1[i];
			k++;
		}
	}
	k = 0;
	for(int i=0;i<n;i++){
		if(mangI2[i]!=-1){
			mangI2[k] = mangI2[i];
			k++;
		}
	}
	//gan a am
	for(int i=0;i<dAm;i++){
		a[mangI1[i]]=b[i];
	}
	for(int i=0;i<n-dAm;i++){
		a[mangI2[i]]=c[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
    return 0;
}
void demDuong(int arr[]) {
//    int n = demSoLe;
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
void demAm(int arr[]) {
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
