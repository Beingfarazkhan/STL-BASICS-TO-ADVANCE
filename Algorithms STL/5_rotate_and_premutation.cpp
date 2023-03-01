#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> v{1, 2, 3};
    vector<int> v1{10, 20, 30, 40, 50};

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    // Rotates the array from the given pivot element
    // example : if pivot is 30 then rotated array :
    // 30 40 50 10 20
    cout << "Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nRotated array is : " << endl;
    rotate(arr, arr + 2, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    // These methods also work on lists and vectors
    cout << "\nVector is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\nRotated Vector is : " << endl;
    rotate(v1.begin(), v1.begin() + 2, v1.end());

    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << ", ";
    }

    // next permutation method
    // it generates the next lexicological number
    // example : 1 2 3 will generate 1 3 2
    cout << "\nVector is : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nNext lexicological permutation is : " << endl;
    next_permutation(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}