#include <iostream>
#include <cmath>

using namespace std;

// ����������� -- 5 ����

class Calculator {
private:
    double result; // ��������� ����������

public:
    Calculator():result(0.0){} // �����������
    Calculator (double starter) : result(starter) {} // ����������� � ��������� ���������

    // ������ - �������� ��������

    // 1. ��������
    void summ(double value){
        result += value;
    }

    // 2. ���������
    void diff(double value){
        result -= value;
    }

    // 3. ���������
    void multipl(double value){
        result *= value;
    }

    // 4. �������
    void division(double value){
        if (value == 0){
            throw invalid_argument("������: ������� �� ����!");
        }
        result /= value;
    }

    // 5. ���������� ������
    void root_sqrt(){
        if (result < 0){
            throw invalid_argument ("������: ������ �� �������������� �����");
        }
        result = sqrt(result);
    }

    // 6. ���������� � �������
    void power(double exponent){
        result = pow(result,exponent);
    }

    // ������ - �����������

    // 1. ����� ��������
    void reset(){
        result = 0.0;
    }

    // 2. ��������� ��������
    void set_value(double value){
        result = value;
    }

    // 3. ��������� ��������
    double get_result(){
        return result;
    }

    // 4. ����� ����������
    void display(){
        cout << "���������: " << result << endl;
    }
};

// ���������������� ���������
class Calculator_UI{
private:
    Calculator calc;
    bool external_mode;
public:
    Calculator_UI() : external_mode(false){}
    void display_menu(){
        cout <<"\n--- ����������� ---" << endl;
        if (external_mode){
            cout << "==����������� ����� ==" << endl;
        }
        cout << "1. �������� (+)" << endl;
        cout << "2. ��������� (-)" << endl;
        cout << "3. ��������� (*)" << endl;
        cout << "4. ������� (/)" << endl;
        cout << "5. ���������� � ������� (^)" << endl;
        cout << "6. ���������� ������ (^0.5)" << endl;

        if (external_mode){
            cout << "7. ����� (sin)" << endl;
            cout << "8. ������� (cos)" << endl;
            cout << "9. ������� (tg)" << endl;
            cout << "10. ����������� �������� (ln)" << endl;
            cout << "11. ������ � ������� (memory)" << endl;
            cout << "12. ����������� ����� (�� �����������)" << endl;
        }
        else{
            cout << "7. ����������� ����� (�� �����������)" << endl;
        }
        cout << "0. �����" << endl;
        cout << "������� ���������: " << calc.get_result() << endl;
    }

};

int main()
{


    return 0;
}
