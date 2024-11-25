#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void GenerateArray(int* arr, int size, int start, int end, int index = 0) {
    if (index == size) return;
    arr[index] = start + rand() % (end - start + 1);
    GenerateArray(arr, size, start, end, index + 1);
}

void PrintArray(const int* arr, int size, int index = 0) {
    if (index == 0) cout << "[ ";
    if (index == size) {
        cout << "]" << endl;
        return;
    }
    cout << arr[index];
    if (index < size - 1) cout << ", ";
    PrintArray(arr, size, index + 1);
}

int SumOddIndices(const int* arr, int size, int index = 0, int sum = 0) {
    if (index == size) return sum;
    if (arr[index] % 2 != 0) {
        sum += index;
    }
    return SumOddIndices(arr, size, index + 1, sum);
}

int main() {
    srand((unsigned)time(0));
    const int size = 10; 
    const int rangeStart = -20, rangeEnd = 20;
    int arr[size];

    GenerateArray(arr, size, rangeStart, rangeEnd);

    cout << "Original array:" << endl;
    PrintArray(arr, size);

    int sum = SumOddIndices(arr, size);

    cout << "Sum of indices of odd elements: " << sum << endl;

    return 0;
}