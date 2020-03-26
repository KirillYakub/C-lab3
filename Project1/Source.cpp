#include <iostream>
#include <iomanip>

using namespace std;

void easy()
{
	int count = 0;
	char arr[3][4];

	cout << endl;
	cout << "Уровень 1. Необходимо посчитать количество символов @ в массиве. Массив символов:" << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = char(rand()%10 + 55);
			cout << arr[i][j] << " ";
			if (arr[i][j] == '@')
			{
				count++;
            }
		}
		cout << '\0' << endl;
	}

	cout << endl;
    cout << "В данном массиве " << count << " символов '@'" << endl << endl;
}

void medium()
{
	cout << endl;
	cout << "Уровень 2. Необходимо вывести слова в обратном порядке" << endl;
	cout << "Даны слова: ";

	char const* arr[] = {"hello", "world", "word3", "word4"};

    int const size = 4;

	char const* temp[size];

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;

	cout << "Слова в обратном порядке: ";

	for (int i = 0; i < size / 2; i++)
	{
		temp[i] = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl << endl;
}

struct COUNT
{
	int count = 0;
};

void hard()
{
	cout << endl;

	const int size = 50;
	char arr[size];
	COUNT arr1[size];

	cout << "Уровень 3. Необходимо создать массив не более чем из 100 символов и посчитать в нем количество каждой русской буквы" << endl;
	cout << "Создаем массив из 50 случайныx символов в пределах размещения русских букв по таблице ASCII" << endl << endl;
	cout << "Массив: ";

	for (int i = 0; i < size; i++)
	{
		arr[i] = char(rand() % 125 + 130);
		cout << arr[i] << ' ';
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int a = 192; a <= 255; a++)
			{
				if (char(arr[i]) == char(a) && char(arr[i]) == char(arr[j]))
				{
					arr1[i].count++;
				}
			}
		}
	}

	for (int a = 192; a <= 255; a++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				if (arr[j] > arr[j + 1] && char(arr[j] == char(a) && char(arr[j + 1]) == char(a)))
				{
					char temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	cout << endl;
	cout << "Русские элементы массива и их количество: " << endl << endl;

	for (int a = 192; a <= 255; a++)
	{
		for (int i = 0; i < size; i++)
		{
			if (char(arr[i]) == char(a))
			{
				cout << arr[i] << " - " << arr1[i].count << endl;
			}
		}
	}

	cout << endl << endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	
	int a;

	int count = 0;

	do
	{
		cout << "Введите номер задания (easy - 1), (medium - 2), (hard - 3): ";

		cin >> a;

		if (a == 1)
		{
			easy();
			count++;
		}

		if (a == 2)
		{
			medium();
			count++;
		}

		if (a == 3)
		{
			hard();
			count++;
		}

	} while (count == 0);
}