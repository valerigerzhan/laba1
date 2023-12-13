#include <iostream>
#include "Base.h"

using namespace std;

Base::Base()
{
    cout << "Вызван конструктор класса Base" << endl;
}
Base::Base(int size)
{
    cout << "Вызван конструктор с параметром класса Base" << endl;
}
Base::Base(const Base &B)
{
    cout << "Вызван конструктор копирования класса Base" << endl;
}
Base::~Base()
{
    cout << "Вызван деструктор класса Base" << endl;
}

// класс Furniture
// конструктор по умолчанию
Furniture::Furniture()
{
    this->type = "NONE"; // тип
    this->dimensions = "NONE"; // габариты
    this->color = "NONE"; // цвет
    this->material = "NONE"; // материал
    this->cost = "NONE"; // цена

    cout << "Вызван конструктор по умолчанию класса - Furniture" << endl;
}

// конструктор с параметром
Furniture::Furniture(string type, string dimensions, string color, string material, string cost)
{
    this->type = type; // тип
    this->dimensions = dimensions; // габариты
    this->color = color; // цвет
    this->material = material; // материал
    this->cost = cost; // цена

    cout << "Вызван конструктор с параметром класса - Furniture" << endl;
}

// конструктор копирования
Furniture::Furniture(const Furniture &F)
{
    this->type = F.type; // тип
    this->dimensions = F.dimensions; // габариты
    this->color = F.color; // цвет
    this->material = F.material; // материал
    this->cost = F.cost; // цена

    cout << "Вызван конструктор копирования класса - Furniture" << endl;
}

// деструктор
Furniture::~Furniture()
{
    cout << "Вызван деструктор класса - Furniture" << endl;
}

// основные методы
// метод установки значения
void Furniture::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные о мебели:" << endl;

    cout << "Тип: ";
    getline(cin, this->type);

    cout << "Габариты: ";
    getline(cin, this->dimensions);

    cout << "Цвет: ";
    getline(cin, this->color);

    cout << "Материал: ";
    getline(cin, this->material);

    cout << "Цена: ";
    getline(cin, this->cost);
}

// метод получения значений
void Furniture::Get()
{
    cout << "~~~Информация о мебели~~~" << endl;
    cout << "Тип: " << this->type << endl;
    cout << "Габариты: " << this->dimensions << endl;
    cout << "Цвет: " << this->color << endl;
    cout << "Материал: " << this->material << endl;
    cout << "Цена: " << this->cost << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Furniture::Delete()
{
    this->type = "NONE"; // тип
    this->dimensions = "NONE"; // габариты
    this->color = "NONE"; // цвет
    this->material = "NONE"; // материал
    this->cost = "NONE"; // цена
}

// метод изменения данных
void Furniture::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - Тип \n"
         << "2 - Габариты \n"
         << "3 - Цвет \n"
         << "4 - Материал \n"
         << "5 - Цена \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 5) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "Тип: ";
        getline(cin, this->type);
    }

    else if (stoi(choice) == 2)
    {
        cout << "Габариты: ";
        getline(cin, this->dimensions);
    }

    else if (stoi(choice) == 3)
    {
        cout << "Цвет: ";
        getline(cin, this->color);
    }

    else if (stoi(choice) == 4)
    {
        cout << "Материал: ";
        getline(cin, this->material);
    }

    else
    {
        cout << "Цена: ";
        getline(cin, this->cost);
    }
}

// класс Person
// конструктор по умолчанию
Person::Person()
{
    this->name = "NONE"; // ФИО
    this->post = "NONE"; // должность
    this->money = "NONE"; // ЗП
    this->adres = "NONE"; // адрес
    this->phone = "NONE"; // телефон

    cout << "Вызван конструктор по умолчанию класса - Person" << endl;
}

// конструктор с параметром
Person::Person(string name, string post, string money, string adres, string phone)
{
    this->name = name; // ФИО
    this->post = post; // должность
    this->money = money; // ЗП
    this->adres = adres; // адрес
    this->phone = phone; // телефон

    cout << "Вызван конструктор с параметром класса - Person" << endl;
}

// конструктор копирования
Person::Person(const Person &P)
{
    this->name = P.name; // ФИО
    this->post = P.post; // должность
    this->money = P.money; // ЗП
    this->adres = P.adres; // адрес
    this->phone = P.phone; // телефон

    cout << "Вызван конструктор копирования класса - Person" << endl;
}

// деструктор
Person::~Person()
{
    cout << "Вызван деструктор класса - Person" << endl;
}

// основные методы
// метод установки значения
void Person::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные о работнике:" << endl;

    cout << "ФИО: ";
    getline(cin, this->name);

    cout << "Должность: ";
    getline(cin, this->post);

    cout << "Зарплата: ";
    getline(cin, this->money);

    cout << "Адрес: ";
    getline(cin, this->adres);

    cout << "Номер телефона: ";
    getline(cin, this->phone);
}

// метод получения значений
void Person::Get()
{
    cout << "~~~Информация о работнике~~~" << endl;
    cout << "Название: " << this->name << endl;
    cout << "Автор: " << this->post << endl;
    cout << "Год выпуска: " << this->money << endl;
    cout << "Учебное заведение: " << this->adres << endl;
    cout << "Год обучения: " << this->phone << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Person::Delete()
{
    this->name = "NONE"; // ФИО
    this->post = "NONE"; // должность
    this->money = "NONE"; // ЗП
    this->adres = "NONE"; // адрес
    this->phone = "NONE"; // телефон
}

// метод изменения данных
void Person::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - ФИЛ \n"
         << "2 - Должность \n"
         << "3 - ЗП \n"
         << "4 - Адрес \n"
         << "5 - Телефон \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 5) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "ФИО: ";
        getline(cin, this->name);
    }

    else if (stoi(choice) == 2)
    {
        cout << "Должность: ";
        getline(cin, this->post);
    }

    else if (stoi(choice) == 3)
    {
        cout << "ЗП: ";
        getline(cin, this->money);
    }

    else if (stoi(choice) == 4)
    {
        cout << "Адрес: ";
        getline(cin, this->adres);
    }

    else
    {
        cout << "Номер Телефона: ";
        getline(cin, this->phone);
    }
}

// класс Chancellery
// конструктор по умолчанию
Car::Car()
{
    this->type = "NONE"; // тип
    this->model = "NONE"; // модель
    this->number = "NONE"; // гос.номер

    cout << "Вызван конструктор по умолчанию класса - Car" << endl;
}

// конструктор с параметром
Car::Car(string type, string model, string number)
{
    this->type = type; // тип
    this->model = model; // модель
    this->number = number; // гос.номер

    cout << "Вызван конструктор с параметром класса - Car" << endl;
}

// конструктор копирования
Car::Car(const Car &C)
{
    this->type = C.type; // тип
    this->model = C.model; // модель
    this->number = C.number; // номер

    cout << "Вызван конструктор копирования класса - Car" << endl;
}

// деструктор
Car::~Car()
{
    cout << "Вызван деструктор класса - Car" << endl;
}

// основные методы
// метод установки значения
void Car::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные о машине:" << endl;

    cout << "Тип: ";
    getline(cin, this->type);

    cout << "Модель: ";
    getline(cin, this->model);

    cout << "Гос.номер: ";
    getline(cin, this->number);
}

// метод получения значений
void Car::Get()
{
    cout << "~~~Информация о машине~~~" << endl;
    cout << "Тип: " << this->type << endl;
    cout << "Модель: " << this->model << endl;
    cout << "Гос.номер: " << this->number << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Car::Delete()
{
    this->type = "NONE"; // тип
    this->model = "NONE"; // модель
    this->number = "NONE"; // гос.номер
}

// метод изменения данных
void Car::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - Тип \n"
         << "2 - Модель \n"
         << "3 - Гос.Номер \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 3) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "Тип: ";
        getline(cin, this->type);
    }

    else if (stoi(choice) == 2)
    {
        cout << "Модель: ";
        getline(cin, this->model);
    }

    else
    {
        cout << "Гос.Номер: ";
        getline(cin, this->number);
    }
}

// методты GetType
int Furniture::TypeID()
{
    return 1;
}
int Person::TypeID()
{
    return 2;
}
int Car::TypeID()
{
    return 3;
}

string Furniture::Save(int count)
{
    if (count == 0) return this->type;
    else if (count == 1) return this->dimensions;
    else if (count == 2) return this->color;
    else if (count == 3) return this->material;
    else if (count == 4) return this->cost;
}

string Person::Save(int count)
{
    if (count == 0) return this->name;
    else if (count == 1) return this->post;
    else if (count == 2) return this->money;
    else if (count == 3) return this->adres;
    else if (count == 4) return this->phone;
}

string Car::Save(int count)
{
    if (count == 0) return this->type;
    else if (count == 1) return this->model;
    else if (count == 2) return this->number;
}

void Furniture::Load(int count, string line)
{
    if (count == 0) this->type = line;
    else if (count == 1) this->dimensions = line;
    else if (count == 2) this->color = line;
    else if (count == 3) this->material = line;
    else if (count == 4) this->cost = line;
}

void Person::Load(int count, string line)
{
    if (count == 0) this->name = line;
    else if (count == 1) this->post = line;
    else if (count == 2) this->money = line;
    else if (count == 3) this->adres = line;
    else if (count == 4) this->phone = line;
}

void Car::Load(int count, string line)
{
    if (count == 0) this->type = line;
    else if (count == 1) this->model = line;
    else if (count == 2) this->number = line;
}
