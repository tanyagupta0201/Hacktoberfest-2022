#include <iostream>
using namespace std;
int main()
{
    int h;
    cout << "Enter the height " << endl;
    cin >> h;

    for (int i = 1; i <= h; i++)
    {
        int space = 2 * h - 2 * i;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = h; i >= 1; i--)
    {
        int space = 2 * h - 2 * i;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}