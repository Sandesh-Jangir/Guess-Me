#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
    cout << "--- Guess Me : The Number Challenge ----" << endl;
    
    // Instructions 
    cout << "Instructions: \nA random number between 1 and 100 will be generated.\nYou have to guess the number. Every time you guess the wrong number it will indicated you weather the generated number is higher or lower.\nOn the baises of no. of guesses took your score will be decided." << endl ;

    int guess;
    bool guessed = false;

    // Generating the number 
    srand(time(0));
    int number = 1 + (rand() % 100);
    cout << number;
    // Mainloop
    while (guessed == false)
    {
        cout << "Guess: ";
        cin >> guess;
    }
    
    getch();
    return 0;
}