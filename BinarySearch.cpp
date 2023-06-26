#include <iostream>
using namespace std;

int binarySearch(int b[], int l, int h, int x) {
    if (l > h) {
        return -1;
    }

    int m = (l + h) / 2;

    if (x == b[m]) {
        return m;
    }
    else if (x < b[m]) {
        return binarySearch(b, l, m - 1, x);
    }
    else {
        return binarySearch(b, m + 1, h, x);
    }
}

void ArrayPrint(int b[], int k) {
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int b[] = {15, 18, 22, 30, 44, 80, 82, 85, 99};
    ArrayPrint(b,9);
    int x = 80;

    int index = binarySearch(b, 0, 9 - 1, x);

    if (index != -1) {
        cout << "Element " << x << " found at index " << index << endl;
    }
    else {
        cout << "Element " << x << " not found in the array" << endl;
    }

    return 0;
}
