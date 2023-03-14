#include <iostream>
using namespace std;
const int MAX_ITEMS_1 = 10;

template <typename T>
int CountItems(int n, T Array[])
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (Array[i] % 2 == 0) {
            count++;
        }

    }
    return count;

}
int main()
{
    int AD[MAX_ITEMS_1] = { 1, 1, 1, 8 };

    int count1;
    int vids = 4;
    count1 = CountItems(4, AD);
    cout << (count1 * 100) / 4 << "% парні" << endl;
    cout << ((vids - count1) * 100) / 4 << "% непарні";
}