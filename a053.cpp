#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n <= 10)
        {
            n *= 6;
            cout << n << endl;
        }
        else if (n <= 20 && n > 10)
        {
            n = 2 * n + 40;
            cout << n << endl;
        }
        else if (n <= 40 && n > 20)
        {
            n += 60;
            cout << n << endl;
        }
        else
        {
            n = 100;
            cout << n << endl;
        }
    }

    return 0;
}
