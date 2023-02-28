// Iterators : Used to access data within a container with certain restrictions

// 1) Input Iterators :an entity which helps to read data and move ahead

// 2) Output Iterators :an entity which helps to write data and move ahead

// 3) Forward Iterators : an entity which helps in both read and write operation and move ahead in single direction

// 4) Bidirectional Iterators : an Forward Iterator which can move in both the direction

// 5) Random Access Iterators : Iterator which can read write in both the directions and jump

// Iterators Example :

#include <iostream>
#include <list>
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
// Start and end Forward Iterator are required [start, end)
template <class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }

        start++;
    }

    return end;
}

int main()
{
    // int a[] = {1, 2, 3, 5, 6, 43, 12, 10};
    // int n = sizeof(a) / sizeof(int);
    // int k = 12;

    // cout << search(a, n, k);

    // float b[] = {1.2, 2.4, 3.75, 5.23, 6.93, 43.23, 12.64, 10.5};
    // int nf = sizeof(a) / sizeof(int);
    // float kf = 43.23;

    // cout << search(b, nf, kf);

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(12);
    l.push_back(21);
    l.push_back(9);

    auto it = search(l.begin(), l.end(), 21);
    if (it == l.end())
    {
        cout << "element not present" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}