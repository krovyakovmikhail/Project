﻿// PRJ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include "Source2.cpp"

using namespace std;


int n = 1, f = 1, q = 1, k = 1;
float p = 1.1;

extern int a, b, c, d;  // подключили переменные из файла " Source2.cpp" // для того что бы конструкция начала работать нужно подключить фаил:   #include "Source2.cpp"
extern float i;


int main()
{

    ///================================================================================================================================================================================================
    ///  ДЗ 4 соединенное с ДЗ 1. 
    ///================================================================================================================================================================================================

    n = 11;
    f = 3;
    q = 15;
    k = 8;

    a = 12;
    b = 3;
    c = 123;
    d = 13;

    p = n * (f + (static_cast <float> (q) / k)); // Вывод 53.625 //используем переменные  объявленные в PRJ.cpp
    i = a * (b + (static_cast <float> (c) / d)); // 149.538 //переменные объявленные в Source2.cpp

    cout << p << endl;  // Выводим результат
    cout << i << endl;  // Выводим результат //переменные объявленные в Source2.cpp

    cout << "vvedite int a" << endl;   // Просим пользвователя ввести целое число 
    cin >> a;                          // записываем в a, b и тд. 
    cout << "vvedite int b" << endl;
    cin >> b;
    cout << "vvedite int c" << endl;
    cin >> c;
    cout << "vvedite int d" << endl;
    cin >> d;

    i = a * (b + (static_cast <float> (c) / d)); // расчитывает по ввеленным пользователем значениям. 

    cout << i << endl; // выводим результат по данным пользвователя. 

    //======================================================================================================================================================================================================
    //  Задание 2.   Дано целое число. Если оно меньше или равно 21, то выведите на экран разницу между этим числом и числом 21. Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21. При выполнении задания следует использовать тернарный оператор(? : ).
    //======================================================================================================================================================================================================

    int O, H;  //   
                
           
    string str = "Vvedite lyboe chislo"; 

    cout << str << endl; // просим ввести число

    cin >> H; //записываем


    O = H <= 21 ? 21 - H : (H - 21) * 2;  //расчитываем

   
    string str1 = "Raznica = ",
           str2 = "Udvoennaya Raznica = " ;

    if (O <= 21)          // По условию: 
    {
        cout << str1 << O << endl;  // если <= 21 выводим сообщение + разницу.
        //cout << O << endl;
    }

    else
    {
        cout << str2 << O << endl;  //иначе выводим сообщение и двоенную разницу. 
       // cout << O << endl;
    }


    //======================================================================================================================================================================================================
    //  Задание 3.  Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри массива и при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба[1][1][1].
    //======================================================================================================================================================================================================

    int array[3][3][3] = { {0,0,0},{0,0,0},{0,0,0} };   // создаем массив, все элементы массива равны 0. 

    int * ptr;                  // Создаем указатель

    ptr = nullptr;              // Указатель должен тыть всегда инициализирован

    ptr = &array[1][1][1];      // адрес нужного элемента массива сохраняем в указателе 


    * ptr = 8888;               //при помощи разымееновывания, перезаписываем значение на указанный элемент маассива. 



    cout << array[1][1][1] << endl; // выводит на экран 8888.


     
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
