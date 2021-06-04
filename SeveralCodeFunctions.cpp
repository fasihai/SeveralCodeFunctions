#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

//part 1
double calcDiagonal(double height, double width)
	{
		double diagonal;

		diagonal = sqrt(pow(height, 2.0) + pow(width, 2.0));

		return diagonal;
	}

//part 2
bool validateIntegerRange (int lowerBound, int upperBound, int numberToCheck)
{
	int l, u, n;

	bool validOrNot;

	l = lowerBound;
	u = upperBound;
	n = numberToCheck;

	if ( n >= l && n <= u)
	{
		validOrNot = true;
		return validOrNot;
	}
	else

		validOrNot = false;
		return validOrNot;


}
//Part 3
double rollem()
{
	 double firstNum, secondNum, total;

	 const int lowValue = 1;
	 const int highValue = 6;

	 firstNum = (rand() % (highValue - lowValue + 1)) + lowValue;
	 secondNum = (rand() % (highValue - lowValue + 1)) + lowValue;
	 total = firstNum + secondNum;
	 return total;
}

int main() {

// For Part 1

	double height, width, diagonal;


	cout << "Please enter an integer for height and width.\n";
	cin >> height >> width;

	diagonal = calcDiagonal(height, width);
	cout << "Diagonal = " << setprecision(2) << diagonal << "\n";

// For Part 2

	int meatBalls, valid;


	cout << "Please tell us how many meatballs you would like: 1, 2 or 3?\n";
	cin >> meatBalls;

	valid = validateIntegerRange (1, 3, meatBalls);

	while (valid != 1)
	{
		cout << "You have entered an invalid number of meatballs.";
		cout << " Please choose again.\n";
		cin >> meatBalls;
		valid = validateIntegerRange (1, 3, meatBalls);
	}
	cout << "You have chosen " << meatBalls << " meatballs.\n";

// For Part 3

	float accumu1 = 0, accumu2 = 0, accumu3 = 0, accumu4 = 0,
			accumu5 = 0, accumu6 = 0, accumu7 = 0, accumu8 = 0,
			accumu9 = 0, accumu10 = 0, accumu11=0,
			percent1, percent2, percent3, percent4,
			percent5, percent6, percent7, percent8,
			percent9, percent10, percent11,
			roll, rolls, dicerolls;

	cout << "Please enter number of rolls to simulate.\n";
	cin >> rolls;

	unsigned seed = time(0);
    srand(seed);

	for (roll=0; roll <= rolls; roll++)
	{
		dicerolls = rollem();

		if (dicerolls == 2)
				{
					accumu1 = accumu1 + 1;

				}
		if (dicerolls == 3)
				{
					accumu2 = accumu2 + 1;

				}
		if (dicerolls == 4)
				{
					accumu3 = accumu3 + 1;

				}
		if (dicerolls == 5)
				{
					accumu4 = accumu4 + 1;

				}
		if (dicerolls == 6)
				{
					accumu5= accumu5 + 1;

				}
		if (dicerolls == 7)
				{
					accumu6= accumu6 + 1;

				}
		if (dicerolls == 8)
				{
					accumu7= accumu7 + 1;

				}
		if (dicerolls == 9)
				{
					accumu8= accumu8 + 1;

				}
		if (dicerolls == 10)
				{
					accumu9= accumu9 + 1;

				}
		if (dicerolls == 11)
				{
					accumu10= accumu10 + 1;

				}
		if (dicerolls == 12)
				{
					accumu11= accumu11 + 1;

				}
	}
	percent1 = (accumu1/rolls) * 100;
	percent2 = (accumu2/rolls) * 100;
	percent3 = (accumu3/rolls) * 100;
	percent4 = (accumu4/rolls) * 100;
	percent5 = (accumu5/rolls) * 100;
	percent6 = (accumu6/rolls) * 100;
	percent7 = (accumu7/rolls) * 100;
	percent8 = (accumu8/rolls) * 100;
	percent9 = (accumu9/rolls) * 100;
	percent10 = (accumu10/rolls) * 100;
	percent11 = (accumu11/rolls) * 100;
	cout << fixed << showpoint << setprecision(2) << percent1 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent2 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent3 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent4 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent5 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent6 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent7 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent8 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent9 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent10 << "\n";
	cout << fixed << showpoint << setprecision(2) << percent11 << "\n";

	return 0;
}

