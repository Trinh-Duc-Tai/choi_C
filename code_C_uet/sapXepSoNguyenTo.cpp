#include<iostream>
#include<math.h>
using namespace std;
int a[100];
int b[100];
int c[100];
void bubbleSort(int arr[]);
int dem =0;
bool soNguyenTo(int soA)
{
    if (soA < 2)    
        return false;

    for (int i = 2; i <= sqrt((double)soA); i ++)
    {
        if (soA%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(soNguyenTo(a[i])==true){
    		b[i]=a[i];
			dem++;
		}else{
			b[i]=0;
		}	
	}
	int k = 0;
	for(int i=0;i<n;i++){
		if(b[i]!=0){
			c[k]=b[i];
			k++;
		}
	}
//	for(int i=0;i<dem;i++){
//		cout<<c[i]<<" ";
//	}
	
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
