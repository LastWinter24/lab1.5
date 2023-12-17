#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N;
    cout << "Введите размер массив: ";
    cin >> N;

    int* arr = new int[N]; // Создаем динамический массив размера N

    cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Элементы массива в обратном порядке: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    delete[] arr; // Освобождаем память, выделенную для массива
    return 0;
}
