#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 29, 12, 92, 73, 4};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    // using find method to search the given array

    auto it = find(arr, arr + n, key);

    int index = it - arr;
    if (index == n)
    {
        cout << key << " not present" << endl;
    }
    else
    {
        cout << "key found at index " << index << endl;
    }

    return 0;
}