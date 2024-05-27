#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
  srand(static_cast<unsigned int>(time(0)));
  int randomNumber =rand() % 100 + 1;
  int guess;
  bool guessedCorrect = false;
  cout << "Guess the number between 1 and 100 :- " << endl;

  while (!guessedCorrect) 
  {
    cout << "Enter your guess:-  ";
    cin >> guess;
    
    if (guess==randomNumber) 
	{
      guessedCorrect = true;
      cout << "Congratulations You guessed the number. " << endl;
    } else if (guess < randomNumber) 
	{
      cout << "Too low. Try again." << endl;
    } else {
      cout << "Too high. Try again." << endl;
    }
  }
  return 0;
}
