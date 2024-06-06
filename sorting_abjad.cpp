#include <iostream>
#include <string>

using namespace std;

void sortStrings(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    string cities[] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};
    int n = sizeof(cities) / sizeof(cities[0]);

    cout << "Data sebelum diurutkan:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << cities[i] << endl;
    }

    sortStrings(cities, n);

    cout << "\nData setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " + cities[i] << endl;
    }

    return 0;
}
