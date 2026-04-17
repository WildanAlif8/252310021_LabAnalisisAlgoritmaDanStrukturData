#include <iostream>
#include <vector>
using namespace std;

void merge(vector<string>& arr, int left, int mid, int right) {
    vector<string> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

void mergeSort(vector<string>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<string> data_barang = {
        "Pallet", "Kardus", "Forklift", "Rak", "Meja", "Troli", "Helm"
    };

    mergeSort(data_barang, 0, data_barang.size() - 1);

    cout << "Hasil sorting:\n";
    for (string s : data_barang) {
        cout << s << endl;
    }

    return 0;
}
