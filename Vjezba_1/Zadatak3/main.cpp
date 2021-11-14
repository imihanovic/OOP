/* Napisati iterativnu funkciju za trazenje najveceg i najmanjeg broja u nizu. */
#include <iostream>
using namespace std;
int maximum(int arr[], int n)
{
    int maxi = arr[0], i;
    for (i = 0; i < n; i++)
        maxi = (maxi > arr[i]) ? maxi : arr[i];
    return maxi;
}
int minimum(int arr[], int n)
{
    int mini = arr[0], i;
    for (i = 0; i < n; i++)
        mini = (mini < arr[i]) ? mini : arr[i];
    return mini;
}
int main()
{
    cout << "Enter the length of array: " << endl;
    int n, i;
    cin >> n;
    int arr[20];
    cout << "Enter elements of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Maximum element of array is: " << maximum(arr, n) << endl;
    cout << "Minimum element of array is: " << minimum(arr, n) << endl;
}
