// Fntastic_KKK_Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

//Проверка символа по списку повторов
bool FindInVector(char ch, vector <char> vec) {
    bool result = false;
    for (int i = 0; i < vec.size(); i++)
    {
        if (ch == vec[i])
        {
            result = true;
            break;
        }
    }

    return result;
}

int main()
{
    char strinH;
    string inStr, outStr;
    char ch;
    vector <char> repeatingCh;

    cout << "Vvedite stroky: ";
    //cin >> inStr;
    getline(cin, inStr);

    //LowerCase
    for (int i = 0; i < inStr.length(); i++)
    {
        ch = tolower(inStr[i]);
        inStr[i] = ch;
    }
    outStr = inStr;

    //Создаем список повторов
    for (int i = 0; i < inStr.length() - 1; i++) 
    {
        char currentCh = inStr[i];
        for (int k = i + 1; k < inStr.length(); k++)
        {
            if (currentCh == inStr[k])
            {
                repeatingCh.push_back(currentCh);
                break;
            }
        }

    }

    //Генерация новой строки с учетом повторов
    for (int i = 0; i < inStr.length(); i++)
    {
        char currentCh = inStr[i];
        if (FindInVector(currentCh, repeatingCh))
        {
            outStr[i] = ')';
        }
        else
        {
            outStr[i] = '(';
        }
    }

    cout << outStr;

    return 0;
}

