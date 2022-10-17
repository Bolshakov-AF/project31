#include <iostream>
using namespace std;
#include "IntegerArray.h"

int main()
{
	IntegerArray<int> integerArray(8);
	
	for (int count = 0; count < integerArray.getLength(); ++count)
	{
		integerArray[count] = count;		
	}

	for (int count = integerArray.getLength() - 1; count >= 0; --count)
		cout << integerArray[count] << endl;

	return 0;
}