#include <iostream>
#include <vector>
#include "Numbers.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N;
    cout << "Введите размер массива (N): ";
    cin >> N;

    vector<int> array(N);

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    increaseEvenNumbers(array);

    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
	
	return 0;
}



