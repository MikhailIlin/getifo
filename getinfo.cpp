/*
 * getinfo.cpp
 *
 *  Created on: 16 июл. 2018 г.
 *      Author: user
 */
//getinfo.cpp - ввод и вывод
#include <iostream>
int main()
{
	using namespace std;
	int carrots;
	cout << "how many carrots do you have?" << endl;
	cin >> carrots; // ввод С++
	cout << "hera are two more. ";
	carrots = carrots + 2;
	//слудующая строка выполняет конкатинацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}



