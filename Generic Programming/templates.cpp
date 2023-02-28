// Standard Search Using specific data types
// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 5, 6, 43, 12, 10};
//     int n = sizeof(a) / sizeof(int);
//     int k = 12;

//     cout << search(a, n, k);
//     return 0;
// }

// Using Class Templates

#include <iostream>
using namespace std;

// template <class T>

template <typename T>
int search(T arr[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 5, 6, 43, 12, 10};
    int n = sizeof(a) / sizeof(int);
    int k = 12;

    cout << search(a, n, k);

    float b[] = {1.2, 2.4, 3.75, 5.23, 6.93, 43.23, 12.64, 10.5};
    int nf = sizeof(a) / sizeof(int);
    float kf = 43.23;

    cout << search(b, nf, kf);
    return 0;
}