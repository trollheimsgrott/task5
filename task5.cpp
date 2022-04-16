#include <iostream>
using namespace std;
int main()
{
	int guess = 0;//introduce integer for user to input as a guess
	srand(time(nullptr));//introduces a random integer function based on current time
	int n = (rand() % 10) + 1;// allows the integer n to repeat at random between 1 and 10
	cout << "                         Guess Game\n";//following code is output for the user
	cout << "                         **********\n\n";
	cout << "You will get three chances to guess the number.\n\n";
	cout << "Guess a number between 1 and 10. \n\n\n";
	

	for (int loop = 1; loop < 4; loop++) {//for loop lets the user decide the correct number, incorrect number / try again , or be told they are out of tries
			cout << "Choice " << loop << " Enter your answer : ";
			cin >> guess;
			if (guess == n) {
				cout << " You have guessed the correct number\n\n";
				break;
			}
			else if (guess != n && loop != 3) {
				cout << "\n You guessed incorrectly, try again: \n\n";
			}
			else {cout << "\nSorry, you have reached the maximum number of tries. \n\n";
			}
	}
	cout << "The correct number was : " << n;//outputs the correct number at the end of the game
	return 0;//end program
}
