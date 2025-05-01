#include <iostream>
#include "Fraction.h"
#include "Str.h"

using namespace std;


int main() {
    setlocale(LC_ALL, "ru");
    Fraction f1(1, 2); // 1/2
    Fraction f2(3, 4); // 3/4
    Fraction f3;       // 0/1
    cout << "Дробь f1: ";
    f1.display();
    cout << endl;
    cout << "Дробь f2: ";
    f2.display();
    cout << endl;
    // Сложение
    Fraction sum = f1 + f2;
    cout << "f1 + f2 = ";
    sum.display();
    cout << endl;
    // Вычитание
    Fraction minus = f2 - f1;
    cout << "f2 - f1 = ";
    minus.display();
    cout << endl;
    // Умножение
    Fraction mult = f1 * f2;
    cout << "f1 * f2 = ";
    mult.display();
    cout << endl;
    // Сложение дроби с целым числом
    Fraction sum1 = f1 + 2;
    cout << "f1 + 2 = ";
    sum1.display();
    cout <<endl;
    // Умножение дроби с целым числом
    Fraction mult1 = f2 * 3;
    cout << "f2 * 3 = ";
    mult1.display();
    cout << endl;

    String str1("Hello World");
    str1.display();

    str1.setString("New Str");
    str1.display();

   
    String str2(5); 
    str2.setString("Test");
    str2.display();

    
    String str3 = str1; 
    str3.display();
    
   
}
