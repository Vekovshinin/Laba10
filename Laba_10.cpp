#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int m, n, num;
    srand(time(0));
    setlocale(LC_ALL, "Ru");
    cout << "Введите количество строк: ";
    cin >> m;
    cout << "Введите количество столбцов: ";
    cin >> n;
    int** mas = new int* [m];
    for (int i = 0; i < m; i++) {
        mas[i] == new int[n];

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mas[i][j] = rand() % 10;

        }
    }
    cout << "Массив: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mas[i][j] << ' ';

        }
        cout << endl;
    }
    cout << "Введите номер строки, которую нужно вставить в массив: ";
    cin >> num;
    int** mas2 = new int* [m + 1];
    for (int i = 0; i < m + 1; i++) {
        mas2[i] = new int[n];

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mas2[i][j] = mas[i][j];

        }
    }
    delete[] mas;
    
    for (int j = 0; j < n; j++) {
        mas2[m][j] = mas2[num - 1][j];

    }
    cout << "Новый массив: " << endl;
    for (int i = 0; i < m + 1; i++) {
        for (int j = 0; j < n; j++) {
            cout << mas2[i][j] << ' ';

        }
        cout << endl;
    }
    system("pause");
    return 0;
}
