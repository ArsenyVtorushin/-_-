//#include <iostream>

//������� 1

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	float space;
//	float time;
//
//	std::cout << "������� ���������� �� ��������� (� ��): ";
//	std::cin >> space;
//	std::cout << "������� �����, �� ������� ����� ������� (� �����): ";
//	std::cin >> time;
//
//	float velocity =  space / time;
//	std::cout << "\n�� ������ ����� �� ��������� " << velocity << " ��/�\n";
//
//	return 0;
//}

//������� 2

//int main()
//{
//	setlocale(LC_ALL, "ru");
//	
//	int minCost = 2;
//
//	int startH, startM, startS;
//	int endH, endM, endS;
//
//	std::cout << "������� ����� ������: \n����: ";
//	std::cin >> startH;
//	std::cout << "������:";
//	std::cin >> startM;
//	std::cout << "�������:";
//	std::cin >> startS;
//
//	std::cout << "\n������� ����� ����� �������: \n����: ";
//	std::cin >> endH;
//	std::cout << "������:";
//	std::cin >> endM;
//	std::cout << "�������:";
//	std::cin >> endS;
//
//	//������� �������:
//	if (startH > 23 || endH > 23 || startM > 60 || endM > 60 || startS > 60 || endS > 60)
//	{
//		std::cerr << "\n������";
//	}
//	
//	else
//	{
//		//����� ����� ����� � ����� �������� � ��������:
//		int timeStart = startH * 3600 + startM * 60 + startS;
//		int timeStop = endH * 3600 + endM * 60 + endS;
//
//		//�� ����� � ��������:
//		int timeAll = timeStop - timeStart;
//		//�������� ����:
//		float price = (timeAll / 60) * minCost;
//
//		std::cout << "\n\n��������� ����� �������: " << price << " ������";
//	}
//
//
//	return 0;
//}

//������� 3

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	float distance;
//	float consum;
//	float price1, price2, price3;
//
//	std::cout << "���������� (� ��): ";
//	std::cin >> distance;
//	std::cout << "������ ������� �� 100 ��: ";
//	std::cin >> consum;
//	std::cout << "��������� 1-�� ���� �������: ";
//	std::cin >> price1;
//	std::cout << "��������� 2-�� ���� �������: ";
//	std::cin >> price2;
//	std::cout << "��������� 3-�� ���� �������: ";
//	std::cin >> price3;
//
//	float needGas = distance / 100 * consum;
//	float total1 = price1 * needGas;
//	float total2 = price2 * needGas;
//	float total3 = price3 * needGas;
//
//	std::cout << "\n || ��������� �������:\n" << 
//		" ||\t�� 1-�� �������: " << total1 <<
//		"\n ||\t�� 2-�� �������: " << total2 <<
//		"\n ||\t�� 3-�� �������: " << total3 << "\n";
//
//
//	return 0;
//}

