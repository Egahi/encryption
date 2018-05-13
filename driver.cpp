#include "crypto.h"

int main()
{
	Crypto MyCrypto;

	MyCrypto.GetPlainTextnKey();
	MyCrypto.EncipherText();
	MyCrypto.PrintText();

	// freezes visual studio console so output can be seen
	// system("pause");

	// success
	return 0;
}
