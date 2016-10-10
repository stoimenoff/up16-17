#include<iostream>

int main()
{

	double tipPercentage = 12.0;
	double discountPercentage = 25.0;
	double bill = 124.5;

	double tip = bill * tipPercentage / 100;
	double discount = bill * discountPercentage / 100;

	double totalBill = bill + tip - discount;

	std::cout << "Tip: " << tip << "\n";
	std::cout << "Discount: " << discount << "\n";
	std::cout << "Total bill: " << totalBill << "\n";

}