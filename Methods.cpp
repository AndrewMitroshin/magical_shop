	// описание методов
	#ifndef METHODS_H_
	#define METHODS_H_
	void magical_shop::effect(int number_potion) // метод выбора зелья
		{
			if (number_potion == 0)
				{
					char choise;
					do
						{
							cout << "\t\tPlease, choise number potion what do you want \n1-SPH\n2-SPM\n3-MPH\n4-MPM\n5-GPH\n6-GPM\n";
							cin >> number_potion;
							if (number_potion == 1)
								{
									cout << "Effect: +25 HP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}
							if (number_potion == 2)
								{
									cout << "Effect: +25 MP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}
							if (number_potion == 3)
								{
									cout << "Effect: +50 HP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}
							if (number_potion == 4)
								{
									cout << "Effect: +50 MP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}
							if (number_potion == 5)
								{
									cout << "Effect: +100 HP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}
							if (number_potion == 6)
								{
									cout << "Effect: +100 MP\nYou are want know about other potion? Enter y(yer) or n(no)";
									cin >> choise;
								}			
						}while (choise == 'y');
				}
		}
	void magical_shop::stock(double discount) // метод скидок
		{
			cout << "How many time do you come to us?\n";
			int number_visit;
			cin >> number_visit;
			if (number_visit>10 && number_visit<25 )
				{
					cout << "You discount = " << discount << "%\n";
				}	
			if  (number_visit > 25)
				{
					cout << "You discount = " << discount*2 << "%\n";
				}	
			else
				{
					cout << "You are not have discount\n";
				}		
		}
	#endif
