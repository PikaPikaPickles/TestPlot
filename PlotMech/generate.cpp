#include "generate.h"
#include <windows.h>                                            //первая попавшаяся библиотека для задержки
#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()
Generate::Generate(QObject *parent) : QObject(parent)
{

}
void Generate:: generation()
{
    while(true)
    {
       srand(time(NULL));
       if(is_working)
       {                                                        // проверяем флажок
        Sleep(200);                                             // время на кастование одной пары чисел
        emit  emitDATA((rand()%100-0.1),(rand()%100-0.1) );     //сигналим цифры в слот пуша и обновления
       }
       else                                                     //если флажок false (нажата кнопка паузы или стопа, останавливаем цикл
        break;
    }
}
