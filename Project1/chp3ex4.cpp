//chp3ex4.cpp

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

	string max = "";
	string min = "";

	string word;
	while (cin >> word) {
		
		//초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		//크기 확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min;

	return 0;
} // main 끝
