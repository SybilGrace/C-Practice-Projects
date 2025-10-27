//Program to generate a random  number to guess a number between 1 and 100;
//Writen by Sybil Grace, solution to practice application from the book 'C++ Programming' by D.S. Malik
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //Declare Variables
    int solution;
    int guess_count;
    int guess;
    bool answered;

    answered = 0;
    guess_count = 0;
    srand(time(0)); //Set the random seed using the time function
    solution = rand() % 100 + 1; //Get a number between 0-99 and +1 to it and assign it to the solution variable

    while (answered == 0) {
        cout << "Guess a number between 1 and 100: " << endl;
        cin >> guess;
        cout <<  "Your most recent guess was: " << guess << endl;
        guess_count = guess_count + 1;
        if (guess < solution) {
            cout <<  "Your guess was too low. Try again:" << endl;
        }
        else if (guess > solution) {
            cout <<  "Your guess was too high. Try again:" << endl;
        }
        else {
            answered = 1;
        }
    }
    cout << "You figured out the solution: " << solution << endl;
    cout << "It took you this many guesses: " << guess_count << endl;

    return 0;
}
