#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N, A, D;
    cout << "Введите целое число N, первый член A и разность D: ";
    cin >> N >> A >> D;

    // Создаем вектор для хранения членов арифметической прогрессии
    vector<int> progressionArray;

    // Заполняем вектор членами арифметической прогрессии
    for (int i = 0; i < N; i++) {
        int num = A + D * i;
        progressionArray.push_back(num);
    }

    // Выводим массив на экран
    cout << "Массив из " << N << " членов арифметической прогрессии: ";
    for (int num : progressionArray) {
        cout << num << " ";
    }

    return 0;
}