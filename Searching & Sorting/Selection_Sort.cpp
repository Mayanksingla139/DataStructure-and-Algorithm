/*
selection sort: Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places 
that element at the beginning of the unsorted list.

20 12 10 15 2

min 20 
20 > 12  min -> 12
12 > 10  min -> 10
10 < 15  min -> 10
10 > 2   min -> 2
Now Swap 20 with 2
=> 2 12 10 15 20

2 12 10 15 20
min 12 
12 > 10 min -> 10
10 < 15 min -> 10
10 < 20 min -> 10
Now Swap 12 with 10
=> 2 10 12 15 20

2 10 12 15 20
min 12
12 < 15 min -> 12
12 < 20 min -> 12
Now, Swap 12 with 12
=> 2 10 12 15 20

2 10 12 15 20
min 15
15 < 20 min -> 15
Now, Swap 15 with 15
=> 2 10 12 15 20

2 10 12 15 20
min 20
Now, Swap 20 with 20
=> 2 10 12 15 20

*/

// T.C=> O(n^2)  S.C=> O(1)  Stability => No
// Number of comparisons: (n - 1) + (n - 2) + (n - 3) + ..... + 1 = n(n - 1) / 2 nearly equals to n^2.


#include<iostream>
#include<vector>
using namespace std;

vector<int> selection_sort(vector<int>& v, int n){
	int temp;
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(v[j] < v[min]){
				min = j;
			}
		}
		if(min!=i){
			temp=v[i];
			v[i]=v[min];
			v[min]=temp;
		}
	}
	return v;
}

int main(){
	vector<int> v;
	int n, num;
	cout<<"entre the size of array:";
	cin>>n;
	cout<<"enter the array:";
	for(int i=0; i<n; i++){
		cin>>num;
		v.push_back(num);
	}

	cout<<"array before sorting:";
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}

	selection_sort(v, n);

	cout<<"\narray after selection sort:";
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
