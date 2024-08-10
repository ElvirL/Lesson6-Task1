/*
������ 1
��� ����� �������:
�������� �������, ����������� ��� ��������� �� int � ������ ������� ���������� ������ ����������.
������:
```
int a = 10;

int b = 20;

swap(&a, &b);

std::cout << a << � � << b;

// 20 10
``
[]()
**���-���� ��� �������� ������:**
� ������� ��������� ���������� ���� ������, ��� ������������� �������� -- void
� ������� �� ���������� ��������� �����<iostream>`
� ������� ������ �������� �� ����������

��� ��������� ������� �� ��������
�������� ������ �� repl.it ��� ���� .��� � ��������.
*/

#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 1;
    int b = 2;

    swap(&a,&b);

    cout << a << endl;
    cout << b << endl;
}