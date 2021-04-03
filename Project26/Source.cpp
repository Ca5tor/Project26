#include <iostream>
using namespace std;

// ������� 1
void Part_1() {
	cout << "\t������� �� \"������\" � \"�����\"\n\n";
	cout << "������� ���-�� ������:___\b\b\b";

	const int coefficient = 12;			//���������� 1 �����
	int value;							//����������� �������� 

	cin >> value;

	int pounds = value / coefficient;	//����� ����� ������
	int inch = value % coefficient;		//������� � ������

	cout << value << "������ �����: " << pounds << " ������ � " << inch << " ������\n\n";
}

// ������� 2
void Part_2() {
	cout << "\t���������� BMI\n\n";
	cout << "������� ���� � ������ ����� ����� \"Enter\" � ������\n\n";

	int growth_pounds_value, growth_inch_value;					//��������� ������ ����� � ������ � ������

	cout << "������� ���-�� ������:___\b\b\b";
	cin >> growth_pounds_value;

	cout << endl;												//������� �� ����� ������

	cout << "������� ���-�� ������:___\b\b\b";
	cin >> growth_inch_value;

	cout << endl;												//������� �� ����� ������

	//////������� ����� � ������ � �����//////
	const int coefficient_pounds = 12;							//����������� 1 ����� � �����
	int growth_inch;											//���� � ������

	// ������� ������ � ����� � ����������� � ���������� ������� 
	growth_inch = (growth_pounds_value * coefficient_pounds) + growth_inch_value;

	//////������� ����� �� ������ � �����//////
	const double coefficient_growth_meters = 0.0254;			//����������� 1 ����� ��� ������
	double growth_meters;										//���� � ������

	growth_meters = growth_inch * coefficient_growth_meters;

	int weight_pounds_value;									//��������� ������ ���� � ������

	cout << "������� ��� � ������:___\b\b\b";
	cin >> weight_pounds_value;

	const double coefficient_mass_in_kilograms = 2.205;
	double mass_in_kilograms;

	//////������� ����� �� ������ � �� //////
	mass_in_kilograms = weight_pounds_value / coefficient_mass_in_kilograms;

	double BMI = mass_in_kilograms / pow(growth_meters, 2);

	cout << "������ ���� BMI = " << BMI << endl;
}

// ������� 3
void Part_3() {
	cout << "Enter a latitude in degrees, minutes and seconds:\nFirst,enter the degrees: ";
	int degrees_val;
	cin >> degrees_val;

	cout << "\nNext, enter the minutes of arc: ";
	int minutes;
	cin >> minutes;

	cout << "\nFinally, enter the seconds of arc: ";
	int seconds;
	cin >> seconds;

	const int a = 60;
	const int b = 60;

	double c = (double)minutes / a;
	double d = ((double)seconds / a) / b;
	double x = (c + d);
	double degrees = (double)degrees_val + x;

	cout << "�����: " << degrees << endl;
}

// ������� 4
void Part_4() {
	cout << "Enter the number seconds: ********\b\b\b\b\b\b\b\b";

	long value;

	cin >> value;

	const long one_day_in_seconds = 86400;
	long all_days = value / one_day_in_seconds;					//������ ���������� ����
	long remainder_0 = value % one_day_in_seconds;				//������ 1-�� ������� 

	const long one_hours_in_seconds = 3600;
	long all_hours = remainder_0 / one_hours_in_seconds;
	long remainder_1 = remainder_0 % one_hours_in_seconds;		//������ 2-�� ������� 

	const long one_minutes_in_seconds = 60;
	long all_minutes = remainder_1 / one_minutes_in_seconds;
	long all_seconds = remainder_1 % one_minutes_in_seconds;	//���������� �������

	cout << value << " seconds = " <<
		all_days << " days, " <<
		all_hours << " hours, " <<
		all_minutes << " minutes and " <<
		all_seconds << " seconds." << endl;

}

// ������� 5
void Part_5() {
	cout << "Enter the worlsd's population: __________\b\b\b\b\b\b\b\b\b\b";

	long long value_0, value_1;

	cin >> value_0;
	cout << endl;
	cout << "Enter the population of the US: _________\b\b\b\b\b\b\b\b\b";
	cin >> value_1;

	double percentage_of_the_number = ((double)value_1 / (double)value_0) * 100;

	cout << endl;
	cout << "The population of the US is " << percentage_of_the_number << "% of the world population";
}

// ������� 6
void Part_6() {
	cout << "������� ���-�� ���������� ��: ____\b\b\b\b";
	double kilometer;
	cin >> kilometer;
	cout << endl;

	cout << "������� ���-�� ��������������� ������ : __\b\b";
	double liter;
	cin >> liter;
	cout << endl;

	double var = (liter / kilometer) * 100;
	cout << "������ ������� �� 100�� = " << var << endl;

}

// ������� 7
void Part_7() {
	cout << "������� ���������� ������������ �������: ";
	double liters;
	cin >> liters;
	cout << endl;

	const double var_miles = 62.14;			//�� 100 ��
	const double var_gallons = 3.875;		//1 ����

	double gallons = liters / var_gallons;
	int all_miles = var_miles / gallons;	//������������� ������� �����

	cout << all_miles << " ���� �� ������ �������� ����� " << liters << " ������ �� 100��" << endl;
}

int main()
{
	setlocale(0, "");
	
	//Part_1();
	//Part_2();
	//Part_3();
	//Part_4();
	//Part_5();
	//Part_6();
	Part_7();

	system("pause");
	return 0;
}
