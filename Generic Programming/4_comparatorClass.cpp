// Templates provide you freedom from the underlying data type
// Iterators Provide you freedom from the containers
// Comparators provide you freedom from the set of operations

#include <iostream>
#include <list>
#include <vector>
#include <cstring>
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
template <class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{
    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }

        start++;
    }

    return end;
}
class Book
{
public:
    string name;
    int price;
    Book()
    {
        this->name = "x";
        this->price = 50;
    }
    Book(string n, int p)
    {
        this->name = n;
        this->price = p;
    }
};
class Compare
{
public:
    bool operator()(Book b1, Book b2)
    {
        if (b1.name == b2.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

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

    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(12);
    // l.push_back(21);
    // l.push_back(9);

    // auto it = search(l.begin(), l.end(), 21);
    // if (it == l.end())
    // {
    //     cout << "element not present" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    Book b1("c++", 100);

    Book b2("Python", 200);

    Book b3("Java", 132);

    // list<Book> l;

    // l.push_back(b1);
    // l.push_back(b2);
    // l.push_back(b3);

    // Works on vectors as well
    vector<Book> l;

    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("c++", 110);

    Compare cmp;

    auto it = search(l.begin(), l.end(), booktofind, cmp);

    if (it != l.end())
    {
        cout << "Book found" << endl;
    }
    else
    {

        cout << "Book cannot be found" << endl;
    }

    return 0;
}