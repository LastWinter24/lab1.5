#pragma once
#include <iostream>
#include <vector>

// Функция для преобразования массива
void transformArray(std::vector<int>& arr, int k) {
    // Проверка на валидность значения K
    if (k < 1 || k > arr.size()) {
        std::cerr << "Недопустимое значение K. K должно быть в диапазоне от 1 до N." << std::endl;
        return;
    }

    // Получаем значение элемента AK
    int akValue = arr[(k - 1)];

    // Проходим по всем элементам массива и увеличиваем их на значение AK
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] += akValue;
    }
}