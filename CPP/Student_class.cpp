#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(string studentName, int studentAverage) {
		name = studentName;
		average = studentAverage;
	}
	void set_name(string a) {
		name = a;
	}
	string get_name() {
		return name;
	}
	void set_average(int studentAverage) {
		if (studentAverage >= 0) {
			if (studentAverage <= 100) {
				average = studentAverage;
			}
		}
	}
	string getLetterGrade() {
		string letterGrade;
		if (average >= 90) {
			letterGrade = "A";
		}
		else if (average >= 80) {
			letterGrade = "B";
		}
		else if (average >= 70) {
			letterGrade = "C";
		}
		else if (average >= 60) {
			letterGrade = "D";
		}
		else {
			letterGrade = "F";
		}
		return letterGrade;
	}
	int get_average() const{
		return average;
	}
private:
	string name;
	int average = 0;
};

int main() {
	Student s1111("Engin", 75);
	cout << "Student name: " << s1111.get_name() << endl << "Average: " << s1111.get_average() << endl << "Student letter grade: " << s1111.getLetterGrade();
}
