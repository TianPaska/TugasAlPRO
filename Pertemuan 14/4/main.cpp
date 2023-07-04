#include <bits/stdc++.h>

using namespace std;

void LinearSearch(int arr[], int left, int right, int key){
    if(left>right){
        cout << "Elemen tidak ditemukan dalam array" << endl;
        return;
    }

    if(arr[left]==key){
        cout << "Elemen ditemukan pada index ke-" << left << endl;
        return;
    }

    LinearSearch(arr, left + 1, right, key);
}

int main()
{
    int arr1[] = { 12, 11, 13, 5, 6 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int key;

    cout<<"masukan nilai yang di cari : ";
    cin>>key;
    auto start = chrono::steady_clock::now();

    LinearSearch(arr1, 0, n1-1, key);

    auto end = chrono::steady_clock::now();

    cout << "Elapsed time in microseconds: "<< chrono::duration_cast<chrono::microseconds>(end - start).count() << " �s" << endl;

    cout << "Elapsed time in milliseconds: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;

    int space = sizeof(arr1) + sizeof(n1) + sizeof(start) + sizeof(end) + sizeof(key);
    cout << "Space complexity: " << space << " bytes" << endl;
    return 0;
}
