#include <iostream>
#include <algorithm>
using namespace std;
template<typename T>
T KthLargestElement(T arr[], int size, int k){
    sort(arr, arr + size);
    return arr[size-k];
}

int main(){
    int n, k;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "enter the array:";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "enter the value of K:";
    cin >> k;
    cout <<k<<"thLargestElement in the array is:"<<KthLargestElement<int>(arr, n, k)<<endl;
    return 0;
}