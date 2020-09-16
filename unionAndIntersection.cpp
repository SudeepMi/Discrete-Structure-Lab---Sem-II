#include <iostream>
using namespace std;

int main()
{
	int setA[5] = {1, 6, 9, 0, 7};
	int sizeOfA = sizeof setA / sizeof *setA;

	int setB[6] = {0, 2, 4, 6, 8, 10};
	int sizeOfB = sizeof setB / sizeof *setB;

	int intersectionSize = (sizeOfA < sizeOfB) ? sizeOfA : sizeOfB;
	int intersectionSet[intersectionSize];
	int i = 0, j, k, l, countIntersection = 0;

	// program to find intersection
	cout << "The intersection set is [";
	for (j = 0; j < sizeOfB; j++)
		for (k = 0; k < sizeOfA; k++)
			//		check if the two elements matches and set to the intersection set
			if (setB[j] == setA[k])
			{
				cout << setB[j] << " ";
				countIntersection++;
				intersectionSet[j] = setB[j];
			}

	i++;
	printf("]");

	// program to find union
	int a, b, c, d, e, f;

	int unionSetSize = sizeOfA + sizeOfB;
	int unionSet[unionSetSize];

	cout << "\nThe union set is [";
	//	add all the elements of a first
	for (a = 0; a < sizeOfA; a++)
		unionSet[a] = setA[a];

	for (b = 0; b < sizeOfB; b++)
	{
		unionSet[a] = setB[b];
		a++;
	}

	//	now remove all the duplicate elements in union array
	for (c = 0; c < unionSetSize; c++)
	{
		for (e = c + 1; e < unionSetSize; e++)
		{
			if (unionSet[c] == unionSet[e])
			{
				for (f = e; f < unionSetSize; f++)
					unionSet[f] = unionSet[f + 1];
				unionSetSize--;
				e--;
			}
		}
	}

	for (d = 0; d < unionSetSize; d++)
		cout << unionSet[d]) << " ";

	cout << "]";

	return 0;
}
