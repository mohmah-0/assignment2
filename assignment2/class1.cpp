#include<iostream>
#include<vector>

using namespace std;
void task1();
void task2();
void avrage_salary(int much);

int main()
{
	//cout << "test";

	char arr[] = "test";
	
	//cout << tes;

	task2();
	return 0;
}


void task1()
{
	int s = 0;
	char x = 'm';
	string test = "cola";
	while (x != '\0')
	{
		x = test[s];
		s++;
	}
	s--;
	cout << s;
}


void task2()
{
	int many;
	cout << "how many salaries?:";
	cin >> many;
	int *salaries = new int[many];
	
	for (int i = 1; i <= sizeof(salaries); i++)
	{
		cout << "\nhow much salaries for nr" << i << "?:";
		cin >> salaries[i - 1];//lol

	}
	avrage_salary(*salaries);
}


void avrage_salary(int *salaries)
{
	int sum = 0, avr = 0;
	for (int i = 0; i < sizeof(&salaries); i++)
	{
		sum += salaries[i];
	}

	avr = (double)sum / (double)sizeof(&salaries);
	cout << "\nThe avrage is: " << avr;
}