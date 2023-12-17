#include <iostream>
#include <vector>
#include "Array.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Размер массива N
    int N;
    cout << "Введите размер массива (N): ";
    cin >> N;

    // Создаем массив размера N
    vector<int> array(N);

    // Заполняем массив
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    // Целое число K
    int K;
    cout << "Введите значение K (от 1 до N): ";
    cin >> K;

    // Преобразование массива
    transformArray(array, K);

    // Вывод преобразованного массива
    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
	
	return 0;
}



