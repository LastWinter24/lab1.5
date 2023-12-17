#pragma once
#include <iostream>
#include <vector>

// ������� ��� �������������� �������
void transformArray(std::vector<int>& arr, int k) {
    // �������� �� ���������� �������� K
    if (k < 1 || k > arr.size()) {
        std::cerr << "������������ �������� K. K ������ ���� � ��������� �� 1 �� N." << std::endl;
        return;
    }

    // �������� �������� �������� AK
    int akValue = arr[(k - 1)];

    // �������� �� ���� ��������� ������� � ����������� �� �� �������� AK
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] += akValue;
    }
}