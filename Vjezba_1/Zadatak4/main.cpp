/* Napisati rekurzivnu funkciju za trazenje najveceg i najmanjeg broja u nizu. */
#include <iostream>
using namespace std;
int maximum(int arr[], int n, int maxi)
{
    if (n >= 0)
    {
        maxi = (maxi >= arr[n - 1]) ? maxi : arr[n - 1];
        return maximum(arr, n - 1, maxi);
    }
    return maxi;
}
int minimum(int arr[], int n, int mini)
{
    if (n >= 0)
    {
        mini = (mini <= arr[n - 1]) ? mini : arr[n - 1];
        return minimum(arr, n - 1, mini);
    }
    return mini;
}
int main()
{
    int n, i;
    cout << "Enter the length of array: " << endl;
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
    int maxi = arr[n - 1];
    int mini = arr[n - 1];
    cout << "Maximum element of array is: " << maximum(arr, n, maxi) << endl;
    cout << "Minimum element of array is: " << minimum(arr, n, mini) << endl;
}