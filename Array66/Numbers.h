#pragma once
#include <iostream>
#include <vector>

void increaseEvenNumbers(std::vector<int>& arr) {
    int firstEven = -1; // Инициализируем первое четное число значением по умолчанию
    // Находим первое четное число в массиве и сохраняем его значение
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            firstEven = arr[i];
            break;
        }
    }

    // Если четные числа в массиве есть, увеличиваем все четные числа на значение первого четного числа
    if (firstEven != -1) {
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 == 0) {
                arr[i] += firstEven;
            }
        }
    }
}