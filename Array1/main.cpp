#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N;
    cout << "Введите целое число N: ";
    cin >> N;

    // Создаем вектор для хранения N первых положительных нечетных чисел
    vector<int> oddNumbersArray;

    // Заполняем вектор N первыми положительными нечетными числами
    for (int i = 1; oddNumbersArray.size() < N; i += 2) {
        oddNumbersArray.push_back(i);
    }

    // Выводим массив на экран
    cout << "Массив из " << N << " первых положительных нечетных чисел: ";
    for (int num : oddNumbersArray) {
        cout << num << " ";
    }
	
	return 0;
}



