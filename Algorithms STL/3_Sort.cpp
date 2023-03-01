#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    cout << "Comparing " << a << " and " << b << endl;
    return a > b; // Array in decreasing order
    // return a < b; //Array in increasing order
}

int main()
{

    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Normal Sort  function
    // sort(arr, arr + n);

    // Sort function with comparator
    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}