
//The NumbersOfVowels.cpp is designed in order to count how many vowels and all vowels in totall on a file.
//In here we use Constitution_of_the_United_States.html as example as required ( make sure put same folder make it work)
//All the explaination are next to the code



#include <iostream> // In order to include iostream standard header file

#include <string> // Most string head file is already included inside of iostream, in this file add this just to be more strict

#include <fstream> // In order to include file stream, STL header file

int main(int argc, char* argv[])
// main function with argument counter, argc is the number that program runs, use int ahead
//argument vector,Argv is an array of strings for the run arguments (each char* represents the program pathname and arguments)

{

	// The executable name and at least one argument?

	if (argc < 2)// if argument counter less than two

	{

		std::cout << "Error with input agrs.." << std::endl;
		//then output erroe with the input argument 

		return 1;
		//return any non 0 value means system returned to the console, abnormal exist
		//It is not within the control of the program. It is recognized by the operating system and has no effect on  program

	}
	// For debugging purposes only

	for (int i = 0; i < argc; i++)//give int variable i euqals to 0, i less than argument counter, i++ means every loop i plus one.

	{

		std::cout << i << ":" << argv[i] << std::endl;
		// output the result 

	}

	std::ifstream inFile; //use ifstream infile in order open files

	inFile.open(argv[1]); // in file open argument vector 1

	if (!inFile)// reports error

	{

		std::cout << "Error with Constitution_of_the_United_States.html.." << std::endl;
		//output error here
		return 1;
		//same as first return 1

	}

	std::cout << "******************************************************************" << std::endl;

	std::cout << "*************** Welcome to my Letter Count Program ***************" << std::endl;

	std::cout << "******************************************************************" << std::endl;

	std::cout << std::endl;

	std::cout << "Analyzing file  '" << argv[1] << "'" << std::endl << std::endl;
	//output analyzing file with argument file one in here which is  Constitution_of_the_United_States.html

	///////////////////////

	// Work here with open file.....

	///////////////////////

	int A = 0, E = 0, I = 0, O = 0, U = 0 , R=0,S=0,T=0;
	//give all vowels variable value zero, U variables one.

	std::string str;

	while (!inFile.eof()) {
		//while function with infile.eof
		//The eof() method of ios class in C++ is used to check if the stream is has raised any EOF (End Of File) error. 
		//It means that this function will check if this stream has its eofbit set.

		inFile >> str;

		for (int i = 0; i < str.size(); i++) {
			//size() function is used to return the size of the set container or the number of elements in the set container. 
			//Return Value: It returns the number of elements in the set container. 1. It has a no exception throw guarantee

			if (str[i] == 'A' || str[i] == 'a')// once we met A or a , count add 1

				A++;//++meas when we met the A or a, the system counter plus one

			else if (str[i] == 'E' || str[i] == 'e')//the rest same as A

				E++;

			else if (str[i] == 'I' || str[i] == 'i') // if statement here
				//the rest same as A
				I++;

			else if (str[i] == 'O' || str[i] == 'o')
				//the rest same as A
				O++;

			else if (str[i] == 'U' || str[i] == 'u')
				//the rest same as A
				U++;
			else if (str[i] == 'R' || str[i] == 'r')
				//the rest same as A
				R++;
			else if (str[i] == 'S' || str[i] == 's')
				//the rest same as A
				S++;
			else if (str[i] == 'T' || str[i] == 't')
				//the rest same as A
				T++;
		}

	}

	inFile.close();//close file

	//basic output the result for all vowels
	std::cout << "The number of A's:........................................" << A << std::endl;

	std::cout << "The number of E's:........................................" << E << std::endl;

	std::cout << "The number of I's:........................................" << I << std::endl;

	std::cout << "The number of O's:........................................" << O << std::endl;

	std::cout << "The number of U's:........................................" << U << std::endl;
	std::cout << "The number of R's:........................................" << R << std::endl;
	std::cout << "The number of S's:........................................" << S << std::endl;
	std::cout << "The number of T's:........................................" << T << std::endl;

	std::cout << "The vowel count is:......................................." << (A + E + I + O + U) << std::endl;

	
	system("pause");// pause the system, will show press any key to continue as output

	

	return 0;

}