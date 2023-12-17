#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    const int N = 15;  // Размер массива (не более 15)
    int A[N];
    int B[N / 3];  // Размер нового массива B

    // Ввод элементов массива A от пользователя
    cout << "Введите " << N << " целых чисел для массива A:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
    }

    // Заполнение массива B элементами с порядковыми номерами, кратными трем
    int indexB = 0;  // Индекс для заполнения массива B
    for (int i = 2; i < N; i += 3) {
        B[indexB++] = A[i];
    }

    // Вывод размера и содержимого массива B
    cout << "Размер массива B: " << indexB << endl;
    cout << "Содержимое массива B: ";
    for (int i = 0; i < indexB; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;
	
	return 0;
}



