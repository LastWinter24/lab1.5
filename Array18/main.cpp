#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    const int N = 10;  // Размер массива
    int A[N];

    // Ввод элементов массива от пользователя
    cout << "Введите " << N << " ненулевых целых чисел для массива A:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
    }

    // Поиск элемента A_K, удовлетворяющего условию A_K < A_10
    int result = 0;  // Переменная для хранения результата
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] < A[N - 1]) {
            result = A[i];
            break;  // Найден элемент, прерываем цикл
        }
    }

    // Вывод результата
    if (result != 0) {
        cout << "Значение первого элемента A_K, удовлетворяющего условию: " << result << endl;
    }
    else {
        cout << "Таких элементов нет, выводим 0." << endl;
    }
	
	return 0;
}



