	// �������� �������������
	#ifndef CONSTRUCTORS_H_
	#define CONSTRUCTORS_H_
	magical_shop::magical_shop(int money) // ����������� ���������� ����� ���������� � �������������� this
		{
			this -> money = money;
			cout << ", you have " << money << " silver\n";
		} 
	magical_shop::magical_shop(double cooldown, string period) // ����������� ������� ���������� ������������� �����
		{
			cout << "Coldown " << cooldown << ' ' << period << endl;
		}
	magical_shop::magical_shop(int sph, int spm, int mph, int mpm, int gph, int gpm) // ����������� ���� �����
		{
			cout << "\t\t\t\tPotion HP\t\tPotion MP\nSmall potion value|\t\t" << sph 
			<< " silver\t\t" << spm << " silver\nMain potion value |\t\t" << mph << " silver\t\t" << mpm 
			<< " silver\nGreat potion value|\t\t" << gph << " silver\t\t" << gpm << " silver\n";
		}
	#endif
