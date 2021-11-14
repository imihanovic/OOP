/* Napisati funkciju koja racuna najveci i najmanji broj u nizu od n prirodnih
brojeva.Funkcija vraca trazene brojeve pomocu referenci.*/
#include <iostream>
using namespace std;
void min_max(int arr[], int n, int& maxi, int& mini)
{
    for (int i = 0; i < n; i++)
    {
        maxi = (maxi > arr[i]) ? maxi : arr[i];
        mini = (mini < arr[i]) ? mini : arr[i];
    }
}
int main()
{
    cout << "Enter the length of array: " << endl;
    int n, i;
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements of array: ";
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
    int mini = arr[0], maxi = arr[0];
    min_max(arr, n, maxi, mini);
    cout << "Maximum element of array is: " << maxi << endl;
    cout << "Minimum element of array is: " << mini << endl;
    delete[]arr;
}