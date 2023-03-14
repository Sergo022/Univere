#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int const N = 20;
    char str[N];
    cin.getline(str, N);

    for (int i = 0; i <strlen(str); i++)
    {
        if (str[i] == 'R')
        
            str[i] = 'K';
        
            if (str[i] == 'S')
            
                str[i] = 'L';
            
                if (str[i] == 'T')
                
                    str[i] = 'M';
    }
    cout << str << endl;
}