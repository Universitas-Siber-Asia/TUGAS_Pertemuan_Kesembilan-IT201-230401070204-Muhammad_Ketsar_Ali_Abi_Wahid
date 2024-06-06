#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "masukan ukuran dari array : ";
    cin >> n;

    int arr[n];

    cout << "\nmasukan elemen kedalam array : \n";

    for (int i = 0; i < n; i++)
    {
        cout << "index-" << i << " : ";
        cin >> arr[i];
    }

    cout << "\ndata array sebelum di tukar : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\ndata array setelah di tukar : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}