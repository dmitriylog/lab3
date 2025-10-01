#include <iostream>

using namespace std;

// калькулятор

class Calculator {
private:
    double result; // результат вычислений

public:
    Calculator():result(0.0){} // конструктор
    Calculator (double starter) : result(starter) {} // конструктор с начальным значением

    // методы - основные операции

    // 1. сложение
    void summ(double value){
        result += value;
    }

    // 2. вычитание
    void diff(double value){
        result -= value;
    }

    // 3. умножение
    void multipl(double value){
        result *= value;
    }

    // 4. деление
    void division(double value){
        if (value == 0){
            throw invalid_argument("Ошибка: деление на нуль!");
        }
        result /= value;
    }

};

int main()
{


    return 0;
}
