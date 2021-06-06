// hr-min-sec.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

    printf("**********************************************************************\n");
    printf("********************welcome to my first program!**********************\n"); 
    printf("Convert a large number of seconds into hours, mintues, and seconds.\n");
    printf("**********************************************************************\n");

    //declare vars

    int time = 0;
    int hr = 0;
    int min = 0;
    int sec = 0;

    // user input
    cout << "Pls enter a large  in seconds: ";
    cin >> time;
    //calculation
    hr = time / 3600;
    time = time % 3600;
    min = time / 60;
    time = time % 60;
    sec = time;

    // output the results

    cout << "\nThe number of hours in the number is: " << hr;

    cout << "\nThe number of minutes in the number is: " << min;
    cout << "\nThe number of seconds in the number is: " << sec;
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
