//chp3ex2.cpp

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
	
	cout << "Enter all values followd by E0F:  "; // End-0f file

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

	// 사분위수를 구함
	vec_sz q1 = size / 2;
	vec_sz q2 = size / 4;
	vec_sz q3 = 3 * size / 4;

	double q1_val, q2_val, q3_val; // Q1 = n/4 출력: "Q1; q1_val"
	q1_val = size % 4 == 0 
		? (homework[q1] + homework[q1 - 1] / 2)
		: homework[q1];

	q2_val = size % 2 == 0  // Q2 = n/2 출력: "Q2; q2_val"
		? (homework[q2] + homework[q2 - 1] / 2)
		: homework[q2];

	q3_val = 3 * size % 4 == 0  // Q3 = 3*n/4 출력: "Q3; q3_val"
		? (homework[q3] + homework[q3 - 1] / 2)
		: homework[q3];


	// Vector: 1,2,[3],4,5,[6],7,8,[9],10,11 = size : 11
	std::cout << q2_val << std::endl;
	std::cout << q1_val << std::endl;
	std::cout << q3_val << std::endl;

	return 0;
} // main 끝
