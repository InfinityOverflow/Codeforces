#include <iostream>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    char a[3][3], ch;
    int x = 0, o = 0, blank = 0, win = 0;
    rep(i, 0, 3) //input and checking the numbers of x and o
    {
        rep(j, 0, 3)
        {
            //char ch;
            cin >> ch;
            switch (ch)
            {
            case 'X':
                x++;
                break;
            case 'O':
                o++;
                break;
            default:
                blank++;
                break;
            }
            a[i][j] = ch;
        }
    }
    if (o > x)
    {
        cout << 3 << endl;
    }
    else
    {
        rep(j, 0, 3)
        {
            int sameChar = 0;
            ch = a[j][0];
            rep(i, 1, 3)
            {
                if (a[j][i] == ch and ch != '_')
                    sameChar++;
            }
            if (sameChar == 2)
            {
                win++;
                if (ch == 'X' and x == o)
                {
                    cout << 3;
                    return 0;
                }
                else if (ch == 'O' and o < x)
                {
                    cout << 3;
                    return 0;
                }
            }
        }

        rep(i, 0, 3)
        {
            char ch = a[0][i];
            int sameChar = 0;
            rep(j, 1, 3)
            {
                if (a[j][i] == ch and ch != '_')
                    sameChar++;
            }
            if (sameChar == 2)
            {
                win++;

                if (ch == 'X' and x == o)
                {
                    cout << 3;
                    return 0;
                }
                else if (ch == 'O' and o < x)
                {
                    cout << 3;
                    return 0;
                }
            }
        }

        char ch = a[0][0], z = a[0][2 - 0];
        int sameChar1 = 0, sameChar2 = 0;
        rep(i, 1, 3)
        {
            if (a[i][i] == ch and ch != '_')
                sameChar1++;
            if (a[i][2 - i] == z and z != '_')
                sameChar2++;
        }
        if (sameChar1 == 2)
        {
            win++;

            if (ch == 'X' and x == o)
            {
                cout << 3;
                return 0;
            }
            else if (ch == 'O' and o < x)
            {
                cout << 3;
                return 0;
            }

            if (sameChar2 == 2)
            {
                win++;
                if (ch == 'X' and x == o)
                {
                    cout << 3;
                    return 0;
                }
                else if (ch == 'O' and o < x)
                {
                    cout << 3;
                    return 0;
                }

                if (win > 1)
                {
                    cout << 3;
                }
                else if (win == 1)
                    cout << 1;
                else if (blank == 0)
                    cout << 1;
                else if (blank > 0)
                    cout << 2;
                else
                    cout << 3;
            }
        }
    }
}