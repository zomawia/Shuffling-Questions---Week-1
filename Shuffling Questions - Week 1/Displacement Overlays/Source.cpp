// Zomawia Sailo
// zomawia@gmail.com

//Problem: Displacement Overlap
//	A common problem in games is detecting when two volumes, or extents, are overlapping.
//  It’s useful to simplify collision detection into a series of smaller 1 - Dimensional problems.
//	In this case, we will look at determining if two 1 - dimensional objects are in collision.
//
//	Input:
//		Amin: The left - hand edge of A’s extents.
//			Amax : The right - hand edge of A’s extents.
//			Bmin : The left - hand edge of B’s extents.
//			Bmax : The right - hand edge of B’s extents.
//
//			Where these values are floating point values that represent positions along an axis, or number line.
//
//			Output :
//			A and B represent the extents of two separate objects.
//			We’d like to know how much A and B are overlapping.
//
//
//
//			Example Input :
//			  0.0 5.0 3.0 7.0
//
//				  Example Output :
//			  2.0
//
//
//				  Example Input :
//			  0.0 5.0 7.0 8.0
//
//				  Example Output :
//			  -2.0

#include <iostream>

int main()
{
	float Amin = 0.0, Amax = 0.0, Bmin = 0.0, Bmax = 0.0;

	//GET INPUT
	printf("Enter Amin: ");
	scanf_s("%f", &Amin);

	printf("Enter Amax: ");
	scanf_s("%f", &Amax);

	printf("Enter Bmin: ");
	scanf_s("%f", &Bmin);

	printf("Enter Bmax: ");
	scanf_s("%f", &Bmax);

	if ((Amax-Bmin) > (Amin-Bmax))
	{
		printf("%f\n", Amax-Bmin);
	}
	else
	{
		printf("%f\n", Amin-Bmax);
	}
	
	system("pause");

}