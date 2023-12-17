#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    const int N = 10;  // Размер массива (замените на нужное значение)
    int A[N];
    int B[N];

    // Ввод элементов массива A от пользователя
    cout << "Введите " << N << " целых чисел для массива A:" << endl;
    for (int i = 0; i < N; ++i) {
    cout << "A[" << i + 1 << "]: ";
    cin >> A[i];
    }

    // Заполнение массива B элементами с четными номерами, затем с нечетными
    int indexB = 0;  // Индекс для заполнения массива B
    for (int i = 1; i < N; i += 2) {
        B[indexB++] = A[i];
    }
    for (int i = 0; i < N; i += 2) {
        B[indexB++] = A[i];
    }

    // Вывод содержимого массива B
      cout << "Содержимое массива B: ";
    for (int i = 0; i < N; ++i) {
      cout << B[i] << " ";
    }
    cout << endl;
	
	return 0;
}



