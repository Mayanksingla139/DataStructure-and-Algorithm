#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &a, int d){
    if (d == 0)
        return;
    for (int i = 0; i < d; i++){
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
}
int main(){
    vector<int> a;
    int n, d;
    cin >> n >> d;
    int num;
    for (int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    rotate(a, d % n);
    return 0;
}