#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Кодировка ввода:  " << GetConsoleCP() << endl;
    cout << "Кодировка вывода: " << GetConsoleOutputCP() << endl;
    for (int i = 65; i < 255; i++) {
        cout << i << " " << char(i) << setw(5);
        if (i % 15 == 0) cout << endl;
    }

    cout << endl;

    char stroke[100];
    cout << "Введите строку: ";
    cin.getline(stroke, 100);

    for (int i = 0; stroke[i] != '\0'; i++)
    {
       unsigned char ch = stroke[i];

        if (ch >= 'A' && ch <= 'Z')
            stroke[i] = ch + 32;

        else if (ch >= 192 && ch <= 223)
            stroke[i] = ch + 32;

        else if (ch == 168)
            stroke[i] = 184;
    }
    
    cout << stroke << endl;


    return 0;
}