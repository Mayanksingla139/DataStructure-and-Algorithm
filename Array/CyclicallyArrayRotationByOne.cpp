#include<iostream>
using namespace std;

/*void cyclicallyRotate(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n;i>1;i--){
        arr[i-1] = arr[i-2];
    }
    arr[0] = temp;
    cout<<"Now Array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";    
    }
}*/
void cyclicallyRotate(int a[], int n){
    int i=0, j=n-1;
    while(i!=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
    }
    cout<<"array is: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Size:";
    cin>>n;
    int a[n];
    cout<<"Enter the array:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cyclicallyRotate(a, n);
}