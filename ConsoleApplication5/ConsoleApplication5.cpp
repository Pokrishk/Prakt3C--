#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double arr[3][5];
    for (int i = 0; i < 3; ++i) {
        cout << "Введите элементы строки " << i + 1 << ": ";
        for (int j = 0; j < 5; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        double sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += arr[i][j];
        }
        double average = sum / 5;
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << endl;
    }
}