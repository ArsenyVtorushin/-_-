#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	std::cout << "Введите число a: ";
	std::cin >> a;
	int sum = a;

	while (a < 500)
	{
		sum = sum + (a + 1);
		a++;
	}

	std::cout << "Сумма чисел от a до 500: " << sum;



	std::cout << "\n\n=================================================\n\n";


	int x, y;

	std::cout << "Введите значение x: ";
	std::cin >> x;
	std::cout << "Введите значение y: ";
	std::cin >> y;
	int mul = x;

	while (y > 1)
	{
		mul = mul * x;
		y--;
	}

	std::cout << "Результат х^y: " << mul;



	std::cout << "\n\n====================================================\n\n";


	float number = 1;
	float summa = number;

	while (number <= 1000)
	{
		summa += (number + 1);
		number++;
	}
	std::cout << "Среднее арифметическое всех целых чисел от 1 до 1000: " << summa / 1000;



	std::cout << "\n\n=========================================================\n\n";




	int a1;
	std::cout << "Введите число: ";
	std::cin >> a1;

	int cymma = a1;
	int b1 = a1;

	while (a1 >= 1 && a1 <= 19)
	{
		cymma += (a1 + 1);
		a1++;
	}

	std::cout << "Сумма чисел от " << b1 << " до 20: " << cymma;



	std::cout << "\n\n==========================================\n\n";




	int k;
	std::cout << "Введите число: ";
	std::cin >> k;

	int num = 2;
	
	std::cout << "Таблица умножения для " << k << ": \n";

	while (num >= 2 && num <= 9)
	{
		std::cout << k << " * " << num << " = " << k * num << "\n";
		num++;
	}

	
	
	return 0;
}