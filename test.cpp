	#include <iostream>
	#include <string>
	using namespace std;
	#include "Class.cpp"
	#include "Methods.cpp"
	#include "Constructors.cpp"
	int main()
		{
			cout << magical_shop::customer_name[0]; // использование статического компонента
			magical_shop bazar (1000); // использование конструктора количества денег покупателя, с использователем this
			bazar.effect(0); // использование метода выбора зелья
			cout << endl;
			magical_shop (3.4, "seconds"); // использование конструктора времени повторного использования зелья
			cout << endl;
			magical_shop (100, 50, 250, 150, 500, 250); // использование конструктора - цены зелий
			bazar.stock(2.8); // использование метода скидок
			magical_shop market;
			no_money (market); // использование дружественной функции
			return 0;		
		}
