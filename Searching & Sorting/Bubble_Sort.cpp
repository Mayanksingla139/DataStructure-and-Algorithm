/*
Bubble sort: Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.

1. First Iteration (Compare and Swap)
a) Starting from the first index, compare the first and the second elements.
b) If the first element is greater than the second element, they are swapped.
c) Now, compare the second and the third elements. Swap them if they are not in order.
d) The above process goes on until the last element.

2. Remaining Iteration
The same process goes on for the remaining iterations.
After each iteration, the largest element among the unsorted elements is placed at the end.

-2 45 0 11 -9
-2 45 0 11 -9  compare -2 and 45 
-2 0 45 11 -9  compare 45 and 0
-2 0 11 45 -9  compare 45 and 11
-2 0 11 -9 45  compare 45 and -9

-2 0 11 -9 45
-2 0 11 -9 45  compare -2 and 0 
-2 0 11 -9 45  compare 0 and 11
-2 0 -9 11 45  compare 11 and -9

-2 0 -9 11 45
-2 0 -9 11 45  compare -2 with 0
-2 -9 0 11 45  compare 0 with -9

-2 -9 0 11 45
-9 -2 0 11 45  compare -9 with -2

*/

// T.C=> O(n^2)  S.C=>o(1)  Stability => yes

#include<iostream>
#include<vector>
using namespace std;

/*
vector<int> Bubble_sort(vector<int>& v, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    return v;
}
*/

/* Optimized Bubble Sort Algorithm
In the above algorithm, all the comparisons are made even if the array is already sorted.
This increases the execution time.
*/

vector<int> Bubble_sort(vector<int>& v, int n){
    for(int i=0; i<n-1; i++){
        int swap = 0;
        for(int j=0; j<n-i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
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

	Bubble_sort(v, n);

	cout<<"\narray after Bubble sort:";
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
