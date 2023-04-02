#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

// Sting tokenizer

// char * ptr = strtok(char *s, char * delimeters)
// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's
// on subsequent calls we should pass the string argument as null

char *mystrtok(char *s, char delimeter)
{
    // String and a single char which acts as a delimeter
    static char *input = NULL;

    if (s != NULL)
    {
        input = s;
    }

    // Base Case after the last token has been returned
    if (input == NULL)
    {
        return NULL;
    }

    // Start Extracting tokens
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delimeter)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    // Corner Case
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "Today is a rainy day";

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;

    while (ptr != NULL)
    {

        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}