#ifndef _CRYPTO_H_
#define _CRYPTO_H_

// difference between upper case ASCII value and normal index
#define UPPER 65

// difference between lower case ASCII value and normal index
#define LOWER 97

// maximum value for alphabets
#define ALPHAMAX 26

class Crypto
{
private:
	char PlainText[25];
	char CipherText[25];
	int key;
public:
	void GetPlainTextnKey();
	void EncipherText();
	void PrintText();
};

#endif