#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream fout("numbers.bin", ios::binary);
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fout.write((char*)numbers, sizeof(numbers));
    fout.close();

    ifstream fin("numbers.bin", ios::binary);

    int number;
    int sum = 0;

    while (fin.read((char*)&number, sizeof(number))) {
        if (number % 2 == 0) {
            sum += number;
        }
    }
    fin.close();
    cout << "Summa chetnih chisel: " << sum << endl;

    return 0;
}
