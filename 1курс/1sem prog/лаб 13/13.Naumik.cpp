#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char lat[10];
    int count = 0;

    cin.getline(lat, 10);

    for (int i = 0; i < strlen(lat); i++)
    {

        switch (lat[i]) {
        case 'X':
            count += 10;
            break;
        case 'V':
            if (i + 1 < strlen(lat) && (lat[i + 1] == 'X'))
                count -= 5;
            else count += 5;

            break;
        case 'I':
            if (i + 1 < strlen(lat) && (lat[i + 1] == 'V' || lat[i + 1] == 'X'))
                count -= 1;
            else count += 1;

            break;

        }


    }

    cout << count << endl;
}