//	Zomawia Sailo <zomawia@gmail.com>

//	Problem: Collatz Sequence
//	The Collatz Sequence is a set of special rules applied to a looping value.
//
//	Input :
//	V : The starting value.
//	Where V is a positive integer.
//
//
//	Output :
//	For each iteration,
//	If V is even, divide by 2.
//	If V is odd, 3 * V + 1.
//	If V is 1, end the sequence.
//
//	Output the value of V each iteration.
//
//	Example Input :
//		 6
//
//			 Example Output :
//		 6 3 10 5 16 8 4 2 1

#include <iostream>
#include <cstdio>

void main()
{
	int input = 0;

	printf("Input a number to evaluate the collatz sequence: ");
	scanf_s("%d", &input);
	getchar();

	printf("%d ", input);

	while (input != 1)
	{
		if (input % 2 == 0)
		{
			input = input / 2;
			printf("%d ", input);
		}

		else if (input % 2 != 0)
		{
			input = input * 3 + 1;
			printf("%d ", input);
		}

		if (input == 1)
		{
			//("%d ", input);
			break;
		}
	}

	printf("\n");
	system("pause");

}