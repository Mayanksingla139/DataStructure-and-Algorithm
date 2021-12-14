/*
An array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Declare a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.
The sum of the empty subsegment is 0.

Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
Output: 5
Explanation: We will split the array as [5], [2, 4] and [1, 4]. Thus, the maximum sum of the first part will be 5 and equal to the third part.

Input: 'N' = 2, ‘ARR’ = [3,3].
Output: 3
Explanation: we will split the array as [3], [] and [3]. Thus, the maximum sum of the first part will be 3 and equal to the third part. Hence, the output is 3.

Input: 'N' = 7, ‘ARR’ = [10, 34, 12, 14, 54, 41, 15].
Output: 56
Explanation: we will split the array like [10, 34, 12], [14,54] and [41, 15]. Thus, the maximum sum of the first part will be 56 and equal to the third part. Hence, the output is 56.
*/

#include <iostream>
#include <vector>
using namespace std;

//  Brute force method    time complexity: O(n^2)  space complexity: O(1)

/*int threeWaySplit(int n, vector<int> a)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum = a[i];
        int lastSum = 0;
        for (int j = n - 1; j > i; j--)
        {
            lastSum += a[j];
            if (lastSum >= sum)
            {
                break;
            }
        }
        if (lastSum == sum)
        {
            ans = sum;
        }
    }
    return ans;
}*/

// Two Pointer approach   time complexity: O(n)  space complexity: O(1)

int threewaySplit(int n, vector<int> a)
{
    int i = 0, j = n - 1;
    int ans = 0;
    int front_Sum = a[i];
    i++;
    int back_Sum = a[j];
    j--;
    if (front_Sum == back_Sum)
    {
        ans = front_Sum;
    }
    while (i <= j)
    {
        if (front_Sum < back_Sum)
        {
            front_Sum += a[i];
            i++;
        }
        else
        {
            back_Sum += a[j];
            j--;
        }
        if (front_Sum == back_Sum)
        {
            ans = front_Sum;
        }
    }
    return ans;
}

int main()
{
    int n, value;
    vector<int> arr;
    cout << "Enter the size of array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    cout << "Output is:" << threewaySplit(n, arr);
}