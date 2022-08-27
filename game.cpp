#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
    cout << "---- Guess Me : The Number Challenge ----" << endl;
    
    // Instructions 
    cout << "Instructions:\n\nA random number between 1 and 100 will be generated.\nYou have to guess the number. \nEvery time you guess the wrong number it will indicated you weather the generated number is higher or lower.\nOn the baises of no. of guesses took your score will be decided.\n" << endl ;

    int guess;
    bool guessed = false;

    // Generating the number 
    srand(time(0));
    int number = 1 + (rand() % 100);
    cout << "Number Generated..." << endl;

    // cout << number; <- for debugging purposes only

    // Mainloop
    int score_n = 0;
    while (guessed == false)
    {
        score_n++;
        cout << "Guess: ";
        cin >> guess;
        if (number == guess){
            cout << "\nCongratulations !! Number Guessed Successfully..." << endl;
            cout <<"Score : "<< 100-score_n;
            guessed = true;
        }else if (number < guess){
            cout << "Lower!"<<endl;
        }else{
            cout << "Higher!"<<endl;
        }
    }
    
    getch();
    return 0;
}