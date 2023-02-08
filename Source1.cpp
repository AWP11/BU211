#include <iostream>
#include <ctime>
using namespace std;

void findSum(int*, int);
void findSum(int**, int, int);

int main() {
    srand(time(0));

    int n = 5, m = 6;

    int* arr1 = new int[n];

    int** arr2 = new int* [n];
    for (int i = 0; i < n; i++)
        arr2[i] = new int[m];

    cout << "First array:\n";
    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 10;
        cout << arr1[i] << " ";
    }

    cout << "\nSecond array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr2[i][j] = rand() % 10;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    findSum(arr1, n);
    findSum(arr2, n, m);

    delete arr1;

    for (int i = 0; i < n; i++)
        delete arr2[i];
    delete[] arr2;

    system("pause");
    return 0;
}
void findSum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Sum of 1-d array is : " << sum << endl;
}

void findSum(int** arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += arr[i][j];
    cout << "Sum of 2-d array is : " << sum << endl;
}
