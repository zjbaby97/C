// Cheese-Container.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


using namespace std;

const double OneContainerHold = 2.76;// declare the volumn of one container
const double OneContainerPrice = 4.12;//declare the unit price of one container of cheese
const double OneContainerProfit = 1.45;//declare the unit profit of one container of cheese

int main(){
	cout << setfill('*') << setw(70)<< "*" << endl;
	cout << setfill('*') << setw(20) << "*";
	cout << "Welcome to My Cheesy Program!"; 
	cout << setfill('*') << setw(20) << "*" << endl;
	cout << setfill('*') << setw(70) << "*" << endl;
	cout << endl;

	//declare variables
	double TotalCheese;
	int NumberContainers;
	double FinalCost;
	double FinalProfit;
	//Ask user for the input
	cout << "Please enter the total number" <<
		" of kilograms of cheese produced : "; 
	cin >> TotalCheese;
	//calculate
	NumberContainers = TotalCheese / OneContainerHold + 1;
	FinalCost = NumberContainers * OneContainerPrice;
	FinalProfit = NumberContainers * OneContainerProfit;

	//Output the results
	cout << setfill(' ') << setw(50) << left << "The number of containers to hold the cheese is : "
		<< setw(20)<<right<< NumberContainers << endl;
	cout << "The cost of producing "
		<< NumberContainers << "container(s) of cheese is: $ " 
		<< setw(19) << right<< FinalCost << endl;
	cout << "The profit from producing"
		<< NumberContainers << "container(s) of cheese is: $ " 
		<< setw(15) << right<< FinalProfit << endl;
	//end program
	return 0;


	


}
