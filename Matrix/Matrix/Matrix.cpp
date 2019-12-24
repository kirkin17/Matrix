#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	
	int rowa, rowb, rowc, cola, colb, colc;
	int **a, **b, **c;


	int menu;


	system("cls");
	cout << "Умножение матриц\n";
	cout << "Меню: \n";
	cout << "1. Консольный ввод/вывод матриц\n";
	cout << "2. Файловый ввод/вывод матриц\n";
	cout << "3. Редактировать матрицу\n";
	cout << "4. Умножить матрицы\n";
	cout << "5. Выход\n";

	cin >> menu;
	switch (menu)
	{
		case 1:
		{
			system("cls");
			cout << "Консольный ввод/вывод матриц\n";
			cout << "1. Ввод\n";
			cout << "2. Вывод\n";
			cout << "3. Назад\n";

			switch (menu)
			{
				case 1:
				{
					cout << "Ввод матриц";
					cout << "Выберите матрицу:\n";
					cout << "1. A\n";
					cout << "2. B\n";
					cout << "3. C\n";

				}
				case 2:
				{
					system("cls");
				}
				case 3:
				{
					system("cls");
					break;
				}
			}
		}
		case 2:
		{
			system("cls");
			cout << "Файловый ввод/вывод матриц\n";
			cout << "1. Ввод\n";
			cout << "2. Вывод\n";
			cout << "3. Назад\n";

		}
		case 3:
		{
			system("cls");
			cout << "Редактирование матриц\n";
			cout << "Выберите матрицу:\n";
			cout << "1. A\n";
			cout << "2. B\n";
			cout << "3. C\n";
			cout << "4. Назад\n";


		}
		case 4:
		{
			cout << "Умножение матриц\n";
			cout << "Выберите формулу:\n";
			cout << "1. C=A*B\n";
			cout << "2. C=B*A\n";
			cout << "3. A=B*C\n";
			cout << "4. A=C*B\n";
			cout << "5. B=A*C\n";
			cout << "6. B=C*A\n";
			switch (menu)
			{
				case 1:
				{

				}
				case 2:
				{

				}
				case 3:
				{

				}
				case 4:
				{

				}
				case 5:
				{

				}
				case 6:
				{

				}
			}
		}
		case 5:
		{
			return 0;
		}
	}
}
