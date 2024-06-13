#include <iostream>
using namespace std;

int main()
{
    int number;
    int guess;
    int tries = 0;
    int possibleNumbers[100]; 

    for (int i = 0; i < 100; i++)
    {
        possibleNumbers[i] = i + 1;
    }

    cout << "Guess a Number Between 1 and 100" << endl;
    cin >> guess;
    number = rand() % 100 + 1;

    while (guess != number)
    {
        if (guess < number)
        {
            cout << "Too Low" << endl;
        }
        else if (guess > number)
        {
            cout << "Too High" << endl;
        }
        cout << "Guess Again" << endl;
        cin >> guess;
        tries++;
    }

    cout << "You Got It!" << endl;
    cout << "It Took You " << tries << " Tries" << endl;

    return 0;
}