#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int B[], int C[], int n, int m)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (A[i] <= B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < n)
    {
        C[k++] = A[i++];
    }

    while (j < m)
    {
        C[k++] = B[j++];
    }
}

void ArrayPrint(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {12,14,16,18,20};
    ArrayPrint(A,5);

    int B[] = {22,24,26,28,30};
    ArrayPrint(B,5);

    int C[10];

    Merge(A, B, C, 5, 5);

    cout << "Merged two array: ";
    ArrayPrint(C, 10);

    return 0;
}
