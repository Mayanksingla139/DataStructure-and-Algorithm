/*

Insertion sort: Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration. Insertion sort works similarly as we sort cards in our hand in a card game. We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

*/

// T.C -> O(n^2)  S.C -> O(1)  Stability -> Yes

#include<iostream>
#include<vector>
using namespace std;

/* vector<int> Insertion_Sort(vector<int>& v, int n){
	for(int i=1; i<n; i++){
		int temp = v[i];
		int j = i-1;
		for(; j>=0; j--){
			if(v[j] > temp)
				v[j+1] = v[j];
			else
				break;
		}
		v[j+1] = temp;
	}
	return v;
}*/

vector<int> Insertion_Sort(vector<int>& v, int n){
	int temp, j;
	for(int i=1; i<n; i++){
		temp = v[i];
		j = i-1;
		while(j >= 0 && v[j] > temp){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}
	return v;
}

int main(){
	vector<int> v;
	int n, num;
	cout<<"enter the size of array:";
	cin>>n;
	cout<<"enter the numbers:";
	for(int i=0; i<n; i++){
		cin>>num;
		v.push_back(num);
	}

	cout<<"array before sorting:";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}

	Insertion_Sort(v, n);

	cout<<"\narray after sorting:";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	} 
}
