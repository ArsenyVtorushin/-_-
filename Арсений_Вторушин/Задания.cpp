#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	std::cout << "������� ����� a: ";
	std::cin >> a;
	int sum = a;

	while (a < 500)
	{
		sum = sum + (a + 1);
		a++;
	}

	std::cout << "����� ����� �� a �� 500: " << sum;



	std::cout << "\n\n=================================================\n\n";


	int x, y;

	std::cout << "������� �������� x: ";
	std::cin >> x;
	std::cout << "������� �������� y: ";
	std::cin >> y;
	int mul = x;

	while (y > 1)
	{
		mul = mul * x;
		y--;
	}

	std::cout << "��������� �^y: " << mul;



	std::cout << "\n\n====================================================\n\n";


	float number = 1;
	float summa = number;

	while (number <= 1000)
	{
		summa += (number + 1);
		number++;
	}
	std::cout << "������� �������������� ���� ����� ����� �� 1 �� 1000: " << summa / 1000;



	std::cout << "\n\n=========================================================\n\n";




	int a1;
	std::cout << "������� �����: ";
	std::cin >> a1;

	int cymma = a1;
	int b1 = a1;

	while (a1 >= 1 && a1 <= 19)
	{
		cymma += (a1 + 1);
		a1++;
	}

	std::cout << "����� ����� �� " << b1 << " �� 20: " << cymma;



	std::cout << "\n\n==========================================\n\n";




	int k;
	std::cout << "������� �����: ";
	std::cin >> k;

	int num = 2;
	
	std::cout << "������� ��������� ��� " << k << ": \n";

	while (num >= 2 && num <= 9)
	{
		std::cout << k << " * " << num << " = " << k * num << "\n";
		num++;
	}

	
	
	return 0;
}