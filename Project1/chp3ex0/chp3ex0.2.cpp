// chp3ex0.2.cpp
// �߰����, �⸻���, �������� ��� �ް�
// ������ ��� ��� ������ ����ϱ�

#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::setprecision; // �Ǽ� ���� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Your name:  ";
	string name;
	cin >> name;
	cout << " Hellow,  " << name << "!" << endl;

	// �߰������ �⸻������ ������ ���� �Է¹ޱ�
	cout << "Midtern & Final scores:  ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final;

	// ���� ������ ����
	cout << "Enter all homework grades "
		"followd by E0F:  "; // End-0f file

	vector<double> homework;


	// �Է��� ���� ����
	double x; // cin���� ����ϱ�

	// �Һ���: ���ݱ��� count�� ������ �Է¹޾�����
	// �Է¹��� ������ ���� sum
	while (cin >> x) {
		homework.push_back(x);
	}

	// ���� ������ �Է� ������ Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "No grades. Try again." << endl;
		return 1;
	}

	// ������ ����
	sort(homework.begin(), homework.end());

	// ���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0
		? (homework[mid] + homework[mid - 1] / 2)
		: homework[mid];


	// ����� ���
	streamsize prec = cout.precision(); // ���� cout precision
	cout << "Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
} // main ��