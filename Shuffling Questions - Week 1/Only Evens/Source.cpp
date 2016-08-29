//Zomawia Sailo
//zomawia@gmail.com
//
//Problem: Only Evens
//
//	Given a range, print all of the even whole numbers inclusive of the upper bound and the lower bound.
//
//	Input :
//	S : The lower bound of the range.
//	E : The upper bound of the range.
//
//	Where S and E are all positive integers.
//
//	Output :
//	For every integer, n, inclusive of S, up to and inclusive of E :
//		 If n is an even number, print n.
//
//			 Example Input :
//		 1 10
//
//			 Example Output :
//		 2
//			 4
//			 6
//			 8
//			 10


#include <iostream>

int main()
{
	int inputA = 0, inputB = 0;

	printf("Input a low number and a greater number eg. 1 10\n>> ");
	scanf_s("%d %d", &inputA, &inputB);

	for (int i = inputA; i < inputB+1; i++)
	{

		if (i % 2 == 0) printf("%d\n", i);

	}

	system("pause");
}