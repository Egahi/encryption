#ifndef _ENCRYPT_H_
#define _ENCRYPT_H_
#include <iostream>
#include <cctype>
#include <cstring>

// difference between upper case ASCII value and normal index
#define UPPER 65

// difference between lower case ASCII value and normal index
#define LOWER 97

// maximum value for alphabets
#define ALPHAMAX 26

using namespace std;

class Crypto
{
private:
	char PlainText[25];
	char CipherText[25];
	int key;
public:
	void GetPlainTextnKey()
	{
		cout << "Plain Text: ";
		cin.getline(PlainText, 24);
		cout << "Key: ";
		cin >> key;
		cin.ignore(15, '\n');
	};

	void EncipherText()
	{
		int length = strlen(PlainText);

		for (int i = 0; i < length; i++)
		{
			// encipher only letters
			if (isalpha(PlainText[i]))
			{
				// upper case letters
				if (isupper(PlainText[i]))
				{
					char c = PlainText[i];

					// Convert ASCII value to normal index 
					// but keep shifted characters within A and Z
					c = ((c - UPPER) + key ) % ALPHAMAX;

					// convert back to ASCII
					c += UPPER;

					CipherText[i] = c;
				}
				
				// lower case
				else
				{
					char c = PlainText[i];

					// convert ASCII value to normal index
					// but keep shifted key between a and z
					c = ((c - LOWER) + key) % ALPHAMAX;
					c += LOWER;

					CipherText[i] = c;
				}
			}

			else
			{
				CipherText[i] = PlainText[i];
			}
		}

		CipherText[length] = '\0';
	};

	void PrintText()
	{
		cout << "Plain Text:\t" << PlainText << endl;
		cout << "Cipher Text:\t" << CipherText << endl;
	};
};

#endif
