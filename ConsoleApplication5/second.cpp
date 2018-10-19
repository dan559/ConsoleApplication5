
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<iomanip>
using namespace std;
int main() {
	string fname, lname, name, wstudent, bstudent;
	int scores, min, max;
	fstream input("grades.txt");
	ofstream out("gradesout.txt");
	min = 100;
	max = 0;
	while (input >> fname >> lname >> scores) {
		name = fname + " " + lname;
		cout << fixed << left << setw(20) << name << " " << left << setw(5) << scores << endl;
		out << left << setw(20) << name << " " << left << setw(5) << scores << endl;
		if (min>score) {
			wstudent = name;
			min = scores;
		}
		if (max<score) {
			bstudent = name;
			max = scores;
		}

	}
	cout << "\nThe student with the higher grade is: " << bstudent << " with a score of " << max << endl;
	cout << "The student with the lower grade is: " << wstudent << " with a score of " << min << endl;
	out << "\nThe student with the higher grade is: " << bstudent << " with a score of " << max << endl;
	out << "The student with the lower grade is: " << wstudent << " with a score of " << min << endl;
	input.close();
	out.close();
	system("gradesout.txt");
	return 0;
}
