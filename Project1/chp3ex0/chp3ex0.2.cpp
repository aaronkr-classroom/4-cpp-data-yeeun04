// chp3ex0.2.cpp
// 중간고사, 기말고사, 과제점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기

#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::setprecision; // 실수 숫자 길이 정의
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {
	// 학생의 이름을 묻고 입력받기
	cout << "Your name:  ";
	string name;
	cin >> name;
	cout << " Hellow,  " << name << "!" << endl;

	// 중간시험과 기말시험의 점수를 묻고 입력받기
	cout << "Midtern & Final scores:  ";
	double midterm, final; // double = 최소 10자리까지, 보통 15자리까지
	cin >> midterm >> final;

	// 과제 점수를 물음
	cout << "Enter all homework grades "
		"followd by E0F:  "; // End-0f file

	vector<double> homework;


	// 입력을 위한 변수
	double x; // cin에서 사용하기

	// 불변성: 지금까지 count개 점수를 입력받았으면
	// 입력받은 점수의 합은 sum
	while (cin >> x) {
		homework.push_back(x);
	}

	// 과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "No grades. Try again." << endl;
		return 1;
	}

	// 점수를 정렬
	sort(homework.begin(), homework.end());

	// 과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0
		? (homework[mid] + homework[mid - 1] / 2)
		: homework[mid];


	// 결과를 출력
	streamsize prec = cout.precision(); // 지금 cout precision
	cout << "Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
} // main 끝