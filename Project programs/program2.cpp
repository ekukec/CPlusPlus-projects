#include <iostream>

using namespace std;

class student_record
{
	public:
		void set_quizzes();
		void set_midterm();
		void set_final();
		void get_scores();
		void get_avg_score();
		void get_percentage();
		void get_grade();
	private:
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
	
	student1.set_quizzes();
	student1.set_midterm();
	student1.set_final();
	student1.get_scores();
	student1.get_avg_score();
	student1.get_percentage();
	student1.get_grade();
	
	
	
	
	
	
	
	
	return 0;
}

void student_record::set_quizzes()
{
	cout << "Enter the points for quiz1(max 10): ";
	cin >> quiz1;
	cout << "Enter the points for quiz2(max 10): ";
	cin >> quiz2;
}

void student_record::set_midterm()
{
	cout << "Enter the points for midterm(max 100): ";
	cin >> midterm;
}

void student_record::set_final()
{
	cout << "Enter the points for final(max 100): ";
	cin >> final;
}

void student_record::get_scores()
{
	cout << "Quiz 1: " << quiz1 << endl
	<< "Quiz 2: " << quiz2 << endl
	<< "Midterm: " << midterm << endl
	<< "Final: " << final << endl;
}

void student_record::get_avg_score()
{
	avg_score = quiz1 + quiz2 + midterm + final;
	cout << "Student average score: " << avg_score << endl;
}

void student_record::get_percentage()
{
	percentage = ((quiz1 + quiz2) * 1.25) + (midterm * 0.25) + (final * 0.50);
	cout << "Student percentage: " << percentage << "%" << endl;
}

void student_record::get_grade()
{
	if(percentage < 60)
	{
		grade = 'F';
	}
	if(percentage >= 60)
	{
		grade = 'D';
	}
	if(percentage >= 70)
	{
		grade = 'C';
	}
	if(percentage >= 80)
	{
		grade = 'B';
	}
	if(percentage >= 90)
	{
		grade = 'A';
	}
	cout << "Student grade is: " << grade << endl;
}
