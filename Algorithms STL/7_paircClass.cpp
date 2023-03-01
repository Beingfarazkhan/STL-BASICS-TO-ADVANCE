#include <iostream>

using namespace std;

int main()
{

    // Pair help to bind to values together, the first value is accessed with p.first and
    // second value is accessed with p.second
    // pair => example 10, 'B'
    pair<int, char> p;
    p.first = 10;
    p.second = 'B';

    // initialize pair with the values of another pair
    pair<int, char> p2(p);
    cout << p2.first << endl;
    cout << p2.second << endl;

    // array of pairs :
    pair<int, char> parr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the pair " << i + 1 << endl;
        cin >> parr[i].first;
        cin >> parr[i].second;
    }

    cout << "the pairs are : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "(" << parr[i].first << ", " << parr[i].second << ")";
        cout << endl;
    }

    // make pair using the make_pair() function
    pair<int, int> p3 = make_pair(12, 20);
    cout << p3.first << endl;
    cout << p3.second << endl;

    // nested pairs
    pair<pair<int, int>, string> p4;
    p4.first.first = 100;
    p4.first.second = 25;
    p4.second = "Audi";
    cout << "(" << p4.first.first << ", " << p4.first.second << ") : " << p4.second << endl;

    return 0;
}