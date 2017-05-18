#include <iostream>
using namespace std;
class abstract{ //абстрактный класс
	protected:
		double first;
	public:
		void retail(double first)
			{
				this -> first = first;
			}
		virtual double profit() = 0; // определение чисто виртуальной функции
};
class product : public abstract{
	public:
		double profit () // переопределение виртуальной функции
			{
				return (first/100);
			}
};
int main()
{
	product potion;
	potion.retail(64);
	product *p = &potion;
	cout << p->profit();
	return 0;
}
