	// —оздание класса - лавка с зель€ми
	#ifndef CLASS_H_
	#define CLASS_H_
	class magical_shop
		{
			private:
				int money;
				static const int POTION_SIZE = 3; // объ€вление статического компонента - константного значени€
			public:
				magical_shop (int money); // объ€вление конструктора - количества денег покупател€
				magical_shop (double cooldown, string period); // объ€вление конструктора - времени повторного использовани€ зель€
				magical_shop (int sph, int spm, int mph, int mpm, int gph, int gpm); // объ€вление конструктора - цены зелий
				magical_shop() // объ€вление конструктора по-умолчанию
					{
						money = 0;
					}
				~magical_shop() // объ€вление деструктора
					{
						cout << "\nDestructor was used here\n";
					}
				static const string customer_name[]; // объ€вление статического компонента - имен покупателей
				void effect(int number_potion); // объ€вление метода выбора зель€
				void stock(double discount); // объ€вление метода скидок
				friend void no_money (const magical_shop &name); // объ€вление дужественной функции
		};
	void no_money (const magical_shop &name) //инициализаци€ дружественной функции
		{
			cout << "\nYou have " << name.money << " silver left\n";
		}
	const string magical_shop::customer_name[POTION_SIZE] = {"Andrew", "Anthony", "Sergey"}; 
	//инициализаци€ статического компонента - имен покупателей
	#endif
