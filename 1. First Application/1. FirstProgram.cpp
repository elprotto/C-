/*
 * Displays the message "First application using c++"
 * by @elprotto.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> message{"First", "application", "using", "c++"};

    for (const string &word : message)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}