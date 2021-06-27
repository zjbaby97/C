
//Hello this is //the week5 programming assignment 6/26/2021
// comments and //explenation and all comments are under blow
//this is about // thank you



#include<iostream> //include inputoutput stream

using namespace std; // Various visible ranges for identifiers

void exit(void) // using void function to display void 
{
	cout << "Thank You ";  //output thankyou
}

void ShowUsage() //void function to out the price of different sizes of surfboard.
{
	cout << "The user has to select a choice for accessing different functions" << endl;// endl means starts next lines
	cout << "The price of a large surfboard is $200" << endl;
	cout << "The price of a medium surfboard is $190" << endl;
	cout << "The price of a small surfboard is $175" << endl;
	cout << "The price of a xxxs surfboard is $888" << endl;
	cout << "Please follow the instructions at each stages to get the information" << endl;
}
void Purchase(const int Small, const int Medium, const int Large ,const int xxxs) // void function purchase and use const indicate that int S,M,L
//are always constant not change
{
	if (Small == 0 && Medium == 0 && Large == 0 && xxxs ==0)//if statement if all sizes equals zero
	{
		cout << "No purchases made yet." << endl; //then there is not purchase , output that
		// return it
		return;
	}
	if (Small != 0)
	{         //if the purchase of small is not zero here means more than 0, as we all know int so >=1
		cout << "The total number of small surfboards is: " << Small << endl; 
	}//get into the total number of small surfboard and output, endl means next line
	if (Medium != 0)
	{
		cout << "The total number of medium surfboards is: " << Medium << endl;// same here like small

	}
	if (Large != 0)//explaination same here like small
	{
		cout << "The total number of large surfboards is: " << Large << endl;
	}
	if (xxxs != 0)//explaination same here like small
	{
		cout << "The total number of xxxs surfboards is: " << xxxs << endl;
	}
}
void DisplayTotal(const int Small, const int Medium, const int Large const int xxxs)
{              //void function display total make constant interger small,medium large 
	if (Small == 0 && Medium == 0 && Large == 0 && xxxs==0)
	{
		cout << "No purchases made yet." << endl;//if purchase equals to zero means no purchase then output 
		return;
	}
	int small = 0;// set variable small as interger and given 0 value
	int medium = 0;// set variable medium as interger and given 0 value
	int large = 0;
	int xxxs = 0;// set variable larg as interger and given 0 value
	if (Small != 0)
	{
		small = Small * 175; //the cost of each small surfboard is 175
		cout << "The total number of small surfboards is: " << Small << "at a total cost of $" << small << endl;
	}//output the value
	if (Medium != 0)
	{
		medium = Medium * 190; //cost of 1 medium surfboard is 190
		cout << "The total number of medium surfboards is: " << Medium << "at a total cost of $" << medium << endl;
	}
	if (Large != 0)
	{
		large = Large * 200; //cost of 1 large surfboard is 200
		cout << "The total number of large surfboards is: " << Large << "at a total cost of $" << large << endl;
	}
	if (xxxs != 0)
	{
		xxxs = xxxs * 888; //cost of 1 xxxs surfboard is 200
		cout << "The total number of xxxs surfboards is: " << xxxs << "at a total cost of $" << xxxs << endl;
	}
	int total = small + medium + large+ xxxs;// add the all up make total
	cout << "Amount due: $" << total << endl;//output the value
}
void MakePurchase(int& Small, int& Medium, int& Large ,int& xxxs)
{
	cout << "Please enter the quantity and type(S-Small, L-Large, M-Medium,xxxs)of surfboard you would like to purchase: ";
	int quan;
	char type;
	cin >> quan >> type;
	if (type == 'L' || type == 'l') Large += quan;
	else if (type == 'M' || type == 'm') Medium += quan;
	else Small += quan;
}
int main()
{
	for (int i = 0; i < 58; i++)// for the interger, for function, given initial value 0 if i small than 58, i irrated one more time
	{
		cout << "*";
	}
	cout << endl;
	cout << "*****Welcome to my johnny Utah's pointBreak Surf Shop*****" << endl;//ouput as required
	for (int i = 0; i < 58; i++)
	{
		cout << "*";
	}
	cout << endl << endl << endl << endl; //to produce the header design
	cout << "To show program usage press 'S'" << endl << "To purchase a surfboard press 'P'" << endl << "To display current purchases press 'C'" << endl << "To display total amount press 'T'" << endl << "To quit the program press 'Q'" << endl;
	int Small = 0, Medium = 0, Large = 0; //initially nobody has purchased anything
	while (1) //we run an infinite loop to take input from user unless the user gives Q or q
	{
		cout << "Please enter selection: ";
		char select;
		cin >> select;
		switch (select)
		{
		case 'S':case 's':// the case statement here indicate that no mater upper or lower s
		{
			ShowUsage();// running shouwuage function
			break;
		}
		case 'P':case 'p':
		{
			MakePurchase(Small, Medium, Large);// running make purchase function
			break;
		}
		case 'C':case 'c':
		{
			Purchase(Small, Medium, Large);// make pur chase function
			break;
		}
		case 'T':case 't':
		{
			DisplayTotal(Small, Medium, Large);// running displaytotal function
			break;
		}
		case 'Q':case 'q':
		{

			atexit(exit); //executing this function before exiting
			exit(10);
			//break;
		}
		system("pause");// system pause 
		}

		cout << endl;
	}
	
	return 0;// return the value
}