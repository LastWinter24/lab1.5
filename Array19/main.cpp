﻿#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    const int N = 10;  // Размер массива
    int A[N];

    // Ввод элементов массива от пользователя
    cout << "Введите " << N << " целых чисел для массива A:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
    }

    int result = 0;  // Переменная для хранения результата

    // Поиск последнего элемента AK, удовлетворяющего двойному неравенству
    for (int i = 1; i < N - 1; ++i) {
        if (A[0] < A[i] && A[i] < A[N - 1]) {
            result = i + 1;  // Номер элемента (индекс + 1)
        }
    }

    // Вывод результата
    if (result != 0) {
        cout << "Порядковый номер последнего элемента AK, удовлетворяющего условию: " << result << endl;
    }
    else {
        cout << "Таких элементов нет, выводим 0." << endl;
    }
	
	return 0;
}


