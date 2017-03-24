	// �������� ������ - ����� � �������
	#ifndef CLASS_H_
	#define CLASS_H_
	class magical_shop
		{
			private:
				int money;
				static const int POTION_SIZE = 3; // ���������� ������������ ���������� - ������������ ��������
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
		};
	void no_money (const magical_shop &name) //������������� ������������� �������
		{
			cout << "\nYou have " << name.money << " silver left\n";
		}
	const string magical_shop::customer_name[POTION_SIZE] = {"Andrew", "Anthony", "Sergey"}; 
	//������������� ������������ ���������� - ���� �����������
	#endif
