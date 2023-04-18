#include <iostream>

using namespace std;

struct student_record
{
	int quiz1;
	int quiz2;
	int midterm;
	int final;
	double percentage;
	int avg_score;
	char grade;
};


int main()
{
	student_record student1, student2;
	
	cout << "Enter the points for quiz1(max 10): ";
	cin >> student1.quiz1;
	cout << "Enter the points for quiz2(max 10): ";
	cin >> student1.quiz2;
	cout << "Enter the points for midterm(max 100): ";
	cin >> student1.midterm;
	cout << "Enter the points for final(max 100): ";
	cin >> student1.final;
	
	student1.percentage = ((student1.quiz1 + student1.quiz2) * 1.25) + (student1.midterm * 0.25) + (student1.final * 0.50);
	student1.avg_score = student1.quiz1 + student1.quiz2 + student1.midterm + student1.final;
	cout << "Student average score: " << student1.avg_score << endl;
	cout << "Student percentage: " << student1.percentage << "%" << endl;
	if(student1.percentage < 60)
	{
		student1.grade = 'F';
	}
	if(student1.percentage >= 60)
	{
		student1.grade = 'D';
	}
	if(student1.percentage >= 70)
	{
		student1.grade = 'C';
	}
	if(student1.percentage >= 80)
	{
		student1.grade = 'B';
	}
	if(student1.percentage >= 90)
	{
		student1.grade = 'A';
	}
	cout << "Student grade is: " << student1.grade << endl;
	
	return 0;
}
