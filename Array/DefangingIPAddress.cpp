/*
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/

#include <iostream>
using namespace std;

string DefangIp(string s)
{
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            str = str + "[.]";
        }
        else
        {
            str = str + s[i];
        }
    }
    return str;
}

int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    cout << DefangIp(s);
}