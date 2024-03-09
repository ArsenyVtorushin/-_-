//#include <iostream>

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	int number_6;
//
//	std::cout << "Введите 6-значное число:\n";
//	std::cin >> number_6;
//
//
//	
//	if (number_6 < 100000 || number_6 > 999999)
//	{
//		std::cerr << "\nОшибка";
//	}
//
//	else
//	{
//		int num1 = number_6 % 10;
//		int num2 = number_6 / 10 % 10;
//		int num3 = number_6 / 100 % 10;
//		int num4 = number_6 / 1000 % 10;
//		int num5 = number_6 / 10000 % 10;
//		int num6 = number_6 / 100000;
//
//		if (num1 + num2 + num3 == num4 + num5 + num6)
//		{
//			std::cout << "\nЧисло счастливое!";
//		}
//
//		else
//		{
//			std::cout << "\nНичего, в следующий раз повезет.";
//		}
//
//	}
//		std::cout << "\n\n\n===========================================\n\n";
//	
//
//
//	int number_4;
//
//	std::cout << "Введите 4-значное число: \n";
//	std::cin >> number_4;
//
//	if (number_4 < 1000 || number_4 > 9999)
//	{
//		std::cerr << "\nОшибка";
//	}
//
//	else
//	{
//		int dig4 = number_4 % 10;
//		int dig3 = number_4 / 10 % 10;
//		int dig2 = number_4 / 100 % 10;
//	    int dig1 = number_4 / 1000;
//
//		std::cout << "Результат: " << dig2 << dig1 << dig4 << dig3;
//	}
//
//	std::cout << "\n\n\n===========================================\n\n";
//
//
//
//
//
//
//
//
//	int a1, a2, a3, a4, a5, a6, a7;
//
//	std::cout << "Введите 7 целых чисел:\n";
//	std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
//
//
//	if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5 && a1 > a6 && a1 > a7)
//	{
//		std::cout << "Максимальное число: " << a1;
//	}
//	else if (a2 > a1 && a2 > a3 && a2 > a4 && a2 > a5 && a2 > a6 && a2 > a7)
//	{
//		std::cout << "Максимальное число: " << a2;
//	}
//	else if (a3 > a2 && a3 > a1 && a3 > a4 && a3 > a5 && a3 > a6 && a3 > a7)
//	{
//		std::cout << "Максимальное число: " << a3;
//	}
//	else if (a4 > a2 && a4 > a3 && a4 > a1 && a4 > a5 && a4 > a6 && a4 > a7)
//	{
//		std::cout << "Максимальное число: " << a4;
//	}
//	else if (a5 > a2 && a5 > a3 && a5 > a4 && a5 > a5 && a5 > a6 && a5 > a7)
//	{
//		std::cout << "Максимальное число: " << a5;
//	}
//	else if (a6 > a2 && a6 > a3 && a6 > a4 && a6 > a5 && a6 > a1 && a6 > a7)
//	{
//		std::cout << "Максимальное число: " << a6;
//	}
//	else if (a7 > a2 && a7 > a3 && a7 > a4 && a7 > a5 && a7 > a6 && a7 > a1)
//	{
//		std::cout << "Максимальное число: " << a7;
//	}
//	else 
//	{
//		std::cerr << "Ошибка: Введите все разные числа ";
//	}
//
//	std::cout << "\n\n\n===========================================\n\n";
//
//
//
//
//
//
//
//
//
//	float tank = 300, consum;
//	float distance_AB, distance_BC, weight;
//
//	std::cout << "Введите расстояние между пунктами A и B (в км): ";
//	std::cin >> distance_AB;
//	std::cout << "Введите расстояние между пунктами B и C (в км): ";
//	std::cin >> distance_BC;
//	std::cout << "Введите вес груза (в кг): ";
//	std::cin >> weight;
//
//
//
//	if (weight < 500)
//	{
//		if (distance_AB > 300 || distance_BC > 300)
//		{
//			std::cerr << "\n\nПолёт по введённому маршруту невозможен\n\n";
//		}
//
//		else
//		{
//			consum = 1;
//			float spent_AB = distance_AB * consum;
//			float need_BC = distance_BC * consum;
//			float nowInTank = tank - spent_AB;
//			float minRefueling = need_BC - nowInTank;
//			std::cout << "\nМинимальное количество топлива для дозаправки: " << minRefueling << "\n\n";
//
//		}
//	}
//
//
//	else if (weight < 1000)
//	{
//		if (distance_AB > 75 || distance_BC > 75)
//		{
//			std::cerr << "\n\nПолёт по введённому маршруту невозможен\n\n";
//		}
//
//		else
//		{
//			consum = 4;
//			float spent_AB = distance_AB * consum;
//			float need_BC = distance_BC * consum;
//			float nowInTank = tank - spent_AB;
//			float minRefueling = need_BC - nowInTank;
//			std::cout << "\nМинимальное количество топлива для дозаправки в пункте В: " << minRefueling << "\n\n";
//		}
//	}
//
//
//	else if (weight < 1500)
//	{
//		if (distance_AB > 42.8 || distance_BC > 42.8)
//		{
//			std::cerr << "\n\nПолёт по введённому маршруту невозможен\n\n";
//		}
//
//		else
//		{
//			consum = 7;
//			float spent_AB = distance_AB * consum;
//			float need_BC = distance_BC * consum;
//			float nowInTank = tank - spent_AB;
//			float minRefueling = need_BC - nowInTank;
//			std::cout << "\nМинимальное количество топлива для дозаправки в пункте В: " << minRefueling << "\n\n";
//
//		}
//	}
//
//
//	else if (weight < 2000)
//	{
//		if (distance_AB > 33.3 || distance_BC > 33.3)
//		{
//			std::cerr << "\n\nПолёт по введённому маршруту невозможен \n\n";
//		}
//
//		else
//		{
//			consum = 9;
//			float spent_AB = distance_AB * consum;
//			float need_BC = distance_BC * consum;
//			float nowInTank = tank - spent_AB;
//			float minRefueling = need_BC - nowInTank;
//			std::cout << "\nМинимальное количество топлива для дозаправки в пункте В: " << minRefueling << "\n\n";
//
//		}
//	}
//
//
//	else
//	{
//		std::cerr << "\n\nСлишком тяжёлый груз, самолёт не поднимется (максимум 2000 кг)\n\n";
//	}
//
//		
//
//	return 0;
//
//}