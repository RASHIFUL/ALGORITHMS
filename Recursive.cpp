#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int* A, int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (x == A[mid])
    {
        return mid;
    }
    else if (x < A[mid])
    {
        return BinarySearch(A, low, mid - 1, x);
    }
    else
    {
        return BinarySearch(A, mid + 1, high, x);
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50, 60, 80, 90, 100 };
    int n = sizeof(A) / sizeof(A[0]);
    int x ;
     cout<< "which index  number you  want to find "<<endl;
     cout << "10, 20, 30, 40, 50, 60, 80, 90, 100"<<endl;
     cout<<"Enter the number :"<<endl ;
     cin >> x;
    int result = BinarySearch(A, 0, n - 1, x);

    if (result == -1)
    {
        cout << "Element not found!" << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
