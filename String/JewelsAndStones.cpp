/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Input: jewels = "z", stones = "ZZ"
Output: 0
*/

#include <iostream>
using namespace std;

int countJewels(string jewels, string stones)
{
    int count = 0;
    for (int i = 0; i < stones.length(); i++)
    {
        for (int j = 0; j < jewels.length(); j++)
        {
            if (stones[i] == jewels[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string jewels, stones;
    cout << "Enter the jewels:";
    cin >> jewels;
    cout << "Enter the stones:";
    cin >> stones;

    cout << "output:" << countJewels(jewels, stones);
}