#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (i == 4)
        {
            break;
        }

        cout << i << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (i == 4)
        {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}