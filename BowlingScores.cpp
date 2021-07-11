// BowlingScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
 

//Create Array of struct
struct Bowler {
    string name;
    int score[5];
    double avgScore;
}
;

//GetBowlingData method read and store data into two arrays
bool GetBowlingData(Bowler bowler[], int numPeople, int numScore) {
    ifstream infile("BowlingScores.txt");
    // Test for if file read success
    if (!infile.fail()) {
        //print message if success
        cout << "File read success!..."<< endl;
        //set array count index to 0
        int i = 0;
        //while loop loop though the file until the end of the line
        while (!infile.eof()) {
            //transfer data into the array created
            infile >> bowler[i].name >> bowler[i].score[numScore - 5] 
                >> bowler[i].score[numScore - 4] >> bowler[i].score[numScore - 3]
                >> bowler[i].score[numScore - 2] >> bowler[i].score[numScore - 1];
            //index++
            i ++;
        }
        //return true after all data insert into array and file read successfully
        return true;
    }
    //print message for fail to open the file
    cout << "File read fail!..."<< endl;
    //return false if read file failed
    return false;
}

//GetAverageScore calculate the average bowling score
double GetAverageScore(Bowler bowler[], int numScore, int numPeople) {
    //outside loop loop though every player
    for (int i = 0; i < numPeople; i++) {
        double totalScore = 0;
        //inside loop loop though every score of each player
        for (int j = 0; j < numScore; j++) {
            //get total score by adding all the score each player have
            totalScore += bowler[i].score[j];
        }
        //get average score by divied by number of score every player have
        bowler[i].avgScore = totalScore / 4.0;
    }
    //return the average score
    return bowler[numPeople].avgScore;
}

//PrettyPrintResults output the results
void PrettyPrintResults(Bowler bowler[], int numPeople, int numScore) {
    //title bar of the score board
    cout << left << setw(23) << "Name" << "Score1\tScore2\tScore3\tScore4\tScore5\tAverage Score" << endl;
    //outside loop print the name of each player
    for (int i = 0; i < numPeople; i++) {
        cout <<left<< setw(15)<< bowler[i].name << "\t";
        //inside loop print score of each player
        for (int j = 0; j < numScore; j++) {
            cout << "\t" << bowler[i].score[j];
        }
        //print average score for each player
        cout << "\t"<< bowler[i].avgScore;
        cout << endl;
    }
    
}

// main function of the program
int main()
{
    ////define three array needed for the program
    //char name[10][50];
    //int score[10][10];
    //double avgScore[10];
    Bowler bowler[10];
    //declare variables
    int numPeople = 10;
    int numScore = 5;
    //test if file read countinue the program, get data from file
    if(GetBowlingData(bowler, numPeople, numScore)){
        //get average score
        GetAverageScore(bowler, numScore, numPeople);
        //print results
        PrettyPrintResults(bowler, numPeople, numScore);
    }
    //if file reader return false end program
    else {
        return 0;
    }
    
    return 0;

}
