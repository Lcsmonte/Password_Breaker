#include <iostream>

using namespace std;

int main()
{

	char senha[6];
	char code[6];
	int counter = 6;


	cout << "Type a 6 digits Password (accept numbers, caracters, words.)" << endl;

	for (int i = 0; i < 6; i++)
	{
		cin >> senha[i];
	}

	for (int a = 33; a < 127; a++)
	{
		if (counter <= 0) { break; }
		code[0] = a;

		for (int b = 33; b < 127; b++)
		{
			if (counter <= 0) { break; }
			code[1] = b;

			for (int c = 33; c < 127; c++)
			{
				if (counter <= 0) { break; }
				code[2] = c;

				for (int d = 33; d < 127; d++)
				{
					if (counter <= 0) { break; }
					code[3] = d;

					for (int e = 33; e < 127; e++)
					{
						if (counter <= 0) { break; }
						code[4] = e;

						for (int f = 33; f < 127; f++)
						{
							if (counter <= 0) { break; }
							code[5] = f;
							cout << "\n";
							counter = 6;

							for (int i = 0; i < 6; i++)
							{
								cout << code[i];
								if (code[i] == senha[i])
								{
									counter--;
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "\n Your Password = " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << code[i];
	}
	cin >> counter;

	return 0;

}