#include <iostream>

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


};

using namespace std;



int main()
{


    return 0;
}
