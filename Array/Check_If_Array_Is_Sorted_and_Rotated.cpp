/*
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array. You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.

Input: nums = [1,1,1]
Output: true
Explanation: [1,1,1] is the original sorted array.
You can rotate any number of positions to make nums.
*/
#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> &a){
    int n = a.size();
    int count = 0;
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    }

    return count<=1;
}
int main(){
    int n, value;
    vector<int> arr;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the values:";
    for(int i=0; i<n; i++){
        cin>>value;
        arr.push_back(value);
    }
    if(check(arr)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}