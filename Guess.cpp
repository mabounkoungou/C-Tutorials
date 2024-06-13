#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int LowerNumber = 1;
    const int HighestNumber = 100;
    const int Try = 10;
    int attempts = 0;
    int guess;

    int numbers[HighestNumber];
    for (int i = 0; i < HighestNumber; ++i)
    {
        numbers[i] = i + 1;
    }

    srand(time(0));
    int HiddenNumber = numbers[rand() % HighestNumber];

    cout << "Welcome to Guess the Hidden Number!" << endl;
    cout << "Try to guess the number between " << LowerNumber << " and " << HighestNumber << "." << endl;

    while (attempts < Try)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < HiddenNumber)
        {
            cout << "Too low!" << endl;
        }
        else if (guess > HiddenNumber)
        {
            cout << "Too high!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number " << HiddenNumber << " in " << attempts << " attempts." << endl;
            return 0;
        }
    }

    cout << "Sorry, you've used all " << Try << " attempts. The hidden number was " << HiddenNumber << "." << endl;
    return 0;
}
