#include "crypto.h"

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

/**
 * Gets plaint text to be encrypted and key from user
 */
void Crypto::GetPlainTextnKey()
{
	cout << "Plain Text: ";
	cin.getline(PlainText, 24);
	cout << "Key: ";
	cin >> key;
	cin.ignore(15, '\n');
}

/**
 * Enciphers a plain text
 */
void Crypto::EncipherText()
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
}

/**
 * prints plaint text and cipher texts
 */
void Crypto::PrintText()
{
	cout << "Plain Text:\t" << PlainText << endl;
	cout << "Cipher Text:\t" << CipherText << endl;
}