#ifndef KEEPER_H
#define KEEPER_H

#include "Base.h"

class Keeper
{
private:
    Base **array;
    int size;
    int countElement;

public:
// создание конструкторов и деструктора
    Keeper();
    Keeper(int size);
    Keeper(const Keeper &K);
    ~Keeper();

// основные методы
    void Set(); // добавить элемент
    void Get(); // получить элемент
    void GetChoice(); // получить выбранный
    void Delete(); // удалить элемент
    Keeper & operator-=(int element); // перегузка -=
    void Change(); // изменить значения
    void Save(); // сохранить данные в файл
    void Load(); // загрузить данные из файла
};

#endif
