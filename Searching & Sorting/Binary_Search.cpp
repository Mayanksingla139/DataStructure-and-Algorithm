// Binary Search => Only applied on sorted array
// T.C => O(log n)  SC => O(1)


#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& v, int n, int target){
	int s = 0;
	int e = n-1;
	int mid;

	while(s<=e){
		mid = s + (e-s)/2;

		if(v[mid] == target){
			return mid;
		}
		else if(v[mid] < target){
			s = mid + 1;
		}else{
			e = mid - 1;
		}
	}
	return -1;
}

int main(){
	vector<int> v;
	int n, num, target, ans;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the number"<<endl;
	for(int i=0; i<n; i++){
		cin>>num;
		v.push_back(num);
	}
	cout<<"enter the number which you want to search:"<<endl;
	cin>>target;

	ans = BinarySearch(v, n, target);

	if(ans != -1){
		cout<<"number at index:"<<ans<<" position:"<<ans+1;
	}
	else{
		cout<<"number not found";
	}
	return 0;
}
