# SeveralCodeFunctions
In this assignment, you are going to code several functions, and a main routine that will test the execution of each. For each function, code a function definiton (located above main). When you submit your project, include the main that you used for your testing. I’ll run your code first, using your main, and then a second time, using a main that I have written. Make sure that your functions follow the spec described below, and make sure that your main adequately tests everything!
Function 1. Marketing calculations.
In assignment 2, you wrote code that figured out the diagonal size of a display screen given its height and width. Now, code a function named calcDiagonal that does the same thing. A call to the function could be:
diagonal = calcDiagonal (height, width);
Height, width, and diagonal are all doubles. The function accepts two variables, height and width, and returns their diagonal as the return value.
Just like in assignment 2, ask the user for a height and width. Call the function to compute the diagonal. You can use the same input and display code you had for assignment 2. You can assume that the data entered by the user is valid.
Function 2. Input validation.
Code a function named validateIntegerRange that accepts three integer parameters: a lower bound, an upper bound, and a number to test. The call to the function could look like:
validOrNot = validateIntegerRange (lowerBound, upperBound, numberToCheck)
The function returns a bool that is set to true if the number falls within the range, and false otherwise. For example, with a range of 3 to 5, an input of 3 returns true. But an input of 7 would return false.
Main’s testing: You’re a restaurant, and a user is ordering some food online. They order pasta with meatballs. The rule of the kitchen is that a customer can only order 1, 2, or 3 meatballs. Ask the user for the number of meatballs to include in their pasta dish. Call validateIntegerRange to check if the number entered is valid. If it’s invalid, say so, and loop until the user enters a valid number.
You can try several other combinations of upper and lower bounds, including a pair where the upper and lower are the same. (What does that effectively do?)
Function 3. Dice simulation.
Code a function named rollem generates two random numbers in the range 1 through 6, adds them together, and returns the result as its integer return value. (Note from assignment 4.1 that this is NOT the same as generating a single random number in the range 2 through 12.) Rollem has no parameters. A call to rollem could be:
roll = rollem();
Rollem assumes that the user of the function has initialized the random number generator seed to some value. This means that main should do this before it calls rollem the first time.
Main’s testing: Main sets up eleven accumulators corresponding to the eleven possibilities from each roll of the dice. Ask the user how many rolls to simulate. Code a loop with that many iterations, each time calling rollem and incrementing the accumulator for the result. When all those rolls have been made, display an appropriately-labeled table of eleven results. For example:
How many rolls of the dice to simulate? 1000
roll total roll total roll total roll total roll total roll total roll total roll total roll total roll total roll total
2 percentage of total 3 percentage of total 4 percentage of total 5 percentage of total 6 percentage of total 7 percentage of total 8 percentage of total 9 percentage of total
10 percentage of total 11 percentage of total 12 percentage of total
2.90 5.20 8.20
11.30 14.50 16.70 13.00 12.20
7.80 5.70 2.50
