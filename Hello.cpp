#include <iostream>
using namespace std;

int main(){
    //THIS IS A GAME THAT WILL GUESS A HIDDEN NUMBER
    int number;
    int guess;
    int tries = 0;
    cout << "Guess a Number Between 1 and 100" << endl;
    cin >> guess;
    number = rand() % 100 + 1;
    while(guess != number){
        if(guess < number){
            cout << "Too Low" << endl;
        }
        else if(guess > number){
            cout << "Too High" << endl;
        }
        cout << "Guess Again" << endl;
        cin >> guess;
        tries++;
        if(guess == number){
            cout << "You Got It!" << endl;
            cout << "It Took You " << tries << " Tries" << endl;
        }
    }
    return 0;
}