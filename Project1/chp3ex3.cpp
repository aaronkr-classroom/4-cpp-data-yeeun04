//chp3ex3.cpp

#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; 
using std::string; using std::endl; 
using std::streamsize; using std::vector;

int main() {

	cout << "Enter all words followd by E0F:  "; // End-0f file
	vector<string> words;


	// �Է��� ���� ����
	string word; // cin���� ����ϱ�
	while (cin >> word) {
		words.push_back(word);
	}

	cout << "Words: " << words.size();

	return 0;
} // main ��
