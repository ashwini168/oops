#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Generic sorting function using templates
template <typename T>
void genericSort(vector<T>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: ";
    vector<int> intArr(n);
    for (int i = 0; i < n; ++i) {
        cin >> intArr[i];
    }

    genericSort(intArr);

    cout << "Sorted array of integers: ";
    for (const auto& elem : intArr) {
        cout << elem << " ";
    }
    cout << endl;

    // Example of sorting an array of floats
    cout << "Enter the number of elements in the float array: ";
    cin >> n;

    cout << "Enter the elements of the float array: ";
    vector<float> floatArr(n);
    for (int i = 0; i < n; ++i) {
        cin >> floatArr[i];
    }

    genericSort(floatArr);

    cout << "Sorted array of floats: ";
    for (const auto& elem : floatArr) {
        cout << elem << " ";
    }
    cout << endl;

    // Example of sorting an array of strings
    cout << "Enter the number of elements in the string array: ";
    cin >> n;

    cout << "Enter the elements of the string array: ";
    vector<string> stringArr(n);
    for (int i = 0; i < n; ++i) {
        cin >> stringArr[i];
    }

    genericSort(stringArr);

    cout << "Sorted array of strings: ";
    for (const auto& elem : stringArr) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}