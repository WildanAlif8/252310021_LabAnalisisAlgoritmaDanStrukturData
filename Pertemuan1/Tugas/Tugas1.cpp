#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    cout << "Input jumlah buku: ";
    cin >> jumlah;
    cin.ignore();

    string dataBuku[100];

    for (int a = 0; a < jumlah; a++) {
        cout << "Masukkan judul buku ke-" << a + 1 << ": ";
        getline(cin, dataBuku[a]);
    }

    cout << "\nSebelum diurutkan:\n";
    for (int a = 0; a < jumlah; a++) {
        cout << dataBuku[a] << endl;
    }

    for (int x = 0; x < jumlah - 1; x++) {
        int posisiMin = x;

        for (int y = x + 1; y < jumlah; y++) {
            if (dataBuku[y] < dataBuku[posisiMin]) {
                posisiMin = y;
            }
        }

        string bantu = dataBuku[x];
        dataBuku[x] = dataBuku[posisiMin];
        dataBuku[posisiMin] = bantu;
    }

    cout << "\nSetelah diurutkan (A-Z):\n";
    for (int a = 0; a < jumlah; a++) {
        cout << dataBuku[a] << endl;
    }
    
}
