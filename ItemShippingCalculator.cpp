// ItemShippingCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <fstream>
using namespace std;




 int main()  //use int main function
 {
	for (int i = 0; i < 80; i++) cout << ".";
	cout << "\n ITCS 2530 - Programming Assignment for week #3" << endl;
	for (int i = 0; i < 80; i++) cout << ".";


	string ItemName; //declare variable itemname use string
	double OrderTotal; //because ordertotal might not be interger so use double
	string Destination; // declare destination as given usa,can,aus so use string
	double Charge = 0.0; //the reason same as ordertotal
	char Fragile; //because fragile only has Y or N so use char

	cout << "\n\n\nPlease enter the item name (no spaces ) .........................: ";
	cin >> ItemName;
	cout << "\n Is the item fragile? ( y= yes / n =no ).........................:";
	cin >> Fragile;
	//use if else function, if  product fragile then charge will be added up $2
	if (Fragile == 'Y' || Fragile == 'y')//here indicates that user can either type Y or y both correct
	{
		Charge = Charge + 2; // if fragile then add ?2
	}
	else if (Fragile == 'N' || Fragile == 'n')  // same as Y or y, user input either N or n both correct.
	{
		Charge = 0.0; // if not fragile then charge wont't change
	}
	else
	{
		cout << "Invalid entry,exiting" << endl; // this means if user input not Y or y or N or n, will get this just like example output.
		return 0; // the return 0 here is for when user input wrong information, the last thing show up is "invalid entry,exiting", the rest thing wont show up.
	}

	cout << "Please Enter your order total .............................:";
	cin >> OrderTotal;
	cout << "Please enter your destination. (usa/can/aus/mars)................:";
	cin >> Destination;



	if (Destination == "USA" || Destination == "usa") // here use || so user can either type upper or lower letter
	{
		if (OrderTotal < 50.00) //if total not over 50  then charge add up 6
			Charge = Charge + 6.00;
		else if (OrderTotal > 50.01 && OrderTotal <= 100.00)  //if order between 50.01-100.00, charge add up 9
			Charge = Charge + 9.00;
		else if (OrderTotal > 100.01 && OrderTotal <= 150.00) // if order between 100.01-150,add up 12
			Charge = Charge + 12.00;
		else if (OrderTotal > 150.00) //over 150  charge free
			Charge = Charge + 0.00;   // so the charge won't change so just add 0 
	}
	if (Destination == "CAN" || Destination == "can") // same explaination as USA just price charge different
	{
		if (OrderTotal < 50.00)
			Charge = Charge + 8.00;
		else if (OrderTotal > 50.01 && OrderTotal <= 100.00)
			Charge = Charge + 12.00;
		else if (OrderTotal > 100.01 && OrderTotal <= 150.00)
			Charge = Charge + 15.00;
		else if (OrderTotal > 150.00)
			Charge = Charge + 0.00;
	}

	if (Destination == "AUS" || Destination == "aus")  
	{
		if (OrderTotal < 50.00)// same explaination as USA just price charge different
			Charge = Charge + 10.00;
		else if (OrderTotal > 50.01 && OrderTotal <= 100.00)
			Charge = Charge + 14.00;
		else if (OrderTotal > 100.01 && OrderTotal <= 150.00)
			Charge = Charge + 17.00;
		else if (OrderTotal > 150.00)
			Charge = Charge + 0.00;
	}

	if (Destination == "MARS" || Destination == "mars")
	{
		if (OrderTotal < 50.00)// same explaination as USA just price charge different
			Charge = Charge + 99.00;
		else if (OrderTotal > 50.01 && OrderTotal <= 100.00)
			Charge = Charge + 999.00;
		else if (OrderTotal > 100.01 && OrderTotal <= 150.00)
			Charge = Charge + 9999.00;
		else if (OrderTotal > 150.00)
			Charge = Charge + 99999.00;
	}

 // C OUT output use endl start next line.
	cout << "\n\n Your item is ......................... " << ItemName << endl;
	cout << "Your shipping cost is ......................$" << Charge << endl;
	cout << "You are shipping to ........................" << Destination << endl;
	//because final total migth not be integer so use double and total equals to charger and ordertotal.
	double total = Charge + OrderTotal;
	cout << "Your total shipping costs are ................$" << total << endl;
	cout << "----------------------------------------------Thank you !" << endl;
	


	return 0;




}

















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
