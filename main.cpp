#include <iostream>

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


};

using namespace std;



int main()
{


    return 0;
}
