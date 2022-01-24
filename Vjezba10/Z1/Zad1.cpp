#include <iostream>
using namespace std;

template<typename TYPE>
void sortArr(TYPE arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

template<>
void sortArr<char>(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tolower(arr[i]) < tolower(arr[j])) {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arrint[] = { 99, 3, 11, 8, 20, 9, 187 };
    char arr[] = { 'g', 'j', 's', 'a', 'w', 'G', 'h', 'B', 'k'};
    sortArr(arrint, 6);
    sortArr(arr, 8);
    for (int i = 0; i < 7; i++) {
        cout << arrint[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
}