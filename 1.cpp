#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, m;

    cout << "vvedite kolichestvo chetnih chisel: ";
    cin >> n;

    ofstream fout("numbers.txt");
    for (int i = 1; i <= n; i++) {
        fout << i * 2 << " ";
    }
    fout.close();
    cout << n << " chetnih chisel zapisano v 'numbers.txt'" << endl;

    cout << "vvedite kolichestvo (m): ";
    cin >> m;

    ifstream fin("numbers.txt");
    cout << "chisla: ";
    int number;
    int count = 0;

    while (count < m && fin >> number) {
        cout << number << " ";
        count++;
    }

    fin.close();
    cout << endl;

    return 0;
}
