#include <iostream>
#include <string>
using namespace std;

int main()
{

    // string init
    string s0;
    string s1("hello");

    string s2 = "Hello worlds";
    string s3(s2);

    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (!s1.empty())
    {
        cout << "String is not empty\n";
    }

    // Append
    s0.append("I Love C++");
    cout << s0 << endl;
    s0 += " and Python";
    cout << s0 << endl;

    // Remove and Clear
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    // Compare two Strings
    s0 = "Apple";
    s1 = "Mango";
    cout << s0.compare(s1) << endl;

    // Overloaded Operator
    cout << (s1 > s0) << endl;
    if (s1 > s0)
    {
        cout << "Mango is greater than apple " << endl;
    }

    cout << s1[0] << endl;

    // Find Substrings
    string s = "i want to drink apple juice";
    int ind = s.find("apple");
    cout << ind << endl;

    //  Remove Words from a String
    string word = "apple";
    int length = word.length();
    s.erase(ind, length + 1);
    cout << s << endl;

    // Iterate over all the characters in the string
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }

    // Using Iterators
    /*string::iterator it*/
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << ",";
    }

    // Iterate using forEach loop over all the characters in the string
    /*char c*/
    for (auto c : s1)
    {
        cout << c << "<";
    }

    return 0;
}