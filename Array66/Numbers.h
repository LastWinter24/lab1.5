#pragma once
#include <iostream>
#include <vector>

void increaseEvenNumbers(std::vector<int>& arr) {
    int firstEven = -1; // �������������� ������ ������ ����� ��������� �� ���������
    // ������� ������ ������ ����� � ������� � ��������� ��� ��������
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            firstEven = arr[i];
            break;
        }
    }

    // ���� ������ ����� � ������� ����, ����������� ��� ������ ����� �� �������� ������� ������� �����
    if (firstEven != -1) {
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 == 0) {
                arr[i] += firstEven;
            }
        }
    }
}