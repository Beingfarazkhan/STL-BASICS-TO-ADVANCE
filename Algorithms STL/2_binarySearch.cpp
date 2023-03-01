#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 25, 37, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    // using Binary Search method to search the given array

    // Note : Binary Search returns a boolean value

    bool present = binary_search(arr, arr + n, key);

    if (present)
    {
        cout << "Element is Present" << endl;
    }
    else
    {

        cout << "Element is not Present" << endl;
    }

    // Suppose you want to find the index of the element
    // lower_bound(s, e, key) and upper_bound(s, e, key)

    // Lower bound gives the first occurence of the element in the array that is element>=key
    auto lb = lower_bound(arr, arr + n, key);
    cout << "Lower Bound of " << key << " Index : " << (lb - arr) << endl;

    // Upper Bound gives the first occurence of the element strictly greater than key i.e element>key
    auto ub = upper_bound(arr, arr + n, key);
    cout << "Upper Bound of " << key << " Index : " << (ub - arr) << endl;

    cout << "Occurence of the " << key << "  is : " << (ub - lb) << endl;
    return 0;
}