
#include <ctime> 
#include <iostream>
#include <cmath>
using namespace std;
// функція сортування злиттям

void mergeSort(int* arr, int l, int r)
{
    if (l == r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    int i = l;
    int j = mid + 1;
    int* tmp = (int*)malloc(r * sizeof(int*));
    for (int step = 0; step < r - l + 1; step++)
    {
        if ((j > r) || ((i <= mid) && (arr[i] < arr[j])))
        {
            tmp[step] = arr[i];
            i++;
        }
        else
        {
            tmp[step] = arr[j];
            j++;
        }
    }
    for (int step = 0; step < r - l + 1; step++)
        arr[l + step] = tmp[step];
}

int main()
{
    int N, d;
    int arr[N];
    int min, tmp;
    // сортування вибором
    for (N = 10; N <= 10000; N *= N)
    {
        unsigned int start_time = clock();
        for (int i = 0; i < N; i++)
        {
            arr[i] = rand() % 100;       // генератор випадкових чисел
        }
        for (int i = 0; i < N - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[j] < arr[min])
                {                           //пошук мінімального
                    min = j;
                }
            }
            tmp = arr[i];
            arr[i] = arr[min];     //заміна і-того елемента на мінімальний
            arr[min] = tmp;
        }

        unsigned int end_time = clock();
        unsigned int search_time = end_time - start_time;    // кінцевий час роботи фрагмента програми
        cout << endl;
        cout << "N = " << N << endl;
        cout << "вибором" << " - " << search_time << endl;

        //   сортування вставко

        unsigned int s_time = clock();
        for (int i = 0; i < N; i++)
        {
            arr[i] = rand() % 10000;
        }
        int j, i;
        for (i = 1; i < N; i++)
        {
            tmp = arr[i];

            for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = tmp;
        }
        unsigned int en_time = clock();
        unsigned int searc_time = en_time - s_time;
        cout << "вставкою" << " - " << searc_time << endl;


        //   сортування Шелла
        unsigned int sta_time = clock();
        for (int i = 0; i < N; i++)
        {
            arr[i] = rand() % 10000;
        }
        for (int i = 1; i < N; i++)
        {
            d = exp2(i) - 1;
            if (d <= N)
            {
                for (int k = 0; k < N - d; k++)
                {
                    int j = k;
                    while (j >= 0 && arr[j] > arr[j + d])
                    {
                        int number = arr[j];
                        arr[j] = arr[j + d];
                        arr[j + d] = number;
                        j--;
                    }
                }
            }
        }

        unsigned int endl_time = clock();
        unsigned int searchh_time = endl_time - sta_time;    // кінцевий час роботи фрагмента програми
        cout << "шелла" << " - " << searchh_time << endl;


        // Сортування злиттям

        unsigned int rt_time = clock();
        for (int i = 0; i < N; i++)
        {
            arr[i] = rand() % 10000;
        }
        mergeSort(arr, 0, N - 1); // вызываем функцию сортировки
        unsigned int d_time = clock();
        unsigned int rch_time = d_time - rt_time;    // кінцевий час роботи фрагмента програми
        cout << "злиттям" << " - " << rch_time << endl;
    }

}