#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int a = 10, b = 20;
    cout << "a and b before swap are : " << a << " " << b << endl;

    swap(a, b);
    cout << "a and b after swap are : " << a << " " << b << endl;

    // max function:
    cout << max(a, b) << endl;

    // min function:
    cout << min(a, b) << endl;

    // reverse function
    int arr[] = {1, 2, 34, 56, 65, 99};
    int n = sizeof(arr) / sizeof(int);
    cout << "\nArray before reversal is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // Note reverse method reverses array from start to the location you specify
    // In this case we take end point as last element of array
    reverse(arr, arr + n);

    cout << "\nArray after reversal is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // In this case we take end point as 3rd element of array
    reverse(arr, arr + 3);
    cout << "\nArray reversal till 3rd element is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}