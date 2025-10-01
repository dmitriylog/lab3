#include <iostream>
#include <cmath>

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

    // 5. квадратный корень
    void root_sqrt(){
        if (result < 0){
            throw invalid_argument ("Ошибка: корень из отрицательного числа");
        }
        result = sqrt(result);
    }

    // 6. возведение в степень
    void power(double exponent){
        result = pow(result,exponent);
    }

    // методы - отображение

    // 1. сброс значения
    void reset(){
        result = 0.0;
    }

    // 2. установка значения
    void set_value(double value){
        result = value;
    }

    // 3. получение значения
    double get_result(){
        return result;
    }

    // 4. вывод результата
    void display(){
        cout << "Результат: " << result << endl;
    }
};

int main()
{


    return 0;
}
