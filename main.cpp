#include <iostream>
#include <cmath>

using namespace std;

// �����������

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

int main()
{


    return 0;
}
