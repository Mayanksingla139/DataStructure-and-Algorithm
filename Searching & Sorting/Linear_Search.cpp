// Linear Search
//T.C => O(n)  S.C => O(1)

#include <iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& v, int n, int target){
    for(int i=0; i<n; i++){
        if(v[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> v;
    int n, target, num, ans;

    cout << "enter the size of array" <<endl;
    cin >>n;
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    cout<<"enter the number which you want to search:";
    cin>>target;

    ans = linearSearch(v, n, target);
    if(ans != -1){
        cout<<"Number found at index:"<<ans<<endl;
    }else{
        cout<<"Number not found"<<endl;
    }
}
