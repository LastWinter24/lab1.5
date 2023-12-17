#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N;
    std::cout << "Введите размер массива: ";
    std::cin >> N;

    int* A = new int[N]; // Создаем динамический массив размера N

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    // Выводим элементы с нечетными номерами в порядке возрастания
    for (int i = 0; i < N; i += 2) {
        std::cout << A[i] << " ";
    }

    // Выводим элементы с четными номерами в порядке убывания
    for (int i = N - 2; i >= 0; i -= 2) {
        std::cout << A[i] << " ";
    }

    delete[] A; // Освобождаем память, выделенную для массива

    return 0;
}