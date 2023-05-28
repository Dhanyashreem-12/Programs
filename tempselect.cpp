#include <iostream>

template<typename T>
void SelectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            std::swap(arr[i], arr[minIdx]);
        }
    }
}

int main() {
    int intArr[] = {5, 2, 9, 3, 7};
    float floatArr[] = {3.14, 2.71, 1.618, 0.618};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < intSize; i++) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    SelectionSort(intArr, intSize);

    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < intSize; i++) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < floatSize; i++) {
        std::cout << floatArr[i] << " ";
    }
    std::cout << std::endl;

    SelectionSort(floatArr, floatSize);

    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < floatSize; i++) {
        std::cout << floatArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
