// перегрузка стандартных операторов
#include <iostream>
using namespace std;
class number{
private:
	int first;
public:
	number(int first)
		{
			this -> first = first;
		}
	number()
		{
			first = 0;
		}
	void Show()
		{
			cout << first;
		}
	number operator>>(const number &n) const
		{
			number result;
			result.first =  first >> n.first;
			return result;
		}
	number operator/(const number &n) const
		{
			number result;
			result.first = first / n.first;
			return result;
		}
	number operator--()
		{
			number result;
			result.first = --first;
			return result;
		}
};
int main()
{
number one(6);
cout << "You first number: ";
one.Show();	 
number two(2);
cout << "\nYou second number: ";
two.Show();
cout << endl;

number test_A;
test_A = one.operator>>(two);
one.Show();
cout << " >> ";
two.Show();
cout << " = ";
test_A.Show();
cout << endl;

number test_B;
test_B = one.operator/(two);
one.Show();
cout << " / ";
two.Show();
cout << " = ";
test_B.Show();
cout << endl;

number test_C;
two.Show();
test_C = --two;
cout << "-- = ";
test_C.Show();

return 0;
}
