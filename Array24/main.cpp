#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    const int N = 5;  // Размер массива (замените на нужное значение)
    int A[N];

    // Ввод элементов массива от пользователя
    cout << "Введите " << N << " различных целых чисел для массива A:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
    }

    // Проверка, образуют ли элементы массива арифметическую прогрессию
    int difference = A[1] - A[0];  // Разность между первым и вторым элементами
    bool isArithmeticProgression = true;

    for (int i = 2; i < N; ++i) {
        if (A[i] - A[i - 1] != difference) {
            isArithmeticProgression = false;
            break;
        }
    }

    // Вывод результата
    if (isArithmeticProgression) {
        cout << "Элементы образуют арифметическую прогрессию. Разность прогрессии: " << difference << endl;
    }
    else {
        cout << "Элементы не образуют арифметическую прогрессию. Выводим 0." << endl;
    }

	
	return 0;
}



