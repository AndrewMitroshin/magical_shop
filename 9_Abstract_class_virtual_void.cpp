#include <iostream>
using namespace std;
class abstract{ //����������� �����
	protected:
		double first;
	public:
		void retail(double first)
			{
				this -> first = first;
			}
		virtual double profit() = 0; // ����������� ����� ����������� �������
};
class product : public abstract{
	public:
		double profit () // ��������������� ����������� �������
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
