#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "prot.h"
//comment
//one more comm
int main(int argc, char* argv[])
{
	system("chcp 1251");
	system("cls");
	
	char control_year[SIZE];
	char ** years_list;

	if(GetInputWay())
	{
		fflush(stdin);
		
		char file_name[129];
		
		printf_s("������ ����� ����� ��� ���������� �����:\t");
		gets(file_name);
		
		FILE * input_file = fopen(file_name, "r");

		while (!input_file) //(!(input_file = fopen(file_name, "r")));
		{
			printf_s("������ ��'� �����!\n�������� ��������:\t");
			gets(file_name);
			input_file = fopen(file_name, "r");
		}

		years_list = GetListFromFile(input_file, control_year);

		PrintYearList(years_list, "������ ���:");

		GroupDatesList(years_list, control_year);

		PrintYearList(years_list, "��������� ���:");

		fclose(input_file);

		fflush(stdin);
	}
	else
	{
		years_list = GetYearList();

		GetControlYear(control_year);
	
		PrintYearList(years_list, "������ ���:");

		GroupDatesList(years_list, control_year);

		PrintYearList(years_list, "��������� ���:");
	}

	else
	{
		years_list = GetYearList();

		GetControlYear(control_year);
	
		PrintYearList(years_list, "������ ���:");

		GroupDatesList(years_list, control_year);

		PrintYearList(years_list, "��������� ���:");
	}

	//new changes ... wrong commit

	
	//additional comment

	fflush(stdin);

	getchar();

}