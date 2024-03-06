#include <iostream>
#include <fstream>
using namespace std;
int countZeroElements(const char* filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "ошибка при открытии файла " << filename << endl;
        return -1;
    }

    double num;
    int zeroCount = 0;
    while (file >> num) {
        if (num == 0.0) {
            zeroCount++;
        }
    }

    file.close();
    return zeroCount;
}

int main() {
    setlocale(LC_ALL, "RU");
    const char* filename1 = "a1.txt";
    const char* filename2 = "a2.txt";

    int zeroCount1 = countZeroElements(filename1);
    int zeroCount2 = countZeroElements(filename2);

    if (zeroCount1 >= 0 and zeroCount2 >= 0) {
        cout << "Количество нулевых элементов в " << filename1 << ": " << zeroCount1 << endl;
        cout << "Количество нулевых элементов в " << filename2 << ": " << zeroCount2 << endl;
    }

    return 0;
}