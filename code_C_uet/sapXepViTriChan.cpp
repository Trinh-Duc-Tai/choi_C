#include<iostream>
using namespace std;
int a[100];
int b[100];
int c[100];
void bubbleSort(int arr[]);
int dem =0;
int main(){
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(i%2!=0){
    		b[i]=0;
		}else{
			b[i]=a[i];
			dem++;
		}	
	}
	int k = 0;
	for(int i=0;i<n;i++){
		if(b[i]!=0){
			c[k]=b[i];
			k++;
		}
	}
	
	bubbleSort(c);
	k = 0;
	for(int i=0;i<n;i++){
		if(b[i]==0){
			cout<<a[i]<<" ";
		}else{
			cout<<c[k]<<" ";
			k++;
		}
	}
    return 0;
}
void bubbleSort(int arr[]) {
    int n = dem;
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
