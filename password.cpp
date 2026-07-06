#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

using namespace std;

vector<int> inputPassword()
{
    vector<int> password;

    while (true)
    {
        int key = _getch();

        if (key == 13)
            break;

        if (key == 0 || key == 224)
        {
            int second = _getch();
            password.push_back(256 + second);
        }
        else
        {
            password.push_back(key);;
        }
    }

    cout << endl;
    return password;
}

int main()
{
    SetConsoleOutputCP(1251);

    cout << "Введите пароль (последовательность нажатий клавиш): ";
    vector<int> password = inputPassword();

    cout << "Повторите пароль: ";
    vector<int> check = inputPassword();

    if (password != check)
    {
        cout << "Неверно! Руки бы вам оторвать за такую внимательность!" << endl;
        return 0;
    }

    return 0;
}