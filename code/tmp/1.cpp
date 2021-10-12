#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N (1024 * 30)
void func(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (t = i, j = i + 1; j < n; j++)
        {
            if (a[j] < a[t])
                t = j;
        }
        if (t != i)
        {
            j = a[i];
            a[i] = a[t];
            a[t] = j;
        }
    }
}
void init(int a[], int n)
{
    int i;
    srand(time(NULL));
    for (i = 0x00; i < n; i++)
        a[i] = rand() % N;
}
int main(void)
{
    int i, n, a[N];
    clock_t s, f;
    printf("please input data:");
    scanf("%d", &n);
    for (i = 0x00; i < n; i++)
    {
        init(a, N);
        s = clock();
        func(a, N);
        f = clock();
        printf("time: %d, %d, %d\n", s, f, f - s);
    }
    return 0x00;
}
