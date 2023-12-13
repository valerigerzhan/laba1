#ifndef BASE_H
#define BASE_H

#include <string>
using namespace std;

// ОСНОВНОЙ КЛАСС
class Base
{
// основные методы
public:
    Base();
    Base(int size);
    Base(const Base &B);
    ~Base();
    virtual void Set() = 0; // добавить элемент
    virtual void Get() = 0; // получить элемент
    virtual void Delete() = 0; // удалить элемент
    virtual void Change() = 0; // изменить данные
    virtual void Load(int count, string line) = 0; // для выгрузки данных из файла
    virtual string Save(int count) = 0; // для выгрузки данных в файл
    virtual int TypeID() = 0; // чтобы понят студент или  учитель или администрация
};

class Furniture:public Base
{
private:
    string type; // тип
    string dimensions; // габариты 0х0х0
    string color; // цвет
    string material; // материал
    string cost; // цена

public:
// создание конструкторов и деструктора
    Furniture(); // конструктор по умолчанию
    Furniture(string type, string dimensions, string color, string material, string cost); // конструктор с параметром
    Furniture(const Furniture &F); // конструктор копирования
    ~Furniture(); // деструктор

// создание основных методов
    void Set() override; // добавление данных о книге
    void Get() override; // получениnaе данных о книге
    void Delete() override; // удаление данных о книге
    void Change() override; // изменение данных о книге
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class Person:public Base
{
private:
    string name; // ФИО
    string post; // должность
    string money; // зарплата
    string adres; // адрес
    string phone; // номер телефона

public:
// создание конструкторов и деструктора
    Person(); // конструктор по умолчанию
    Person(string name, string post, string money, string adres, string phone); // конструктор с параметром
    Person(const Person &P); // конструктор копирования
    ~Person(); // деструктор

// создание основных методов
    void Set() override; // добавление данных об учебнике
    void Get() override; // получение данных об учебнике
    void Delete() override; // удаление данных об учебнике
    void Change() override; // изменение данных об учебнике
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class Car:public Base
{
private:
    string type; // тип
    string model; // модель
    string number; // номер

public:
// создание конструкторов и деструктора
    Car(); // конструктор по умолчанию
    Car(string type, string model, string number); // конструктор с параметром
    Car(const Car &C); // конструктор копирования
    ~Car(); // деструктор

// создание основных методов
    void Set() override; // добавление данных о канцелярии
    void Get() override; // получение данных о канцелярии
    void Delete() override; // удаление данных о канцелярии
    void Change() override; // изменение данных о канцелярии
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

#endif
