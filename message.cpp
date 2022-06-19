#include <iostream>
#include <vector>
#include <string>
#define ll long long
#define over "\n"

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        char a;
        char table[3][3];
        ll x = 0;
        ll o = 0;
        ll under = 0;
        ll wins = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a;
                if (a == 'X')
                {
                    x++;
                }
                else if (a == 'O')
                {
                    o++;
                }
                else
                {
                    under++;
                }
                table[i][j] = a;
            }
        }
        //cout << x << " " << o << " " << under << over; //debug
        if (x == o || x == o + 1)
        {
            if (table[0][0] == table[0][1] and table[0][1] == table[0][2] and table[0][0] != '_')                //row check 1
            {
                wins++;
            }
            if (table[1][0] == table[1][1] and table[1][1] == table[1][2] and table[1][0] != '_')                 //row check 2
            {
                wins++;
            }
            if (table[2][0] == table[2][1] and table[2][1] == table[2][3] and table[2][0] != '_')                 //row check 3
            {
                wins++;
            }
            if (wins > 1)
            {
                cout << 3 << over;
                continue;
            }
            else
            {
                if (table[0][0] == table[1][0] and table[1][0] == table[2][0] and table[0][0] != '_')          //column check 1
                {
                    wins++;
                }
                if (table[0][1] == table[1][1] and table[1][1] == table[2][1] and table[0][1] != '_')        //column check 2
                {
                    wins++;
                }
                if (table[0][2] == table[1][2] and table[1][2] == table[2][2] and table[0][2] != '_')        //column check 3
                {
                    wins++;
                }
                if (table[0][0] == table[1][1] and table[1][1] == table[2][2] and table[0][0] != '_')         // diagonal check 1
                {
                    wins++;
                }
                if (table[2][0] == table[1][1] and table[1][1] == table[0][2] and table[2][0] != '_')          //diagonal check 2
                {
                    wins++;
                }
                if (wins > 1)
                {
                    cout << 3 << over;
                    continue;
                }
                else if (wins == 1)
                {
                    cout << 1 << over;
                    continue;
                }
                else if (under == 0 and wins == 0)
                {
                    cout << 1 << over;           //draw if no blank spaces
                    continue;
                }
                else 
                {
                    cout << 2 << over;           //game can go on
                    continue;
                }
            }
        }
        else
        {
            cout << 3 << over;
            continue;
        }
    }
}