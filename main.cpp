#include <iostream>

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

};

int main()
{


    return 0;
}
