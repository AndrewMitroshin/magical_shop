	// Создание класса - лавка с зельями
	#ifndef CLASS_H_
	#define CLASS_H_
	class magical_shop{
			private:
				int money;
				static const int POTION_SIZE = 3; // объявление статического компонента - константного значения
				int number_of_sellers;
			public:
				magical_shop (int money); // объявление конструктора - количества денег покупателя
				magical_shop (double cooldown, string period); // объявление конструктора - времени повторного использования зелья
				magical_shop (int sph, int spm, int mph, int mpm, int gph, int gpm); // объявление конструктора - цены зелий
				magical_shop() // объявление конструктора по-умолчанию
					{
						money = 0;
					}
				~magical_shop() // объявление деструктора
					{
						cout << "\nDestructor was used here\n";
					}
				static const string customer_name[]; // объявление статического компонента - имен покупателей
				void effect(int number_potion); // объявление метода выбора зелья
				void stock(double discount); // объявление метода скидок
				friend void no_money (const magical_shop &name); // объявление дужественной функции
				
				
				virtual void shop_sellers() // виртуальный метод
					{
						cout << "In the magical shop now works " << number_of_sellers << " sellers\n";
					}
				class color_shop{ //вложенный класс
					public:
						color_shop(string color)
							{
								cout << "Color you shop - is " << color << endl;
							}
					};
		};
	class flying_shop : public magical_shop{ // наследник класса magical_shop
		 private:
		 	bool open_close;
			static const int number_of_sellers = 4;
		 public:
		 	flying_shop (int sph, int spm, int mph, int mpm, int gph, int gpm) : magical_shop(sph, spm, mph, mpm, gph, gpm)/magical_shop(sph, spm, mph, mpm, gph, gpm)// конструктор класса magical_shop
		 		{
		 			open_close = 1;
		 		}
		 	void shop_sellers() //переопределенный виртуальный метод
		 		{
		 			cout << "In the flying shop now works " << number_of_sellers << " sellers\n";
		 		}
};


	void no_money (const magical_shop &name) //инициализация дружественной функции
		{
			cout << "\nYou have " << name.money << " silver left\n";
		}
	const string magical_shop::customer_name[POTION_SIZE] = {"Andrew", "Anthony", "Sergey"}; 
	//инициализация статического компонента - имен покупателей
	#endif
