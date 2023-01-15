// Lesson_in_classroom_14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

//struct dr
//{
//	int d; string m; int g;
//};
//
//struct ank
//{
//	string name;
//	string tel;
//	dr data;
//};

struct student
{
	string name;
	int group;
	int ses[5];
};

void viewStud(student* st)
{
	system("cls");
	int nomer = -1;
	while (nomer < 1 || nomer > 10)
	{
		cout << " Введите номер \n";
		cin >> nomer;
	}
	nomer--;
	if (st[nomer].name != "")
	{
		cout << "Имя - " << st[nomer].name << endl << "Группа - " << st[nomer].group << endl;
		for (int i = 0; i < 5; i++)
			cout << st[nomer].ses[i] << '\t';
	}
	else
		cout << " Нет такого студента.";
	int menu = -1;
	cout << endl << " 1 - Меню" << endl;
	while (menu != 1)
		cin >> menu;
}

void createStud(student* st, int& nomer, const int &size)
{
	system("cls");	
	if (nomer < size)
	{
		cout << "\n Введите имя \n";
		cin >> st[nomer].name;
		cout << "\n Введите группу \n";
		cin >> st[nomer].group;
		cout << "\n Успеваемость: \n";
		for (int i = 0; i < 5; i++) {
			st[nomer].ses[i] = rand() % (5 - 2) + 2;
			cout << st[nomer].ses[i] << " \t";
		}
		nomer++;
	}
	else
	{
		cout << " Ваш список переполнен, вы больше не можете вносить людей" << endl;
		cout << " Для выхода в меню, нажмите - 1." << endl;
		int menu = -1;
		while (menu != 1)
			cin >> menu;
	}
}

void sortstg(student* st, const int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if(st[i].name != "" && st[j].name != "")
			if (st[i].group < st[j].group)
				swap(st[i], st[j]);
		}
	}	
}

void sredOc(student* st, int size)
{
	system("cls");
	float ocenka = -1;
	while (ocenka < 2 || ocenka > 5)
	{
		cout << " Оценка может быть в диапозоне от 2 до 5!!!";
		cout << " Введите среднюю оценку." << endl;
		cin >> ocenka;
	}
	for (int i = 0; i < size;i++) {
		float O = 0;
		if (st[i].name != "")
		for (int j = 0; j < 5;j++) {
			O += st[i].ses[j];
		}
		O /= 5;
		if (O >= ocenka)
			cout << " Имя - " << st[i].name << '\t' << " Группа - " << st[i].group << " Средний балл - " << O << endl;
	}
	int menu = -1;
	cout << " Для выхода в меню нажмите 1.";
	while (menu != 1)
		cin >> menu;
}

int main()
{
	setlocale(0, " ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//dr nikita{13, " okt ", 1999};     //Способы заполнения структур
	//cout << nikita.d << nikita.m << nikita.g<<endl;
	//dr evg;
	//evg.d = 1;
	//evg.m = " okt ";
	//evg.g = 1987;
	//cout << evg.d << evg.m << evg.g<<endl;
	//dr eka;
	//cin >> eka.d;
	//cin >> eka.m;
	//cin >> eka.g;
	//cout << eka.d << eka.m << eka.g << endl;

	/*ank nik;
	nik.name = "nikita";
	nik.tel = "89995555666";
	nik.data.d = 13;
	nik.data.m = "okt";
	nik.data.g = 1999;
	cout << nik.name << endl << nik.tel << endl << nik.data.d << endl << nik.data.m << endl << nik.data.g;*/

	srand(time(NULL));
	/*const int size = 2;
	int vibor = 1;
	student stud1[size];
	int nomer = 0;
	while (vibor != 5)
	{
		system("cls");		
		for (int i = 0; i < size; i++)
			if (stud1[i].name != "")
				cout << i + 1 << ". " << stud1[i].name<< " " << stud1[i].group << endl;
			else
				cout << i + 1 << ". " << endl;
		cout << "\n 1 - добавление студента.\n 2 - просмотр. \n 3 - сортировка по группе.\n 4 - средняя оценка.\n 5 - выход.\n";
		cin >> vibor;
		if (vibor == 1)
			createStud(stud1, nomer, size);
		if (vibor == 2)
			viewStud(stud1);
		if (vibor == 3)
			sortstg(stud1, size);
		if (vibor == 4)
			sredOc(stud1, size);
	}*/

	int a[3]{ 1,2,3 };
	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;
	cout << sizeof(a) / sizeof(a[0]) << endl;



}

