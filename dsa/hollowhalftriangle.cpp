#include <iostream>
using namespace std;
int main()

{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}