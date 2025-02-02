#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 3, 9, 1};
    char str[] = "hello world";
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(str, sizeof(str) / sizeof(str[0]));
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}