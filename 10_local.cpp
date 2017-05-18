#include <iostream>
using namespace std;
const int quantity_of_goods = 40;
void shop()
	{
	cout<<"Shop is have " << ::quantity_of_goods << " goods";
	class local{ //локальный класс
			private:
				int first_sell;
			public:
				void sell()
					{
						first_sell = ::quantity_of_goods;
					}
		};	
}
int main()
{
shop();
return 0;
}
