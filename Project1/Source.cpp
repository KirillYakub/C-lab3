#include <iostream>
#include <iomanip>

using namespace std;

void easy()
{
	int count = 0;
    char arr[3][4] = { '2','@','4','f','@','&','*','@','@','!','u','@' };

	cout << endl;
	cout << "������� 1. ���������� ��������� ���������� �������� @ � �������. ������ ��������:" << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
			if (arr[i][j] == '@')
			{
				count++;
            }
		}
		cout << '\0' << endl;
	}

	cout << endl;
    cout << "� ������ ������� " << count << " �������� '@'" << endl << endl;
}

void medium()
{
	cout << endl;
	cout << "������� 2. ���������� ������� ����� � �������� �������" << endl;
	cout << "���� �����: ";

	char const* arr[] = {"hello", "world", "word3"};

	int const size = 3;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}

	char const* temp[size];

	cout << endl;

	cout << "����� � �������� �������: ";

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

void hard()
{
	cout << endl;

	char arr[100];

	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			arr[i] = char(rand() % 55 + 160);
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a;

	int count = 0;

	do
	{
		cout << "������� ����� ������� (easy - 1), (medium - 2), (hard - 3): ";

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