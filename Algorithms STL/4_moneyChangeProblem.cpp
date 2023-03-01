// Given Problem :
// Find the minimum no. of coins required to sum up the given amount of money

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

bool compare(int a, int b)
{
    return a <= b;
}

int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(int);
    list<int> coinsRequired[100];
    int count = 0;
    int money = 99;
    while (money != 0)
    {
        auto it = lower_bound(coins, coins + n, money, compare) - 1;

        coinsRequired->push_back(*it);
        money -= *it;
        count++;
    }
    cout << "The number of coins required are " << count << endl;
    auto ptr = coinsRequired->begin();
    for (int i = 0; i < count; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    // alternative :
    // while (money > 0)
    // {
    //     int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;
    //     int m = coins[lb];
    //     cout << m << ", ";
    //     money -= m;
    // }

    return 0;
}