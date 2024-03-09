//#include <iostream>

//Задание 1

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	float space;
//	float time;
//
//	std::cout << "Введите расстояние до аэропорта (в км): ";
//	std::cin >> space;
//	std::cout << "Введите время, за которое нужно доехать (в часах): ";
//	std::cin >> time;
//
//	float velocity =  space / time;
//	std::cout << "\nВы должны ехать со скоростью " << velocity << " км/ч\n";
//
//	return 0;
//}

//Задание 2

//int main()
//{
//	setlocale(LC_ALL, "ru");
//	
//	int minCost = 2;
//
//	int startH, startM, startS;
//	int endH, endM, endS;
//
//	std::cout << "Введите время сейчас: \nЧасы: ";
//	std::cin >> startH;
//	std::cout << "Минуты:";
//	std::cin >> startM;
//	std::cout << "Секунды:";
//	std::cin >> startS;
//
//	std::cout << "\nВведите время конца поездки: \nЧасы: ";
//	std::cin >> endH;
//	std::cout << "Минуты:";
//	std::cin >> endM;
//	std::cout << "Секунды:";
//	std::cin >> endS;
//
//	//Прверка времени:
//	if (startH > 23 || endH > 23 || startM > 60 || endM > 60 || startS > 60 || endS > 60)
//	{
//		std::cerr << "\nОшибка";
//	}
//	
//	else
//	{
//		//Время когда начал и когда закончил в секундах:
//		int timeStart = startH * 3600 + startM * 60 + startS;
//		int timeStop = endH * 3600 + endM * 60 + endS;
//
//		//Всё время в секундах:
//		int timeAll = timeStop - timeStart;
//		//Итоговая цена:
//		float price = (timeAll / 60) * minCost;
//
//		std::cout << "\n\nСтоимость вашей поездки: " << price << " гривен";
//	}
//
//
//	return 0;
//}

//Задание 3

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	float distance;
//	float consum;
//	float price1, price2, price3;
//
//	std::cout << "Расстояние (в км): ";
//	std::cin >> distance;
//	std::cout << "Расход бензина на 100 км: ";
//	std::cin >> consum;
//	std::cout << "Стоимость 1-го вида бензина: ";
//	std::cin >> price1;
//	std::cout << "Стоимость 2-го вида бензина: ";
//	std::cin >> price2;
//	std::cout << "Стоимость 3-го вида бензина: ";
//	std::cin >> price3;
//
//	float needGas = distance / 100 * consum;
//	float total1 = price1 * needGas;
//	float total2 = price2 * needGas;
//	float total3 = price3 * needGas;
//
//	std::cout << "\n || Стоимость поездки:\n" << 
//		" ||\tНа 1-ом бензине: " << total1 <<
//		"\n ||\tНа 2-ом бензине: " << total2 <<
//		"\n ||\tНа 3-ом бензине: " << total3 << "\n";
//
//
//	return 0;
//}

