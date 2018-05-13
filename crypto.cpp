#include <iostream>
#include "crypto.h"

using namespace std;

int main()
{
	Crypto MyCrypto;

	MyCrypto.GetPlainTextnKey();
	MyCrypto.EncipherText();
	MyCrypto.PrintText();

	// freezes visual studio console so output can be seen
	// system("pause");

	return 0;
}
