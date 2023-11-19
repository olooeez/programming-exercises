#include <iostream>
#include <cstdio>

using namespace std;

string getWordFromNumber(const int &);

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout << getWordFromNumber(i) << '\n';
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even\n";
            }
            else
            {
                cout << "odd\n";
            }
        }
    }

    return 0;
}

string getWordFromNumber(const int &num)
{
    switch (num)
    {
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    }

    return NULL;
}
