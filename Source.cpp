#include <iostream>

class Calc {
public:
	//-метод должен установить значение пол€ num1 равное значению аргумента num1 в случае, 
	// если значение аргумента не равно 0. 
	//¬озвращает true, если установка произошла успешно, в обратном случае false
	bool set_num1(double num1) {
		double num = num1;
		if (num == 0) {
			std::cout << "Ќеверный ввод!" << std::endl;
			return false;
		}
		else {
			this->num1 = num;
			return true;
		}
	};
	//-метод должен установить значение пол€ num2 равное значению аргумента num2 в случае, 
	//если значение аргумента не равно 0. 
	//¬озвращает true, если установка произошла успешно, в обратном случае false
	bool set_num2(double num2) {
		double num = num2;
		if (num == 0) {
			std::cout << "Ќеверный ввод!" << std::endl;
			return false;
		}
		else {
			this->num2 = num;
			return true;
		}
	};
	double add() { 	return this->num1 + this->num2; }; //- метод должен возвращать результат сложени€ num1 и num2
	double multiply() { return this->num1 * this->num2; }; //-метод должен возвращать результат перемножени€ num1 и num2
	double subtract_1_2() { return this->num2 - this->num1; }; //-метод должен возвращать результат вычитани€ num2 из num1
	double subtract_2_1() { return this->num1 - this->num2; }; //-метод должен возвращать результат вычитани€ num1 из num2
	double divide_1_2() { return this->num1 / this->num2; }; //-метод должен возвращать результат делени€ num1 на num2
	double divide_2_1() { return this->num2 / this->num1; }; //-метод должен возвращать результат делени€ num2 на num1

protected:
	double num1, num2;
};



int main() {
	setlocale(LC_ALL, "ru_RU");
	Calc Calculator;
	double num1, num2;
	while (true) { 
		std::cout << "Введите num1: ";
		std::cin >> num1;
		std::cout << "Введите num2: ";
		std::cin >> num2;
		if(Calculator.set_num1(num1) && Calculator.set_num2(num2)) {
				std::cout << "num1 + num2 = " << Calculator.add() << std::endl;
				std::cout << "num1 * num2 = " << Calculator.multiply() << std::endl;
				std::cout << "num1 - num2 = " << Calculator.subtract_1_2() << std::endl;
				std::cout << "num2 - num1 = " << Calculator.subtract_2_1() << std::endl;
				std::cout << "num1 / num2 = " << Calculator.divide_1_2() << std::endl;
				std::cout << "num2 / num1 = " << Calculator.divide_2_1() << std::endl;
		}
	}
	return 0;
}
