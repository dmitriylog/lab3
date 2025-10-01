#include <iostream>
#include <cmath>

using namespace std;

// калькулятор -- 5 лаба

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

// пользовательский интерфейс
class Calculator_UI{
private:
    Calculator calc;
    bool external_mode;
public:
    Calculator_UI() : external_mode(false){}
    void display_menu(){
        cout <<"\n--- КАЛЬКУЛЯТОР ---" << endl;
        if (external_mode){
            cout << "==Расширенный режим ==" << endl;
        }
        cout << "1. Сложение (+)" << endl;
        cout << "2. Вычитание (-)" << endl;
        cout << "3. Умножение (*)" << endl;
        cout << "4. Деление (/)" << endl;
        cout << "5. Возведение в степень (^)" << endl;
        cout << "6. Квадратный корень (^0.5)" << endl;

        if (external_mode){
            cout << "7. Синус (sin)" << endl;
            cout << "8. Косинус (cos)" << endl;
            cout << "9. Тангенс (tg)" << endl;
            cout << "10. Натуральный логарифм (ln)" << endl;
            cout << "11. Работа с памятью (memory)" << endl;
            cout << "12. Переключить режим (на стандартный)" << endl;
        }
        else{
            cout << "7. Переключить режим (на расширенный)" << endl;
        }
        cout << "0. Выход" << endl;
        cout << "Текущий результат: " << calc.get_result() << endl;
    }

};

int main()
{


    return 0;
}
