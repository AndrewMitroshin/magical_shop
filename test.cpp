	#include <iostream>
	#include <string>
	using namespace std;
	#include "Class.cpp"
	#include "Methods.cpp"
	#include "Constructors.cpp"
	int main()
		{
			cout << magical_shop::customer_name[0]; // ������������� ������������ ����������
			magical_shop bazar (1000); // ������������� ������������ ���������� ����� ����������, � ��������������� this
			bazar.effect(0); // ������������� ������ ������ �����
			cout << endl;
			magical_shop (3.4, "seconds"); // ������������� ������������ ������� ���������� ������������� �����
			cout << endl;
			magical_shop (100, 50, 250, 150, 500, 250); // ������������� ������������ - ���� �����
			bazar.stock(2.8); // ������������� ������ ������
			magical_shop market;
			no_money (market); // ������������� ������������� �������
			return 0;		
		}
