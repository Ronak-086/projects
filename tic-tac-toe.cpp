#include <iostream>
using namespace std;
int print(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool tie(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == -1)
            {
                return false;
            }
        }
    }
    cout << "...match tied..." << endl;
    return true;
}
bool checking(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {

        if ((arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0) || (arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1))
        {
            cout << "***CONGRATS TO " << arr[i][0] << " TEAM YOU HAVE WON THE GAME***" << endl;
            return true;
        }
        if ((arr[0][i] == 0 && arr[1][i] == 0 && arr[2][i] == 0) || (arr[0][i] == 1 && arr[1][i] == 1 && arr[2][i] == 1))
        {
            cout << "***CONGRATS TO " << arr[0][i] << " TEAM YOU HAVE WON THE GAME***" << endl;
            return true;
        }
    }
    return false;
}
int main()
{
    cout << "***** WELCOME TO THE GAME *****" << endl;
    int arr[3][3] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    print(arr);

    int check = 1;
    int r;
    int c;

    do
    {
        if (check % 2 == 1)
        {
            cout << "enter the coordinate where you wants to place 1" << endl;
            cin >> r >> c;
            arr[r - 1][c - 1] = 1;
            check++;
            print(arr);
        }
        else
        {
            cout << "enter the coordinate where you wants to place 0" << endl;
            cin >> r >> c;
            arr[r - 1][c - 1] = 0;
            check++;
            print(arr);
        }

    } while ((!checking(arr)) && (!tie(arr)));

    return 0;
}
