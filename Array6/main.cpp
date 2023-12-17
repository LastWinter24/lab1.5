#include <iostream>
#include <vector>

using namespace std;

// Функция для формирования массива
std::vector<int> generateArray(int N, int A, int B) {
    std::vector<int> arr(N); // Создаем вектор размера N

    arr[0] = A; // Первый элемент равен A
    arr[1] = B; // Второй элемент равен B

    // Заполняем массив суммами предыдущих элементов
    for (int i = 2; i < N; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr; // Возвращаем сформированный массив
}

int main() {
    setlocale(LC_ALL, "RU");
    int N, A, B;
    cout << "Введите N, A и B: ";
    cin >> N >> A >> B;

    vector<int> result = generateArray(N, A, B); // Формируем массив

    // Выводим полученный массив
    cout << "Полученый массив: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}
