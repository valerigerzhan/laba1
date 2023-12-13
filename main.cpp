#include <iostream>
#include "Keeper.h"
#include "Base.h"

using namespace std;

int main()
{
    Keeper keeper;
    while (1)
    {
        string choice; // переменная выбора

        cout << "\n\nВыберите, что вы хотите сделать:\n";
        cout << "1 - Добавить элемент\n"
             << "2 - Получить значения всех элементов\n"
             << "3 - Получить значения выбранного элемента\n"
             << "4 - Удалить элемент\n"
             << "5 - Изменить элемент\n"
             << "6 - Загрузить данные из файла\n"
             << "7 - Загрузить данные в файл" << endl;

        try
        {
            cin >> choice;
            if (choice != "7" and choice != "6" and choice != "5" and choice != "4" and choice != "3" and
                choice != "2" and choice != "1") throw "Errand";
        }
        catch(const std::exception& e)
        {
            cout << "Неверный ввод" << endl;
        }
        catch(const char*mssg)
        {
            cout << "Неверный выбор" << endl;
            break;
        }

        if (choice == "1")
        {
            keeper.Set();
        }

        else if (choice == "2")
        {
            keeper.Get();
        }

        else if (choice == "3")
        {
            keeper.GetChoice();
        }

        else if (choice == "4")
        {
            keeper.Delete();
        }

        else if (choice == "5")
        {
            keeper.Change();
        }

        else if (choice == "6")
        {
            keeper.Load();
        }

        else
        {
            keeper.Save();
        }
    }
}
