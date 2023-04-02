// Problem Statement

// Given a list of ‘n’ strings S0,S1,S2.......Sn-1, each consisting of digits and spaces, the number of spaces is the same
// for each entry, the goal is to implement a variation of a sort command. None of the strings contains consecutive
// spaces. Also, no string starts with a space nor ends with it. Spaces are used to divide string into columns, which
// can be used as keys in comparisons.

// The program has to support the required parameters:

// key: integer denoting the column used as a key in comparisons. The left-most column is denoted by 1.

// reversed: boolean variable indicating whether to reverse the result of comparisons.

// comparison-type: either lexicographic or numeric. Lexicographic means that we use Lexicographical order where
// for example (122 < 13} . Numeric means that we compare the strings by their numerical values, so (13 < 122) . If
// the comparison type is ‘numeric’ and numeric values of keys of Si and Sj are equal for i<j. then Siis considered
// strictly smaller than Sj because it comes first.

// Sample Input :
// 3
// 92 022
// 82 12
// 77 13
// 2 false numeric

// Sample Output :
// 82 12
// 77 13
// 92 022

// Solution :

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string extractStringAtKey(string str, int key)
{
    char *c = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        c = strtok(NULL, " ");
        key--;
    }
    return (string)c;
}
int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * p);
        p *= 10;
    }
    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

int main()
{
    //  Test Case :
    // string s("10 20 30 40");
    // int key;
    // cin>>key;
    // cout<<extractStringAtKey(s, key);

    int n;
    cin >> n;
    cin.get();

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    int key;
    string reversal, ordering;

    cin >> key >> reversal >> ordering;

    pair<string, string> strPair[100];
    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey(a[i], key);
    }

    // Next Sorting
    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
    else
    {
        sort(strPair, strPair + n, lexicoCompare);
    }

    // Reversal

    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    // Print The Result
    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << endl;
    }

    return 0;
}