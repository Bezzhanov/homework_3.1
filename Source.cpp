#include <iostream>

class Calc {
public:
	//-����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������, 
	// ���� �������� ��������� �� ����� 0. 
	//���������� true, ���� ��������� ��������� �������, � �������� ������ false
	bool set_num1(double num1) {
		double num = num1;
		if (num == 0) {
	//		std::cout << "�������� ����!" << std::endl;
			return false;
		}
		else {
			this->num1 = num;
			return true;
		}
	};
	//-����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������, 
	//���� �������� ��������� �� ����� 0. 
	//���������� true, ���� ��������� ��������� �������, � �������� ������ false
	bool set_num2(double num2) {
		double num = num2;
		if (num == 0) {
	//		std::cout << "�������� ����!" << std::endl;
			return false;
		}
		else {
			this->num2 = num;
			return true;
		}
	};
	double add() { 	return this->num1 + this->num2; }; //- ����� ������ ���������� ��������� �������� num1 � num2
	double multiply() { return this->num1 * this->num2; }; //-����� ������ ���������� ��������� ������������ num1 � num2
	double subtract_1_2() { return this->num2 - this->num1; }; //-����� ������ ���������� ��������� ��������� num2 �� num1
	double subtract_2_1() { return this->num1 - this->num2; }; //-����� ������ ���������� ��������� ��������� num1 �� num2
	double divide_1_2() { return this->num1 / this->num2; }; //-����� ������ ���������� ��������� ������� num1 �� num2
	double divide_2_1() { return this->num2 / this->num1; }; //-����� ������ ���������� ��������� ������� num2 �� num1

protected:
	double num1, num2;
};



int main() {
	setlocale(LC_ALL, "ru_RU");
	Calc Calculator;
	double num1{}, num2{};

	while (true) { 
		bool end = false;
		/*
		while (!Calculator.set_num1(num1) || !end) {
			std::cout << "������� num1: ";
			std::cin >> num1;
			if (!Calculator.set_num1(num1)) {
				std::cout << "�������� ����!" << std::endl;
			}
			else {
				break;
			}
		}
		while (!Calculator.set_num2(num2) || !end) {
			std::cout << "������� num2: ";
			std::cin >> num2;
			if (!Calculator.set_num2(num2)) {
				std::cout << "�������� ����!" << std::endl;
			}
			else {
				break;
			}
		}
		*/
		do {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			end = Calculator.set_num1(num1);
			if (!end) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (!end);
		do {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			end = Calculator.set_num2(num2);
			if (!end) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (!end);

		if(Calculator.set_num1(num1) && Calculator.set_num2(num2)) {
				std::cout << "num1 + num2 = " << Calculator.add() << std::endl;
				std::cout << "num1 * num2 = " << Calculator.multiply() << std::endl;
				std::cout << "num1 - num2 = " << Calculator.subtract_1_2() << std::endl;
				std::cout << "num2 - num1 = " << Calculator.subtract_2_1() << std::endl;
				std::cout << "num1 / num2 = " << Calculator.divide_1_2() << std::endl;
				std::cout << "num2 / num1 = " << Calculator.divide_2_1() << std::endl;
				end = true;
		}
	}
	return 0;
}
