
#include <iostream>
#include <Windows.h>

using namespace std;

int count(char* str);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[201];

    cout << "Vvedit: ";
    cin.getline(str, 200); cout << endl;

    cout << "count " << count(str) << endl;

    return 0;
}

int count(char* str)
{
    int k = 0;
    for (int i = 0; i < strlen(str); i++)
        for (int j = i + 1; j < strlen(str); j++)
            if (str[i] == str[j] || str[i] == ' ')
                {
                    k++;
                    break;
                }
    return k;
}