#include<bits/stdc++.h>
using namespace std;

int* Merge(int* A, int n, int* B, int m)
{
    int* C = new int[n + m];
    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1)
    {
        if (A[i] > B[j])
        {
            C[k++] = B[j++];
        }
        else
        {
            C[k++] = A[i++];
        }
    }

    while (i <= n - 1)
    {
        C[k++] = A[i++];
    }

    while (j <= m - 1)
    {
        C[k++] = B[j++];
    }

    return C;
}

void printArray(int* C, int s)
{
    cout << "Merged array:" << endl;
    for (int x = 0; x < s; x++)
    {
        cout << C[x] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 80};
    int b[] = {12, 18, 40, 47, 69, 70, 100};
    int* p = Merge(a, 7, b, 7);
    printArray(p, 14);

    return 0;
}
