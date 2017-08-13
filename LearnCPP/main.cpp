#include "main.h"


int main()
{
	//	float preTax = get_user_amount();
	float preTax = 10.0;
	std::cout << "#########################################" << std::endl;
	std::cout << "Sales sum before taxes is: " << preTax << "$" << std::endl;

	float gst = getGST(preTax);
	std::cout << "Global Sales Tax = " << gst << "$" << std::endl;

	float pst = getPST(preTax);
	//std::cout << "Provincial Sales Tax = " << pst << "$" << std::endl;

	float total = getTotal(preTax, gst, pst);
	std::cout << "Total sales sum = " << total << "$" << std::endl;
	std::cout << "#########################################" << std::endl;


	int a = 100;
	int b = 200;

	std::cout << "Before swap, value of a :" << a << std::endl;
	std::cout << "Before swap, value of b :" << b << std::endl;
	std::cout << "#########################################" << std::endl;


	// Call function by value
	swap_by_value(a, b);

	std::cout << "Call function swap by value" << std::endl;
	std::cout << "After swap_by_value, value of a :" << a << std::endl;
	std::cout << "After swap_by_value, value of b :" << b << std::endl;
	std::cout << "#########################################" << std::endl;;


	// Call function by pointer
	swap_by_pointer(&a, &b);

	std::cout << "Call function swap2 by pointer" << std::endl;
	std::cout << "After swap_by_pointer, value of a :" << a << std::endl;
	std::cout << "After swap_by_pointer, value of b :" << b << std::endl;
	std::cout << "#########################################" << std::endl;


	// Call function by reference
	swap_by_reference(a, b);

	std::cout << "Call function swap3 by reference" << std::endl;
	std::cout << "After swap_by_reference, value of a :" << a << std::endl;
	std::cout << "After swap_by_reference, value of b :" << b << std::endl;
	std::cout << "#########################################" << std::endl;

	std::cin.get();
}