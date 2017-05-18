	// �������� ������ - ����� � �������
	#ifndef CLASS_H_
	#define CLASS_H_
	class magical_shop{
			private:
				int money;
				static const int POTION_SIZE = 3; // ���������� ������������ ���������� - ������������ ��������
				int number_of_sellers;
			public:
				magical_shop (int money); // ���������� ������������ - ���������� ����� ����������
				magical_shop (double cooldown, string period); // ���������� ������������ - ������� ���������� ������������� �����
				magical_shop (int sph, int spm, int mph, int mpm, int gph, int gpm); // ���������� ������������ - ���� �����
				magical_shop() // ���������� ������������ ��-���������
					{
						money = 0;
					}
				~magical_shop() // ���������� �����������
					{
						cout << "\nDestructor was used here\n";
					}
				static const string customer_name[]; // ���������� ������������ ���������� - ���� �����������
				void effect(int number_potion); // ���������� ������ ������ �����
				void stock(double discount); // ���������� ������ ������
				friend void no_money (const magical_shop &name); // ���������� ������������ �������
				
				
				virtual void shop_sellers() // ����������� �����
					{
						cout << "In the magical shop now works " << number_of_sellers << " sellers\n";
					}
				class color_shop{ //��������� �����
					public:
						color_shop(string color)
							{
								cout << "Color you shop - is " << color << endl;
							}
					};
		};
	class flying_shop : public magical_shop{ // ��������� ������ magical_shop
		 private:
		 	bool open_close;
			static const int number_of_sellers = 4;
		 public:
		 	flying_shop (int sph, int spm, int mph, int mpm, int gph, int gpm) : magical_shop(sph, spm, mph, mpm, gph, gpm)// ����������� ������ magical_shop
		 		{
		 			open_close = 1;
		 		}
		 	void shop_sellers() //���������������� ����������� �����
		 		{
		 			cout << "In the flying shop now works " << number_of_sellers << " sellers\n";
		 		}
};


	void no_money (const magical_shop &name) //������������� ������������� �������
		{
			cout << "\nYou have " << name.money << " silver left\n";
		}
	const string magical_shop::customer_name[POTION_SIZE] = {"Andrew", "Anthony", "Sergey"}; 
	//������������� ������������ ���������� - ���� �����������
	#endif
