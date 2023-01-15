#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
string input = "";

int random(int l, int u)
{
    srand(time(0));
    if (l > 0 && u > l)
        return (rand() % ((u - 1) + l - 1)) + l;
    else
    {
        cout << "-> Error: Unknown Range.";
        return 0;
    }
}

void enter()
{
    cout << "\n-> ";
    getline(cin, input);
}

void other(string input)
{
    if (input != "")
        cout << "-> Unknown Input.";
}

int main()
{
    int a, b, c = 0;
    cout << "-> **** Randomizer. v1.0 By: Munish ****";
    while (1)
    {
        enter();
        if (input == "exit" || input == "-x")
        {
            cout << "-> Randomizer closed..";
            break;
        }
        else if (input == "go")
        {
            cout << "-> Enter Lower, Upper: ";
            cin >> a >> b;
            c = random(a, b);
            cout << endl
                 << c;
        }
        else
            other(input);
    }
}