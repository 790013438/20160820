// 20160820.cpp : �������̨Ӧ�ó������ڵ㡣
//

/*#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f();
	printf("%d\n",f());
	return 0;
}
int f()
{
	int a = 1;
	int b = 3;
	if (false)
		return (a, b,9);
	else
		return (5, a,INT_MAX,988);
}*/
/*#include<stdio.h>
#include<stack>
int main()
{
	printf("a b c d e\n");//���仰 JFrame int this EditData
	int arr[5] = { 0 };
	for (int i = 0; i < 2 * 2 * 2 * 2 * 2; i++)
	{
		int n = i;
		int j = 0;
		while (n != 1 && n != 0)
		{
			arr[j] = n % 2;
			j++;
			n = n / 2;
		}
		arr[j] = n;
		for (int k = 4; k >=0; k--)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");
	}
	return 0;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 1 0
0 0 0 1 1
0 0 1 0 0
0 0 1 0 1
*/
/*#include<iostream>
#include<iomanip>
int main()
{
	using namespace std;
	int pages = 99;//INT_MAX
	int count[10] = {};
	for (int i = 1; i <= pages; i++)
	{
		cout << setw(4) << i;
		if (i % 10 == 0)
			cout << endl;
		count[i % 10]++;
		int tmp = i;
		while (tmp / 10 != 0)
		{
			if (tmp / 10 < 10)
			{
				count[tmp / 10]++;
			}
			else
			{
				count[tmp % 10]++;
			}
			tmp = tmp / 10;
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "ҳ�����õ����� " << i << " �ĵĴ��� " << count[i] <<"	pages%10 = "<<pages%10<<",pages/10="<<pages/10<< endl;
	}
	printf("\n");
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
void showNum(int pages);
void countNum(int pages, int*index);
class Page
{
private:
	int index[10];
	std::vector<int>vectorPage;
	int pages;
public:
	Page(int arg0)
	{
		pages = arg0;
		for (int i = 0; i<10; i++)
		{
			index[i] = 0;
		}
		showNum(pages);
	}
	void setPage(int page)
	{
		pages = page;
		if(!vectorPage.empty())
			vectorPage.clear();
		showNum(pages);
	}
	int getPage() {
		return pages;
	}
	void showNum(int pages) {
		using namespace std;
		if (pages > 9)
		{
			showNum(pages / 10);
		}
		vectorPage.push_back(pages % 10);
	}
	int getSize()
	{
		int size = 0;
		size = vectorPage.size();
		return size;
	}
	int getNum(int arg0)
	{
		int page = -1;
		if (arg0<vectorPage.size())
		{
			page = vectorPage.at(arg0);
		}
		return page;
	}
};
int main()
{
	using namespace std;
	int pages = 11;
	int index[10] = {};
	int capacity = (int)log10(pages) + 1;
	Page p(pages);



	for (int count = 0; count < 11; count++)
	{
		for (int i = 1; i <= pages; i++) { //ҳ��
			if (i % 10 == 0)
			{
				//cout << endl;
			}
			//cout << setw(4) << i;
			countNum(i, index);//ͳ��ҳ��
		}
		for (int j = 0; j < 10; j++)
		{
			cout << "\n�õ�" << j << ":" << index[j] << "��";
			index[j] = 0;
		}

		cout << endl;
		int pageIndex[10] = {};
		for (int arg0 = 1; arg0 <= pages; arg0++)
		{
			int m = arg0;
			while (m)
			{
				pageIndex[m % 10]++;
				m = m / 10;
			}
		}
		for (int arg1 = 0; arg1 < 10; arg1++)
		{
			cout << pageIndex[arg1] << endl;
			pageIndex[arg1] = 0;
		}

		pages++;
		cout << "\n---------------------------------------\n";
	}
	return 0;
}
void showNum(int pages)
{
	using namespace std;
	if(pages>9){
		showNum(pages / 10);
	}
	cout << pages % 10<<"	";
}
void countNum(int pages, int*index)
{
	if (pages > 9) {
		countNum(pages / 10, index);
	}
	index[pages % 10]++;
}*/
/*#include<iostream>
#include<fstream>
#include<string>
class Page
{
private:
	int index[10];
	int pages;
public:
	Page()
	{
		for(int i=0;i<10;i++)
		{
			index[i] = 0;
		}
	}
	void setPages(int arg0)
	{
		pages = arg0;
	}
	void count(int arg0)
	{
		for(int i=0;i<10;i++)
		{
			index[i] = 0;
		}
		for (int j = 1; j <= arg0; j++)
		{
			int tmp = j;
			while (tmp)
			{
				index[tmp % 10]++;
				tmp = tmp / 10;
			}
		}
	}
	void outputNum(std::string arg0)
	{
		count(pages);
		std::ofstream outFile(arg0);
		for (int i = 0; i < 10; i++)
		{
			if(outFile.is_open())
			{
				outFile << index[i] << std::endl;
			}
		}
		outFile.close();
	}
	void inputNum(std::string arg0)
	{
		std::ifstream inFile(arg0);
		if(inFile.is_open())
		{
			inFile >> pages;
		}
		inFile.close();
	}
	void showNum()
	{
		count(pages);
		for (int i = 0; i < 10; i++)
		{
			std::cout<<index[i] << std::endl;
		}
	}
};
int main()
{
	Page p;
	p.inputNum("e:\\aaa.txt");
	p.outputNum("e:\\bbb.txt");
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
class Character
{
public:
	void translate()
	{}
	void showTranslate()
	{
		string str = "a";
		for (int i = 0; i < 27; i++)
		{
			cout << str << ":" << (str.size() - 1) * 26 + str.at(str.size() - 1) - ('a' - 1) - (str.size() - 1) << endl;
			str.assign(1,str.at(str.size()-1)+1);
		}
		//
	}
};
int main()
{
	Character c;
	c.showTranslate();
	return 0;
}*///90-290 20160911
/*#include<iostream>
#include<map>
#include<string>
#include<cmath>
class Character {
private:
	std::map<char, int>mapTranslate;
	std::string str;
public:
	Character() {
		int j = 1;
		for (char i = 'a'; i <= 'z'; i++) {
			mapTranslate.insert(std::pair<char, int>(i, j));
			j++;
		}
	}
	void showTranslate() {
		for (char i = 'a'; i <= 'z'; i++) {
			std::cout <<i<< mapTranslate.at(i)<< std::endl;
		}
		std::cout << std::endl;

		str = "bc";
		for (int i = 0; i < 25; i++) {

			int keyCode = 0;
			for (int j = 0; j < str.size(); j++) {
				keyCode += mapTranslate.at(str.at(j));
				std::cout <<"mapTranslate.at(str.at("<<j<<")):"<<mapTranslate.at(str.at(j))<< std::endl;
				std::cout << pow(25, str.size() - 1-j) << std::endl;
				keyCode = keyCode*pow(25, str.size() - 1-j);
			}
			std::cout << keyCode << std::endl;

			std::cout << str <<mapTranslate.at(str.at(str.size()-1))<< std::endl;
			str = str.replace(str.size() - 1, 1, 1, (char)((int)(str.at(str.size() - 1)) + 1));
		}


		for (int i = 1; i < 225; i++) {
		}

	}
};
int main(){

	Character c;
	c.showTranslate();

	return 0;
}*///309-509 20160914 200*2
/*#include<iostream>
class Factorial {//factorial
private:
	static int value;
public:
	static int getResult(int arg0) {
		int product = 1;
		try {
			if (arg0 == 0) {
				return 1;
			}
			else {
				return getResult(arg0 - 1)*arg0;
			}
		}
		catch (int) {
		}
		return product;
	}
	static int getResult() {
		return getResult(value);
	}
	static int factorial(int n) {
		if (n == 0) {
			return 1;
		}
		return n*factorial(n - 1);
	}
};
int main() {
	Factorial f;
	for (int i = 0; i < 33; i++) {
		std::cout << Factorial::getResult(i) << "	";
		std::cout <<Factorial::factorial(i)<< std::endl;
	}
	return 0;
}*///1
/*#include<iostream>
#include<string>
#include<sstream>
class Factorial {
public:
	static int factorial(int n) {
		if (n == 0) {
			return 1;
		}
		return n*factorial(n - 1);
	}
};//2
int main() {
	std::string str = "";
	std::stringstream ss;
	for (int i = 0; i < 134; i++) {
		if (i > 0) {
			std::cout << i << "! = " << str << " = ";
		}
		else {
			std::cout << i << "! = " << str;
		}
		std::cout << Factorial::factorial(i) << std::endl;
		if (i == 0) {
			str = "1";
		}
		std::string temp = "*";
		std::string tmp = "";
		ss << i;
		ss >> tmp;
		std::cout <<"asdf"<< tmp << std::endl;
		str.append(temp.append(tmp));
	}
	return 0;
}*///2//359-559 20160916 200*4
/*#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Factorial {
public:
	static int factorial(int n) {
		if (n == 0) {
			return 1;
		}
		return n*factorial(n - 1);
	}
	static int product(int i) {
		int pro = 1;
		if (i == 0) {
			return 1;
		}
		else {
			for (int j = 1; j <=i; j++) {
				pro = pro*j;
			}
		}
		return pro;
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Factorial::factorial(i) << "	";
		std::cout << Factorial::product(i) << std::endl;
	}

	std::stringstream strstr;
	double num;
	for (num = 0; num < 23; num++) {
		strstr.clear();
		strstr << num;
		std::string str;
		strstr >> str;
		std::cout << str << std::endl;
	}

	return 0;
}*///3
/*#include<stdio.h>
int main()
{
	char*s = { "abc" };
	do {
		printf("%d\n", *s % 10);
		printf("%c\n", s);
		printf("%d\n", s);
		printf("%c\n\n", *s);
		++s;
	} while (*s);
	return 0;
}*/
/*#include<stdio.h>
int f(int n) {
	static int a = 1;
	n += a++;
	return n;
}
int main() {
	int a = 3, s;
	s = f(a);
	s = s + f(a);
	printf("%d\n", s);
	return 0;
}*///431-631 20160917 200*5
/*#include<iostream>
#include<sstream>
#include<string>
class Factorial {
public:
	static int product(int n) {
		if(n==0)
		return 1;
		return n*product(n-1);
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::stringstream strstr;
		strstr << i;
		std::string str;
		strstr >> str;
		std::cout <<str<<"! = "<< Factorial::product(i) << std::endl;
	}
	return 0;
}*///4
/*#include<string>
#include<iostream>
#include<sstream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else
		{
			return product(n - 1)*n;
		}
	}
};
int main()
{
	std::string str = "1";
	for (int i = 0; i < 32; i++)
	{
		if (i > 0)
		{
			std::stringstream strstr;
			strstr << i;
			std::string tmp;
			strstr >> tmp;
			str.append("*"+tmp);
			std::cout << i <<  "! = " << str <<" = "<< Factorial::product(i) << std::endl;
		}
		else
		{
			std::cout << i << "! = " << Factorial::product(i) << std::endl;
		}
	}
	return 0;
}*///5//500-700 20160919 200*7
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else
		{
			return product(n - 1)*n;
		}
	}
};
int main()
{
	for (int i = 0; i < 13; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///6
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		return n*product(n - 1);
	}
};
int main()
{
	for(int i=0;i<12;i++)
	std::cout << Factorial::product(i) << std::endl;
	return 0;
}*///7
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		return n*product(n - 1);
	}
};
int main()
{
	for(int i=0;i<10;i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///8
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///9
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for(int i=0;i<8;i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///10
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0) {
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///11
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///12
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0) {
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 8; i++) {
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///13 //525-725 20160920 200*8
/*#include<iostream>
class Factorial {
public:
	static int product(int n)
	{
		if (n == 0)
			return 1;
		else
		{
			return n*product(n-1);
		}
	}
};
int main()
{
	for (int i = 0; i < 12; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///14
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else
		{
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///15
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else {
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*/
/*#include<iostream>
class Factorial {
public:
	static int product(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return n*product(n - 1);
		}
	}
};
int main()
{
	for(int i=0;i<12;i++)
	{
		std::cout << i << "! = " << Factorial::product(i) << std::endl;
	}
	return 0;
}*///16
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///17
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return n*product(n - 1);
		}
	}
};
int main()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << Factorial::product(i) << std::endl;
	}
	return 0;
}*///18
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if (n == 0)
			return 1;
		else
			return n*product(n - 1);
	}
};
int main()
{
	for(int i=0;i<8;i++)
	{
		std::cout <<Factorial::product(i)<< std::endl;
	}
	return 0;
}*///19
/*#include<iostream>
class Factorial
{
public:
	static int product(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return n*product(n - 1);
		}
	}
};
int main()
{
	for(int i=0;i<4;i++)
	{
		std::cout <<Factorial::product(i)<< std::endl;
	}
	return 0;
}*///20
/*#include<iostream>
class Fibonacci
{
public:
	static int getValue(int n)
	{
		if(n<=1)
		{
			return 1;
		}
		else
		{
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main()
{
	for(int i=0;i<5;i++)
	{
		std::cout <<Fibonacci::getValue(i)<< std::endl;
	}
	return 0;
}*///1//736-936 20160921 200*8
/*#include<iostream>
class Fibonacci {
public:
	static int product(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return product(n - 1)+product(n-2);
		}
	}
};
int main(){
	for (int i = 0; i < 33; i++) {
		std::cout<<Fibonacci::product(i) << std::endl;
	}
	return 0;
}*///2
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 23; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///3
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///4
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 23; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///5
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 23; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///6
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 23; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///7
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///8
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///9
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///10
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 32; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///11//966-1166 20160923 200*9
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 2) + getValue(n - 1);
		}
	}
};
int main() {
	for (int i = 0; i < 33; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///12
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 39; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///13
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
};
int main() {
	for (int i = 0; i < 98; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///14
/*#include<iostream>
#include<cmath>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
	static double product(int n) {
		double value = 0;
		try {
			value = (pow((1 + sqrt(5.0)) / 2, n + 1) - pow((1 - sqrt(5.0)) / 2, n + 1)) / sqrt(5.0);
			//value = (pow((1 + sqrt(5.0)) / 2, n + 1) - pow((1 - sqrt(5.0)) / 2, n + 1)) / sqrt(5.0);
		}
		catch (int) {
		}
		return value;
	}
};
int main() {
	for (int i = 0; i < 98; i++) {
		std::cout << Fabonacci::getValue(i) << "	" << Fabonacci::product(i) << std::endl;
	}
	return 0;
}//15
/*#include<iostream>
#include<cmath>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
	static double product(int n) {
		double value = 0;
		try {
			value = (pow((1 + sqrt(5.0)) / 2, n + 1) - pow((1 - sqrt(5.0)) / 2, n + 1)) / sqrt(5.0);
			//value = (pow((1 + sqrt(5.0) / 2), n + 1) - pow((1 - sqrt(5.0)) / 2, n + 1)) / sqrt(5.0);
		}
		catch (int) {
		}
		return value;
	}
};
int main() {
	for (int i = 0; i < 23; i++) {
		std::cout << Fabonacci::getValue(i)<<"	"<<Fabonacci::product(i) << std::endl;
	}
	return 0;
}*///16
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
	static double product(int n){
		double value = 0;
		try {
			value = (1) / 5;
		}
		catch (int) {
		}
		return value;
	}
};
int main() {
	return 0;
}*///17
/*#include<iostream>
#include<cmath>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return getValue(n - 1) + getValue(n - 2);
		}
	}
	static int product(int n) {
		int value = 0;
		try {
			value = 1 / 5;
		}
		catch (int) {
		}
		return value;
	}
};
int main() {
	Fabonacci f;
	for (int i = 0; i < 5; i++) {
		std::cout << f.getValue(i) << std::endl;
	}
	return 0;
}*///18
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int n) {
		if (n <= 2) {
			return 1;
		}
		return getValue(n - 2) + getValue(n - 1);
	}
};
int main() {
	for (int i = 1; i < 15; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///19
/*#include<iostream>
class Fabonacci {
public:
	static int getValue(int i) {
		if (i <= 2) {
			return 1;
		}
		return getValue(i - 2) + getValue(i - 1);
	}
};
int main() {
	for (int i = 1; i <= 12; i++) {
		std::cout << Fabonacci::getValue(i) << std::endl;
	}
	return 0;
}*///20//1132-1332 20160924 200*10
/*#include<iostream>
class Ackerman {
public:
	static int getValue(int n, int m) {
		if (n == 1 && m == 0) {
			return 2;
		}
		if (n == 0) {
			return 1;
		}
		if (m == 0) {
			return n + 2;
		}
		return getValue(getValue(n - 1, m), m - 1);
	}
};
int main() {
	for (int i = 0,j=0; i < 5; i++,j++) {
		std::cout << Ackerman::getValue(i,j) << std::endl;
	}
	return 0;
}*/
/*#include<iostream>
static int count = 1;
class Perm {
public:
	static void setValue(int list[], int k, int m) {
		if (k == m) {
			for (int i = 0; i <= m; i++) {
				std::cout << list[i];
			}
			std::cout << std::endl;
			std::cout << "k==m :" << k << m << " , count:" << count << std::endl << std::endl;
		}
		else {
			for (int i = k; i <= m; i++) {
				int temp = list[k];
				list[k] = list[i];
				list[i] = temp;
				setValue(list, k + 1, m);
				temp = list[k];
				list[k] = list[i];
				list[i] = temp;
				std::cout << "k:" << k << " , i:" << i << " , m:" << m <<" , count:"<<count<< std::endl;
			}
		}
		count++;
	}
};
int main() {
	int list[5] = { 1,2,3,4,5 };
	Perm::setValue(list, 0, 4);
	return 0;
}*///1//1320-1520 20160924 200*24
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void getValue(Type list[],int k,int m) {
		using std::cout;
		using std::endl;
		if (k == m) {
			for (int i = 0; i <= m; i++) {
				cout << list[i];
			}
			cout << endl;
		}
		else {
			for (int i = k; i <= m; i++) {
				Type tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
				//$$$$$$$$$$$$
				cout << "������" << endl << "	";
				for (int i = 0; i <= m; i++) {
					cout<< list[i];
				}
				cout << endl;
				//###########
				getValue(list, k + 1, m);
				tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
				//$$$$$$$$$$$$$$
				cout << "������" << endl << "	";
				for (int i = 0; i <= m; i++) {
					cout << list[i];
				}
				cout << endl;
				//#############
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::getValue(c, 0, sizeof(c) - 1);
	return 0;
}*///2
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void getValue(Type list[], int k, int m) {
		using std::cout;
		using std::endl;
		if (k == m) {
			for (int i = 0; i <= m; i++) {
				cout << list[i];
			}
			cout << endl;
		}
		else {
			for (int i = k; i <= m; i++) {
				Type temp = list[k];
				list[k] = list[i];
				list[i] = temp;
				//####################
				cout << "����" << endl << "	";
				for (int i = 0; i < sizeof(list); i++) {
					cout << list[i];
				}
				cout << " k:" << k << endl;
				cout << "�ݹ����getValue(" << list[k] << " , " << k + 1 << " , " << m << ")" << endl;
				//$$$$$$$$$$$$$$$$$$$$$
				getValue(list, k + 1, m);
				temp = list[k];
				list[k] = list[i];
				list[i] = temp;
				//###############
				cout << "������getValue(" << list[k] << " , " << k + 1 << " , " << m << ")" << endl;
				//$$$$$$$$$$$$$$$$$
			}
		}
		//######
		cout << "����getValue(" << list[k] << " , " << k << " , " << m << ")" << endl << endl;
		//$$$$$$
	}
};
int main(){
	using std::cout;
	using std::endl;
	char list[] = { 'a','b','c','d','e' };
	Perm::getValue(list, 0, sizeof(list)-1);
	return 0;//1383-1433 20161011 200*24+17*50
}*///3
/*#include<iostream>
#include<locale>
class Perm {
public:
	template<class Type>
	static void getValue(Type list[],int k,int m) {
		using std::cout;
		using std::endl;
		if (k == m) {
			for (int i = 0; i <= m; i++) {
				cout << list[i]<<" ";
			}
			cout << endl;
		}
		else {
			for (int i = k; i <= m; i++) {
				Type tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
				//###########
				cout << "���õݹ麯����getValue(" << list << " , k+1=" << k + 1 << " , " << m << ") for�� i = " << i << " " << list[i] << " �� " << list[k] << " ����" << endl;
				//$$$$$$$$$$$$
				getValue(list, k + 1, m);
				tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
			}
		}
		//#####
		cout << "��������getValue(" << list << " , " << k << " , " << m << ")" << endl;
		//������
	}
};
int main() {
	char c[] = { 'A','B','C','d' };
	Perm::getValue(c, 0, sizeof(c) - 1);
	return 0;
}*///4
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void getValue(Type list[], int k, int m) {
		using std::cout;
		using std::endl;
		if (k == m) {
			for (int i = 0; i <= m; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = k; i <= m; i++) {
				Type tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
				//#####
				cout <<"	"<< list[i] <<  " �� " << list[k] << " ����" << endl;
				//$$$
				getValue(list, k + 1, m);
				tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main(){
	char list[] = { 'a','b','c','D','e' };
	Perm::getValue(list, 0, sizeof(list)-1);
	return 0;
}*///5
/*#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<tchar.h>
float f(float x, float y, float z) {
	float a = x*x + 9.0f / 4.0f*y*y + z*z - 1;
	return a*a*a - x*x*z*z*z - 9.0f / 80.0f*y*y*z*z*z;
}
float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f) {
		if (f(x, y, z) <= 0.0f) {
			return y;
		}
	}
	return 0.0f;
}
int main() {
	HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");
	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s*s*s*s*0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR*p = &buffer[sy++][0];
			float tz = z*(1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x*(1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx*nx + ny*ny + nz*nz);
					float d = (nx + ny - nz)*nd*0.5f + 0.5f;
					*p++ = ramp[(int)(d*5.0f)];
				}
				else {
					*p++ = ' ';
				}
			}
		}
		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0,sy };
			SetConsoleCursorPosition(0, coord);
			WriteConsole(c, buffer[sy], 79, NULL, 0);
		}
		Sleep(33);
	}
}/
���ߣ�Milo Yip
���ӣ�https://www.zhihu.com/question/20187195/answer/34873279
��Դ��֪��
����Ȩ���������У�ת������ϵ���߻����Ȩ��

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>

float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}

int main() {
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");

	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s * s * s * s * 0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}

		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		Sleep(33);
	}
}*/
/*#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>

float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}

int main() {
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");

	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s * s * s * s * 0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}

		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		Sleep(33);
	}
}
/*#include<iostream>
class Perm{
public:
	template<class Type>
	static void getValue(Type list[],int startIndex,int endIndex) {
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				//##
				cout << "getValue( " << list << " , " << startIndex + 1 << " , " << endIndex << " ) " << list[startIndex] << " ���� " << list[i] << endl;
				//$$
				getValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main(){
	char list[] = { 'a','b','c','d','e' };
	Perm::getValue(list, 0, sizeof(list) - 1);
	return 0;//1462-1512 20161011 200*24+17*50
}*///6
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				cout << "	" << list[i] << " ���� " << list[startIndex] << " startIndex:" << startIndex << " , i:" << i << endl;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char list[] = { 'a','b','c'};
	Perm::printValue(list, 0, sizeof(list) - 1);
	return 0;//1512-1562 20161011 200*24+20*50
}//1560-1610 20161011 200*24+17*50*/
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <=endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//**
				cout << "	��������";
				for (int i = startIndex; i <= endIndex; i++) {
					cout << list[i];
				}
				cout <<" : "<< list[startIndex] << " �� " << list[i] << " ����" << endl;
				//$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char list[] = { 'a','b','c','d' };
	Perm::printValue(list, 0, sizeof(list)-1);
	return 0;
}*///7
/*#include<iostream>
class Perm{
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i]<<" ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "��������";
				for (int j = startIndex; j <= endIndex; j++) {
					cout << list[j];
				}
				cout << " exchange:" << list[startIndex] << " , " << list[i] << endl;
				//$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c)-1);
	return 0;
}*///8//1773-1823 20161016 200*24+17*55
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i]<<" ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "�������飺";
				for (int j = startIndex; j <= endIndex; j ++ ) {
					cout << list[j];
				}
				cout <<" "<< list[startIndex] << "��" << list[i] << "������";
				//$$
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				for (int tempIndex = startIndex; tempIndex <= endIndex; tempIndex++) {
					cout << list[tempIndex];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main(){
	char list[] = { 'a','b','c','d','e' };
	Perm::printValue(list, 0, sizeof(list) - 1);
	return 0;
}*///9
/*#include<iostream>
class Binary {
public:
	template<class Type>
	static int binarySearch1(Type a[],const Type&x,int n) {
		using std::cout;
		using std::endl;
		int left = 0;
		int right = n - 1;
		while (left+1 < right) {
		//for(int i=0;i<10;i++){
			int middle = (left + right) / 2;
			if (x == a[middle]) {
				return middle;
			}
			if (x > a[middle]) {
				left = middle;
			}
			else {
				right = middle;
			}
			cout <<a[middle]<<" left : "<< left <<" right : "<< right << endl;
		}
		return -1;
	}
};
int main() {
	using std::cout;
	using std::endl;
	int a[] = { 2,3,9,97,123,533,981,1329};
	cout << Binary::binarySearch1(a, 533, sizeof(a)/sizeof(int));
	return 0;
}
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for(int i=0;i<=endIndex;i++){
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for(int i=startIndex;i<=endIndex;i++){
				//###
				cout << "�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				printValue(list, startIndex+1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main(){
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c) - 1);
	return 0;//1859-1909 20161016 200*24+17*55
}*///10
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "	�������飺";
				for (int j = startIndex; j <= endIndex; j++) {
					cout << list[j];
				}
				cout << endl;
				//$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e','f' };
	Perm::printValue(c,0,sizeof(c)/sizeof(c[0])-1);
	return 0;
}*///11
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex, int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i]<<" ";
			}
			cout << endl;
		}else{
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "	�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				//$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				//##
				cout << "�����������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e','f' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0])-1);
	return 0;
}*///1962-2012 20161019 200*24+19*50
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "	�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///12
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///13//2042-2092 20161021 200*24+19*51
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','e','f' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0])-1);
	return 0;
}*///14
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[], int startIndex,int endIndex) {
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "endIndex" << endIndex << "sizeof(list)/sizeof(list[0]):" << sizeof(list) / sizeof(list[0]) << "	�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//����
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','e','f' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///2117-2167 20161022 200*24+19*51-17//15
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex){
		using std::endl;
		using std::cout;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				//##
				cout << "	�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///16
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i]<<" ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "	��������";
				for (int i = startIndex; i <= endIndex; i++) {
					cout << list[i];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///17//2191-2241 20161022 200*24+19*51-17-18
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex){
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "	��������";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c,0,sizeof(c)/sizeof(c[0])-1);
	return 0;
}*////2191-2241 20161024 200*24+21*50-17-18
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "	�������飺";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//4$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0])-1);
	return 0;
}*///18//2279-2329 20161027 200*24+21*53-17-18-12
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "	��������";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0])-1);
	return 0;
}*///19
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[],int startIndex,int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				Type tmp= list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				//##
				cout << "	��������";
				for (int i = startIndex; i <= endIndex; i++) {
					cout << list[i];
				}
				cout << endl;
				//$$
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*///20//2340-2390 20161028 200*24+21*52 -20 //2414-2464 20161029 200*24+21*52 -20
/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <mmsystem.h>
#include<tchar.h>
//#pragma warning(disable:4996)//��20161030
#pragma comment (lib,"winmm.lib")
#define M 20
#define N M/2
MCIDEVICEID  dev[1];
MCI_OPEN_PARMS mciOpen;
MCI_PLAY_PARMS mciPlay;
void main()
{
	int a[M][N] = { 0 }, i, j, sum = 0, score = 0, x = N / 2, y = M - 1, fx = 0, fy = 0, p = N / 2, d = N / 4;
	char c = '1';
	PlaySound(_T("bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);//��
	srand(time(0));
	while (c == '1')
	{
		x = N / 2; y = M - 1; fx = 0; fy = 0; p = N / 2; c = '1';
		for (i = 0; i<M / 2; i++)
		{
			for (j = 0; j<N; j++)
			{
				a[i][j] = 0;
				a[i][j] = rand() % 2;
				sum += a[i][j];
			}
		}
		while (score<sum)
		{
			Sleep(100);
			system("cls");
			printf("��ש����Ϸ\n�÷�:%d/%d��\n", score, sum);
			printf("��");
			for (j = 0; j<N; j++)
			{
				printf("��");
			}
			printf("��\n");
			for (i = 0; i<M; i++)
			{
				printf("��");
				for (j = 0; j<N; j++)
				{


					if (i == y && j == x)
					{
						printf("��");
					}
					else
					{
						switch (a[i][j])
						{
						case 0:printf("��"); break;
						case 1:printf("��"); break;
						}
					}
				}
				printf("��\n");
			}
			printf("��");
			for (j = 0; j<N; j++)
			{
				if (j>p - d && j<p + d)
				{
					printf("��");
				}
				else printf("��");
			}
			printf("��\n");
			if (_kbhit())//��
			{
				c = _getch();
				switch (c)
				{
				case 'a':p--; if (y>M - 2)x--; break;
				case 's':system("pause"); break;
				case 'd':p++; if (y>M - 2)x++; break;
				}
			}
			if (y + 1 - 2 * fy<M && y + 1 - 2 * fy >= 0 && x + 1 - 2 * fx<N && x + 1 - 2 * fx >= 0)
			{
				if (a[y + 1 - 2 * fy][x + 1 - 2 * fx] == 0)
				{
					x = x + 1 - 2 * fx;
					y = y + 1 - 2 * fy;
				}
				else
				{
					mciSendCommand(dev[0], MCI_CLOSE, NULL, NULL);
					{
						if (score % 2 == 0)mciOpen.lpstrElementName = _T("get1.mp3");//��
						else mciOpen.lpstrElementName = _T("get2.mp3");//��
						if (mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen) == 0)
							dev[0] = mciOpen.wDeviceID;
						else
							mciOpen.wDeviceID = dev[0];
						mciPlay.dwFrom = 0;
						mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_NOTIFY | MCI_FROM, (DWORD)&mciPlay);
					}
					x = x + 1 - 2 * fx;
					y = y + 1 - 2 * fy;
					score = score + a[y][x];
					a[y][x] = 0;
					fy = 1 - fy;
					fx = 1 - fx;
				}
			}
			else if (y + 1 - 2 * fy<0)fy = 1 - fy;
			else if (p + d>x && p - d<x &&y + 1 - 2 * fy >= M)fy = 1 - fy;
			else if (!(p + d>x && p - d<x) && y + 1 - 2 * fy >= M)break;
			else if (x + 1 - 2 * fx >= N || x + 1 - 2 * fx<0)fx = 1 - fx;
		}
		if (sum == score)
		{
			printf("��ϲ�㣬�����ˣ��ٽ�������~\\(�R���Q)/~\n");
			mciSendCommand(dev[0], MCI_CLOSE, NULL, NULL);
			{
				mciOpen.lpstrElementName = _T("win.mp3");//
				if (mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen) == 0)
					dev[0] = mciOpen.wDeviceID;
				else
					mciOpen.wDeviceID = dev[0];
				mciPlay.dwFrom = 0;
				mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_NOTIFY | MCI_FROM, (DWORD)&mciPlay);
			}
		}
		else
		{
			printf("���ź��������ˣ��´�ע�ⰡOrz\n");
			sum = 0; score = 0;
			mciSendCommand(dev[0], MCI_CLOSE, NULL, NULL);
			{
				mciOpen.lpstrElementName = _T("bang.wav");//��
				if (mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen) == 0)
					dev[0] = mciOpen.wDeviceID;
				else
					mciOpen.wDeviceID = dev[0];
				mciPlay.dwFrom = 0;
				mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_NOTIFY | MCI_FROM, (DWORD)&mciPlay);
			}
		}
		printf("�Ƿ�����һ�Σ�\n1����\t2����\n");
		c = getchar();
	}
}
/*#include<iostream>
class Q {
public:
	static int q(int n,int m) {
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (m == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n - m, m);
	}
	static void printValue(int n,int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	for (int i = 0; i < 7; i++) {
		Q::printValue(6, i);
	}
	return 0;
}*///1//2414-2464 20161030 200*24+24*50 -20
/*#include<iostream>
class Division {
public:
	static int q(int n, int m) {
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (n == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n - m, m);
	}
	static void printValue(int n,int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			Division::printValue(i, j);
		}
	}
	return 0;
}*///2
/*#include <stdio.h>
#include<conio.h>
#define N 1000
#pragma warning(disable:4996)
int num[N];
void qsort(int *a, int x, int y)
{
	int xx = x, yy = y;
	int k = a[x];
	if (x >= y)
		return;
	while (xx != yy)
	{
		while (xx<yy && a[yy] >= k)
			yy--;
		a[xx] = a[yy];
		while (xx<yy && a[xx] <= k)
			xx++;
		a[yy] = a[xx];
	}
	a[xx] = k;
	qsort(a, x, xx - 1);
	qsort(a, xx + 1, y);
}
void swap(int a, int b)
{
	int c;
	c = num[a];
	num[a] = num[b];
	num[b] = c;
}
int mid(int a)
{
	int b[5];
	int i;
	for (i = 0; i<5; ++i)
		b[i] = num[a + i];
	qsort(b, 0, 4);
	for (i = 0; i<5; ++i)
		if (b[2] == num[a + i])
			return (a + i);
}
int partition(int p, int r, int x)
{
	int i = p, j = r + 1;
	while (true)
	{
		while (num[++i]<x);
		while (num[--j]>x);
		if (i >= j) break;
		swap(i, j);
	}
	num[p] = num[j];//������j������i
	num[j] = x;
	return j;
}
int select(int p, int r, int k)//ѡ��p��r��ĵ�kСԪ��
{
	if (r - p<75)
	{
		qsort(num, p, r);
		return num[p + k - 1];
	}
	int n = r - p + 1;
	int i, j;
	for (i = 0; i <= (n - 5) / 5; ++i)
	{
		j = mid(p + 5 * i);
		swap(p + i, j);
	}
	int x = select(p, p + (n - 5) / 5, (n - 5) / 10);
	i = partition(p, r, x);
	j = i - p + 1;
	int m, count;
	m = 0;
	for (count = p; count <= r; ++count)
		if (num[count] == x)
			++m;
	if (m >= 1 && j <= k && k <= j + m - 1)
		return num[i];
	else if (k <= j) return select(p, i, k);
	else return select(i + 1 + m, r, k - j - m);
}
int main()
{
	int i, j, k;
	while (true)
	{
		i = 0;
		//printf("please putin num[]:\n");
		//while (scanf("%d", &num[i]), num[i]) { ++i; }
		//33
		FILE *f;
		if ((f = fopen("f:\\aaa.txt", "r")) == NULL)
		{
			printf("�޷���\n");
			_getch();
		}
		else {
			while (!feof(f))
			{
				fscanf(f, "%d", &num[i]);
				i++;
			}
			fclose(f);
			for (int index = 0; index < sizeof(num) / sizeof(num[0]); index++) {
				if (index % 10 == 0) {
					printf("\n");
				}
				printf("%-4d ", num[index]);
			}
			//��4��
			printf("\nplease putin k:\n");
			scanf("%d", &k);
			j = select(0, i - 1, k);
			printf("\n�� %d С������: %d\n", k, j);
			getch();
		}
	}
	return 0;
}
/*#include<iostream>
class Division {
public:
	static int q(int n, int m) {
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (n == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n - m, m);
	}
	static void printValue(int n, int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	Division::printValue(6, 6);
	return 0;
}*///3
/*#include<iostream>
class Division{
public:
	static int q(int n, int m) {
		using std::cout;
		using std::endl;
		if (n < 1 || m < 1) {
			cout << "	n<1 || m<1:���� q( " << n << " , " << m << " )" << endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << "		n == 1 || m==1 ���� q( " << n << " , " << m << " )" << endl;
			return 1;
		}
		if (n < m) {
			cout << "		n<m:���� q( " << n << " , " << m << " )" << endl;
			q(n, n);
		}
		if (n == m) {
			cout << "			n==m:���� q( " << n << " , " << m << " )" << endl;
			return q(n, m - 1) + 1;
		}
		cout << "				���return :���� q( " << n << " , " << m << " )" << endl;
		return q(n, m - 1) + q(n - m, m);
	}
	static void print(int n,int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	Division::print(6, 6);
	return 0;
}*///4//2595-2645 20161031 200*24+24*50 -20
/*#include<iostream>
class Division {
public:
	static int q(int n,int m) {
		using std::cout;
		using std::endl;
		if (n < 1 || m < 1) {
			cout << "	n < 1 || m < 1 ����" << n << " , " << m << endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << "	n == 1 || m == 1 ����" << n << " , " << m << endl;
			return 1;
		}
		if (n < m) {
			cout << "	n < m  ����" << n << " , " << m << endl;
			return q(n, n);
		}
		if (n == m) {
			cout << "	n == m ����" << n << " , " << m << endl;
			return q(n, m - 1) + 1;
		}
		cout << "���return������" << n << " , " << m << endl;
		return q(n, m - 1) + q(n - m, m);
	}
	static void print(int n,int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	Division::print(6, 6);
	return 0;
}*///5
/*#include<iostream>
class Division {
public:
	static int q(int n,int m) {
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (n == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n - m, m);
	}
	static void printValue(int n,int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	Division::printValue(6, 6);
	return 0;
}*///6//2804-2854 20161101 200*24+24*50 -20
/*#include<iostream>
class Division {
public:
	static int q(int n, int m) {
		using std::cout;
		using std::endl;
		if (n < 1 || m < 1) {
			cout <<"	n<1 || m<1 "<<n<<" , "<<m<< endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << "	n == 1 || m == 1 " << n << " , " << m << endl;
			return 1;
		}
		if (n < m) {
			cout << "	n < m " << n << " , " << m << endl;
			return q(n, n);
		}
		if (n == m) {
			cout << "	n == m "<<n<<" , "<<m << endl;
			return q(n, m - 1) + 1;
		}
		cout << "else n , m " << n << " , " << m << endl;
		return q(n, m - 1) + q(n - m, m);
	}
	static void printValue(int n, int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	using std::cout;
	using std::endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			Division::printValue(i, j);
			cout << "#################" << endl;
		}
		cout << "$$$$$$$$$$$$$$$$$$" << endl;
	}
	return 0;//2873-2923 20161101 200*24+24*53 -20
}*///7
/*#include<iostream>
class Division {
public:
	static int q(int n, int m) {
		using std::endl;
		using std::cout;
		if (n < 1 || m < 1) {
			cout << "n < 1 || m < 1 " << n << " , " << m << endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << " n == 1 || m == 1 " << n << " , " << m << endl;
			return 1;
		}
		if (n < m) {
			cout << " n > m " << n << " , " << m << endl;
			return q(n, n);
		}
		if (n == m) {
			cout << " n == m " << n << " , " << m << endl;
			return q(n, m - 1) + 1;
		}
		cout << "��ͨ��" << m << " , " << n << endl;
		return q(n, m - 1) + q(n - m, m);
	}
	static void print(int n, int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	using std::cout;
	using std::endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			Division::print(i, j);
			cout << "$$$$$$$$$$$$$$$$$$$$$" << endl;
		}
		cout << "##################" << endl;
	}
	return 0;
}*///8
/*#include<iostream>
class Division {
public:
	static int q(int n, int m) {
		using std::cout;
		using std::endl;
		cout << n << " , " << m << endl;
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (n == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n-m, m);
	}
	static void print(int n, int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	using std::endl;
	using std::cout;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			Division::print(i, j);
			cout << "$$$$$$$$$$$$$$$$$$$" << endl;
		}
		cout <<"###############"<< endl;
	}
	return 0;//2916-2966 20161101 200*24+27*50 -2
}*///9
/*#include<iostream>
class Division {
private:
	int sum = 0;
public:
	Division() {
	}
	static int q(int n, int m) {
		using std::cout;
		using std::endl;
		cout << n << " , " << m << endl;
		if (n < 1 || m < 1) {
			return 0;
		}
		if (n == 1 || m == 1) {
			return 1;
		}
		if (n < m) {
			return q(n, n);
		}
		if (n == m) {
			return q(n, m - 1) + 1;
		}
		return q(n, m - 1) + q(n - m, m);
	}
	static int print(int n, int m) {
		using std::cout;
		using std::endl;
		cout << q(n, m) << endl;
	}
};
int main() {
	return 0;
}*///10//3011-3061 20161106 200*29+28*50 -2
/*#include <stdio.h>
#pragma warning(disable:4996)//#pragma warning(disable:4996)
#define N 100//����������˵ľ������Ϊ100��
void matrixChain(int p[], int m[N + 1][N + 1], int s[N + 1][N + 1])/*��m[i][j]��ά�������洢Ai*......Aj����С���˴�������s[i][j]���洢ʹAi......Aj�����С���˴�����Ӧ�ĶϿ�λ��k����Ҫע����Ǵ˴���N+1�ǳ��ؼ�����Ȼֻ�õ��������±�ֻ��1��N�����±�0��Ӧ��Ԫ��Ĭ��Ҳ���ڸ����飬��������ĳ��Ⱦ�Ӧ��ΪN+1*/
/*{
	int n = N;//����m,s����Ķ���n*n�ģ����������±�Ϊ0��Ԫ�أ��������ڸ�������
	for (int i = 1; i <= n; i++)
		m[i][i] = 0; /*������m�ĶԽ���λ����Ԫ��ȫ����0����ʱӦ��r=1���������ʾ�ȼ� ���һ��Խ����ϸ�Ԫ�ص�ֵ*/
		/*	for (int r = 2; r <= n; r++)//r��ʾб�Խ��ߵĲ�������2ȡ��n
			{
				for (int i = 1; i <= n - r + 1; i++)//i��ʾ�����r��б�Խ����ϵ�i��Ԫ�ص�ֵ
				{
					int j = i + r - 1;//j��ʾ��б�Խ��߲���Ϊr�����±�Ϊiʱ�����±�
					m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];//���㵱�Ͽ�λ��Ϊiʱ��Ӧ�����˴���
					s[i][j] = i;//�Ͽ�λ��Ϊi
					for (int k = i + 1; k < j; k++)
					{
						int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];/*���㵱�Ͽ�λ��kΪ��i��j��������i��j��������ȡֵ��Ӧ��(Ai*......*Ak)*(Ak+1*.......Aj)�����˴���*/
						/*				if (t < m[i][j])
										{
											m[i][j] = t;//��Ai*......Aj����С���˴�������m[i][j]
											s[i][j] = k;//����Ӧ�ĶϿ�λ��k����s[i][j]
										}
									}
								}
							}
						}
						void traceback(int i, int j, int s[][N + 1])//�õݹ���ʵ������õ���С���˴����ı��ʽ
						{
							if (i == j)
							{
								printf("A%d", i);
							}
							else
							{
								printf("(");
								traceback(i, s[i][j], s);
								traceback(s[i][j] + 1, j, s);
								printf(")");
							}
						}
						void main() {
							int n;//�����洢����ĸ���
							int q[2 * N];/*��q�������洢��ԭʼ�����루��������к��У�����ҪĿ����Ϊ�˼�����N�������Ƿ��������˵�����*/
							/*	int p[N + 1], flag = 1;/*��p[i-1],p[i]�������洢A�Ľ�����flag�����ж���N�������Ƿ���������*/
							/*	int m[N + 1][N + 1];// ��m[i][j]��ά�������洢Ai*......Aj����С���˴���
								int s[N + 1][N + 1];// ��s[i][j]���洢ʹAi......Aj�����С���˴�����Ӧ�ĶϿ�λ��k
								printf("���������ĸ�����С��100��:");  scanf("%d", &n);
								for (int i = 0; i <= 2 * n - 1; i++)//������Ľ����������ȴ�������q�н��ܼ���
								{
									if (i % 2 == 0)
									{
										printf("********************\n");
										printf("*������A%d����:", (i / 2) + 1);
									}
									else
									{
										printf("��************:");
									}
									scanf("%d", &q[i]);
								}
								for (int i = 1; i <= 2 * n - 2; i++)//�������������ļ���
								{
									if (i % 2 != 0 && q[i] != q[i + 1])
									{
										flag = 0;    break;
									}
								}
								for (int j = 1; j <= n - 1; j++)
								{
									p[j] = q[2 * j];
								}
								if (flag != 0)
								{
									p[0] = q[0];
									p[n] = q[2 * n - 1];
									matrixChain(p, m, s);
									printf("ʽ������:\n");
									traceback(1, n, s);
									printf("\n");
									printf("��С���˴���Ϊ%d\n", m[1][n]);
								}
								else
								{
									printf("��%d������������!\n", n);
								}
							}*/
							/*#include<iostream>
							class Division {
							public:
								static int q(int n, int m) {
									if (n <1||m<1) {
										return 0;
									}
									if (n == 1 || m == 1) {
										return 1;
									}
									if (n < m) {
										return q(n, n);
									}
									return 1;
								}
							};
							int main() {
								return 0;//3043-3093 20161106 200*29+28*50 -2
							}*///11
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 " << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 " << 1 << endl;
										return 1;
									}
									if (n < m) {
										cout << n << " , " << m << " n < m " << q(n, n) << endl;
										return q(n, n);
									}
									if (m == n) {
										cout << n << " , " << m << " n == m q( " << n << " , " << m<<" - 1" << " ) + 1 = " << q(n, m - 1) << " + 1" << endl;
										return q(n, m - 1) + 1;
									}
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
									return q(n, m - 1) + q(n - m, m);
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "#######" << endl;
									}
									cout << "$$$$$" << endl;
								}
								return 0;//3149-3199 20161109 200*29+31*50 -2
							}*///12
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << q(n, n) << endl;
										return q(n, n);
									}
									if (n == m) {
										cout << "����һ��q(n , m-1) ";
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << q(n, m - 1) << " + 1" << endl;
										return q(n, m - 1) + 1;
									}
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
									return q(n, m - 1) + q(n - m, m);
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout <<"############"<< endl;
									}
									cout << "$$$$$$$$" << endl;
								}
								return 0;
							}*///13
							/*#include<iostream>
							using namespace std;
							class Division{
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										cout << "ʡ��q(n , m) --> q(n , n) ";
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << q(n, n) << endl;
										return q(n, n);
									}
									if (n == m) {
										cout << "����һ��q(n , m-1) ";
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << q(n, m - 1) << " + 1" << endl;
										return q(n, m - 1) + 1;
									}
									cout << "����һ��q(n , m-1)��һ��q(n , m-n)";
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
									return q(n, m - 1) + q(n, m - n);
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "####" << endl;
									}
									cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
								}
								return 0;
							}*///14
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n == m) {
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "###########" << endl;
									}
									cout << "$$$$$$$$$$$$$$$$$$$$$$44" << endl;
								}
								return 0;//3186-3236 20161109 200*29+32*50 -2-62
							}*///15
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									if (n == m) {
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "####" << endl;
									}
									cout << "$$$$$$$$$$$$$444444" << endl;
								}
								return 0;
							}*///16
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									if (n == m) {
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "####" << endl;
									}
									cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
								}
								return 0;//3298-3348 20161111 200*29+31*50 -14
							}*///17
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									if (n == m) {
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "###" << endl;
									}
									cout << "$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
								}
								return 0;
							}*///18
							/*#include<stdio.h>
							#include<string.h>
							#include<math.h>
							#include<time.h>
							#include<stdlib.h>
							#pragma warning(disable:4996)//#pragma warning(disable:4996)
							char a[500], b[500];
							char num[501][501]; ///��¼�м���������
							char flag[501][501];    ///������飬���ڱ�ʶ�±�����򣬹��������������
							void LCS(); ///��̬�滮���
							void getLCS();    ///���õ��Ʒ�ʽ�������������

							int main()
							{
								/*int i;
								int randStringLength = 20;
								srand(time(NULL) + rand());    //��ʼ�������������
								char temp0Char[501], temp1Char[501];
								for (i = 0; i < randStringLength; i++)
								{
									temp0Char[i] = rand() % 65 + 32;      //���Ƶõ��������Ϊ����ʾ�ַ�
								}
								temp0Char[i] = 0;
								for(i=0;i<randStringLength+1;i++)
									temp1Char[i] = rand() % 65 + 32;
								temp1Char[i] = 0;
								strcpy(a, temp0Char);
								strcpy(b, temp1Char);
								//###
								printf("%s\n", a);
								printf("%s\n", b);
								//����������������
								strcpy(a, "ABCBDABabcdef");
								strcpy(b, "BDCABAaebicod");
								memset(num, 0, sizeof(num));
								memset(flag, 0, sizeof(flag));
								LCS();
								printf("%d\n", num[strlen(a)][strlen(b)]);
								getLCS();
								return 0;
							}

							void LCS()
							{
								int i, j;
								for (i = 1; i <= strlen(a); i++)
								{
									for (j = 1; j <= strlen(b); j++)
									{
										if (a[i - 1] == b[j - 1])   ///ע��������±���i-1��j-1
										{
											num[i][j] = num[i - 1][j - 1] + 1;
											flag[i][j] = 1;  ///б���±��
										}
										else if (num[i][j - 1]>num[i - 1][j])
										{
											num[i][j] = num[i][j - 1];
											flag[i][j] = 2;  ///���ұ��
										}
										else
										{
											num[i][j] = num[i - 1][j];
											flag[i][j] = 3;  ///���±��
										}
									}
								}
							}

							void getLCS()
							{

								char res[500];
								int i = strlen(a);
								int j = strlen(b);
								int k = 0;    ///���ڱ������������־λ
								while (i>0 && j>0)
								{
									if (flag[i][j] == 1)   ///�����б���±��
									{
										res[k] = a[i - 1];
										k++;
										i--;
										j--;
									}
									else if (flag[i][j] == 2)  ///�����б���ұ��
										j--;
									else if (flag[i][j] == 3)  ///�����б���±��
										i--;
								}

								for (i = k - 1; i >= 0; i--)
									printf("%c", res[i]);
							}*/
							/*#include <stdio.h>
							#include <stdlib.h>
							#include <string.h>
							#include<math.h>
							#include<time.h>
							#pragma warning(disable:4996)//#pragma warning(disable:4996)
							#define MAX 100

							void LCS(char *x, char *y, int x_len, int y_len, int common_len[][MAX], int b[][MAX])
							{
								//common_len[i][j]�洢����x�ĵ�iλ���еĵ�jλ�Ĺ��������еĳ���
								//b[i][j] ��¼���common_len[i][j]��·�����ֱ�Ϊ0 -1 1�����ڻ�����������Ӵ�

								int i, j;

								for (i = 0; i < x_len; i++)
									common_len[i][0] = 0;
								for (j = 0; j < y_len; j++)
									common_len[0][j] = 0;

								for (i = 1; i <= x_len; i++)
								{
									for (j = 1; j <= y_len; j++)
									{
										if (x[i - 1] == y[j - 1])  //���㿪ʼ�洢�����Ե�iλΪx[i-1]
										{
											common_len[i][j] = common_len[i - 1][j - 1] + 1;
											b[i][j] = 0;
										}
										else if (common_len[i - 1][j] >= common_len[i][j - 1])
										{
											common_len[i][j] = common_len[i - 1][j];
											b[i][j] = -1;
										}
										else
										{
											common_len[i][j] = common_len[i][j - 1];
											b[i][j] = 1;
										}
									}
								}
							}

							void backtrack(int i, int j, int b[][MAX], char *x)
							{
								if (0 == i || 0 == j)
									return;
								else if (0 == b[i][j])
								{
									backtrack(i - 1, j - 1, b, x);
									printf("%c", x[i - 1]);
								}
								else if (-1 == b[i][j])
								{
									backtrack(i - 1, j, b, x);
								}
								else
								{
									backtrack(i, j - 1, b, x);
								}
							}

							int main()
							{
								int x_len, y_len;
								char x[MAX];
								char y[MAX];
								int i = 0;
								int randStringLength = 99;
								srand(time(NULL) + rand());    //��ʼ�������������
								for (i = 0; i < randStringLength; i++)
								{
									x[i] = rand() % 26 + 65;      //���Ƶõ��������Ϊ����ʾ�ַ�
									y[i] = rand() % 26 + 65;
								}
								x[i] = 0;
								y[i] = 0;
								printf("%s\n", x);
								printf("%s\n", y);
								printf("�����������Ϊ��\n");
								int common_len[MAX][MAX];
								int b[MAX][MAX];

								x_len = strlen(x);
								y_len = strlen(y);

								LCS(x, y, x_len, y_len, common_len, b);
								backtrack(x_len, y_len, b, x);

								printf("\n");


								return 0;
							}
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									if (n == m) {
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "$$$$$" << endl;
									}
									cout << "#####################" << endl;
								}
								return 0;
							}*///19
							/*#include<iostream>
							using namespace std;
							class Division {
							public:
								static int q(int n, int m) {
									if (n < 1 || m < 1) {
										cout << n << " , " << m << " n < 1 || m < 1 ����" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 ����" << 1 << endl;
										return 1;
									}
									if (n < m) {
										int value = 0;
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << (value = q(n, n)) << endl;
										return value;
									}
									if(n==m){
										int value = 0;
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << (value = q(n, m - 1)) << " + 1" << endl;
										return value + 1;
									}
									int arg0 = 0;
									int arg1 = 0;
									cout << n << " , " << m << " n ���� m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
									return arg0 + arg1;
								}
								static void print(int n, int m) {
									cout << q(n, m) << endl;
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									for (int j = 0; j < 7; j++) {
										Division::print(i, j);
										cout << "##" << endl;
									}
									cout << "$$$$$$$$$$$$$$$$$$$$" << endl;
								}
								return 0;
							}*///3382-3348 20161113 200*29+31*50 -14-16//20//3654-3703 20161116 200*29+33*50 -14-16
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void print(int n, int a, int b, int c) {
									if (n <= 1) {
										cout <<"n = "<< n << " " << a << " -->  " << c << endl;
									}
									else {
										print(n - 1, a, c, b);
										cout << "n = " << n << " " << a << "-->" << c << endl;
										print(n - 1, b, a, c);
									}
								}
							};
							int main() {
								for (int i = 0; i < 5; i++) {
									Hanoi::print(i, 1, 2, 3);
									cout << "######" << endl;
								}
								return 0;
							}*///1
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void print(int n, int a, int b, int c) {
									if (n <= 1) {
										cout << " n <= 1 n = " << n << endl;
										cout << "n = " << n << " " << a << " --> " << c << endl;
									}
									else {
										cout << " n > 1 n = " << n << endl;
										print(n - 1, a, c, b);
										cout << "n = " << n << " " << a << "-->" << c << endl;
										print(n - 1, b, a, c);
									}
								}
							};
							int main() {
								for (int i = 0; i < 5; i++) {
									Hanoi::print(i, 1, 2, 3);
									cout << "$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
								}
								return 0;
							}*///2
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void print(int hanoiCount,  int a, int b, int c) {
									if (hanoiCount <= 1) {
										cout << "hanoiCountС�ڵ���1 count <= 1 count = " << hanoiCount << endl;
										cout << a << " --> " << c << endl;
									}
									else {
										cout << "count > 1 count = " << hanoiCount << endl;
										cout << "hanoiPrint(" << hanoiCount << "-1 , " << a << " , " << 9878 << " , " << b << ")" << endl;
										print(hanoiCount - 1, a, 9878, b);
										cout << a << "-->" << c << endl;
										cout << "hanoiPrint(" << hanoiCount << "-1 , " << b << " , " << a << " , " << c << ")" << endl;
										print(hanoiCount - 1, b, a, c);
									}
								}
							};
							int main() {
								for (int i = 0; i < 5; i++) {
									Hanoi::print(i, 1, 2, 3);
									cout << "#####################" << endl;
								}
								return 0;
							}*///3
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void print(int hanoiCount, int aColumn, int bColumn, int cColumn) {
									if (hanoiCount <= 1) {
										cout << "hanoiCountС�ڵ���1 count <= 1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << "hanoiCount > 1  aColumn��cColumn print(" << hanoiCount <<" , "<<aColumn<<" , "<<cColumn<<" , "<<bColumn<<")"<< endl;
										print(hanoiCount - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "hanoiCount > 1  aColumn��cColumn print(" << hanoiCount << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										print(hanoiCount - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 5; i++) {
									Hanoi::print(i, 1, 2, 3);
									cout <<"############################"<< endl;
								}
								return 0;
							}*///4
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn<<" print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << " --> " << cColumn << endl;
										cout << aColumn << "��" << bColumn << "����  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "######################" << endl;
								}
								return 0;//3767-3817 20161117 200*29+33*50 -28-16
							}*///5
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->"<<cColumn << endl;
										cout << aColumn << "��" << bColumn << "����  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "##########################" << endl;
								}
								return 0;
							}*///6
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << aColumn << "��" << bColumn << "����  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "####################" << endl;
								}
								return 0;
							}*///7
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn <<" --> "<< cColumn << endl;
										cout << aColumn << "��" << bColumn << "����  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "########################" << endl;
								}
								return 0;//3817-3867 20161119 200*29+34*50 -28-16
							}*///8
							/*#include<stdio.h>
							#pragma warning(disable:4996)
							int V[200][200];//ǰi����Ʒװ������Ϊj�ı����л�õ�����ֵ
							int max(int a, int b)
							{
								if (a >= b)
									return a;
								else return b;
							}

							int KnapSack(int n, int w[], int v[], int x[], int C)
							{
								int i, j;
								for (i = 0; i <= n; i++)
									V[i][0] = 0;
								for (j = 0; j <= C; j++)
									V[0][j] = 0;
								for (i = 0; i <= n - 1; i++)
									for (j = 0; j <= C; j++)
										if (j<w[i])
											V[i][j] = V[i - 1][j];
										else
											V[i][j] = max(V[i - 1][j], V[i - 1][j - w[i]] + v[i]);
								j = C;
								for (i = n - 1; i >= 0; i--)
								{
									if (V[i][j]>V[i - 1][j])
									{
										x[i] = 1;
										j = j - w[i];
									}
									else
										x[i] = 0;
								}
								printf("ѡ�е���Ʒ��:\n");
								for (i = 0; i<n; i++)
									printf("%d ", x[i]);
								printf("\n");
								return V[n - 1][C];

							}

							void main()
							{
								int s;//��õ�����ֵ
								int w[200];//��Ʒ������
								int v[200];//��Ʒ�ļ�ֵ
								int x[200];//��Ʒ��ѡȡ״̬
								int n, i;
								int C;//�����������
								n = 5;
								printf("�����뱳�����������:\n");
								scanf("%d", &C);

								printf("������Ʒ��:\n");
								scanf("%d", &n);
								printf("��ֱ�������Ʒ������:\n");
								for (i = 0; i<n; i++)
									scanf("%d", &w[i]);

								printf("��ֱ�������Ʒ�ļ�ֵ:\n");
								for (i = 0; i<n; i++)
									scanf("%d", &v[i]);

								s = KnapSack(n, w, v, x, C);

								printf("�����Ʒ��ֵΪ:\n");
								printf("%d\n", s);


							}/*
							#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn <<" aColumn��bColumn"<< " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << " - - > " << cColumn << endl;
										cout << aColumn << "��" << bColumn << "���� bColumn��cColumn print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "#############" << endl;
								}
								return 0;//3817-3867 20161121 200*29+35*50 -28-16-25
							}//9*/
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count<<" , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "#############################" << endl;
								}
								return 0;
							}*///10
							/*#include<stdio.h>
							int main() {
								int i = 5;
								int get(int*);
								get(&i);
								printf("%d\n", i);
								i = i++;
								printf("%d\n", i);
								return 0;
							}
							int get(int* i) {
								int temp = *i;
								(*i)=(*i)+1;
								return temp;
							}
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - >" << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "#######" << endl;
								}
								return 0;
							}*///11//3988-4038 20161123 200*29+35*50 -19
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "###########" << endl;
								}
								return 0;
							}*///12
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "####" << endl;
								}
								return 0;//4056-4106 20161124 200*29+35*50 -19-17
							}*///13
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "###########################" << endl;
								}
								return 0;
							}*///14
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCountС�ڵ���1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "###############################################################################" << endl;
								}
								return 0;//4107-4157 20161125 200*29+35*50 -19-18
							}*///15
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << aColumn << " - - > " << cColumn;
										cout << "	hanoiCountС�ڵ���1 " << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "############################################################################################" << endl;
								}
								return 0;
							}*///16
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << aColumn << " - - > " << cColumn;
										cout << "	hanoiCountС�ڵ���1 " << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "############################################################################################" << endl;
								}
								return 0;
							}*///17
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn,int cColumn) {
									if (count <= 1) {
										cout << aColumn << " - - > " << cColumn;
										cout << "	hanoiCountС�ڵ���1 " << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "######################################################################################" << endl;
								}
								return 0;
							}*///18
							/*#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << aColumn << " - - > " << cColumn;
										cout << "	hanoiCountС�ڵ���1 " << endl;
									}
									else {
										cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
										cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
										hanoiPrint(count - 1, bColumn, aColumn, cColumn);
									}
								}
							};
							int main() {
								for (int i = 0; i < 7; i++) {
									Hanoi::hanoiPrint(i, 1, 2, 3);
									cout << "##############################################################################" << endl;
								}
								return 0;
							}*///19
							/*#include <iostream>
							#include<stack>
							#pragma warning(disable:4996)
							#define M 100
							#define N 100
							using namespace std;

							typedef struct node
							{
								int matrix[N][M];      //�ڽӾ���
								int n;                 //������
								int e;                 //����
							}MGraph;

							void DijkstraPath(MGraph g, int *dist, int *path, int v0)   //v0��ʾԴ����
							{
								int i, j, k;
								bool *visited = (bool *)malloc(sizeof(bool)*g.n);
								for (i = 0; i<g.n; i++)     //��ʼ��
								{
									if (g.matrix[v0][i]>0 && i != v0)
									{
										dist[i] = g.matrix[v0][i];
										path[i] = v0;     //path��¼���·���ϴ�v0��i��ǰһ������
									}
									else
									{
										dist[i] = INT_MAX;    //��i����v0ֱ�����ڣ���Ȩֵ��Ϊ�����
										path[i] = -1;
									}
									visited[i] = false;
									path[v0] = v0;
									dist[v0] = 0;
								}
								visited[v0] = true;
								for (i = 1; i<g.n; i++)     //ѭ����չn-1��
								{
									int min = INT_MAX;
									int u;
									for (j = 0; j<g.n; j++)    //Ѱ��δ����չ��Ȩֵ��С�Ķ���
									{
										if (visited[j] == false && dist[j]<min)
										{
											min = dist[j];
											u = j;
										}
									}
									visited[u] = true;
									for (k = 0; k<g.n; k++)   //����dist�����ֵ��·����ֵ
									{
										if (visited[k] == false && g.matrix[u][k]>0 && min + g.matrix[u][k]<dist[k])
										{
											dist[k] = min + g.matrix[u][k];
											path[k] = u;
										}
									}
								}
							}

							void showPath(int *path, int v, int v0)   //��ӡ���·���ϵĸ�������
							{
								stack<int> s;
								int u = v;
								while (v != v0)
								{
									s.push(v);
									v = path[v];
								}
								s.push(v);
								while (!s.empty())
								{
									cout << s.top() << " ";
									s.pop();
								}
							}

							int main(int argc, char *argv[])
							{
								int n, e;     //��ʾ����Ķ������ͱ���
								while (cin >> n >> e&&e != 0)
								{
									int i, j;
									int s, t, w;      //��ʾ����һ����s->t,ȨֵΪw
									MGraph g;
									int v0;
									int *dist = (int *)malloc(sizeof(int)*n);
									int *path = (int *)malloc(sizeof(int)*n);
									for (i = 0; i<N; i++)
										for (j = 0; j<M; j++)
											g.matrix[i][j] = 0;
									g.n = n;
									g.e = e;
									for (i = 0; i<e; i++)
									{
										cin >> s >> t >> w;
										g.matrix[s][t] = w;
									}
									cin >> v0;        //����Դ����
									DijkstraPath(g, dist, path, v0);
									for (i = 0; i<n; i++)
									{
										if (i != v0)
										{
											showPath(path, i, v0);
											cout << dist[i] << endl;
										}
									}
								}
								return 0;
}*/
/*#include<iostream>
#include<sstream>
#include<string>
#define maxInt 512
#define N_INT 11
#pragma warning(disable:4996)
using namespace std;
template<class Type>
class DijkstraAlgorithm {
private:
	const int indexCount;
	int fromVertexIndex;
	Type *distance;
	int *previous;
	Type**weighted;//weighted
public:
	DijkstraAlgorithm(const int n,int v,Type dist[],int prev[],Type**c):indexCount(n) {
		fromVertexIndex = v;
		distance = dist;
		previous = prev;
		weighted = c;
	}
	void dijkstra() {
		dijkstra(indexCount, fromVertexIndex, distance, previous, weighted);
	}
	void dijkstra(const int n, int v, Type dist[], int prev[], Type **c) {	
		bool vertexSetBool[maxInt] = { 0 };
		for (int i = 1; i <= n; i++) {
			dist[i] = *((int*)c + N_INT*v + i);
			vertexSetBool[i] = false;
			if (dist[i] == maxInt) {
				prev[i] = 0;
			}
			else {
				prev[i] = v;
			}
		}
		dist[v] = 0;
		vertexSetBool[v] = true;
		for (int i = 1; i < n; i++) {			
			int temp = maxInt;
			int u = v;
			for (int j = 1; j <= n; j++) {				
				if ((!vertexSetBool[j]) && (dist[j] < temp)) {
					u = j;
					temp = dist[j];
				}
			}
			vertexSetBool[u] = true;
			for (int j = 1; j <= n; j++) {				
				if ((!vertexSetBool[j]) && (*((int*)c + N_INT*u + j) < maxInt)) {
					Type newdist = dist[u] + *((int*)c + N_INT*u + j);
					if (newdist < dist[j]) {
						dist[j] = newdist;
						prev[j] = u;
					}
				}
			}
		}
	}
	void pathPrint(int*previous, int fromVertexIndex, int toVertexIndex) {
		if (previous[toVertexIndex] == 0) {
			if (fromVertexIndex != toVertexIndex) {
				cout << "û�д� [" << fromVertexIndex << "] ���� [" << toVertexIndex << "] �����·��";
				return;
			}
		}
		else {
			pathPrint(previous, fromVertexIndex, previous[toVertexIndex]);
			cout << " --> ";
		}
		cout << toVertexIndex;
	}
	void pathPrint(int fromVertexIndex, int toVertexIndex) {
		if (previous[toVertexIndex]!=0||fromVertexIndex==toVertexIndex) {
			cout << "����[" << fromVertexIndex << "] �� ����[" << toVertexIndex << "] �����·����";
		}
		pathPrint(previous, fromVertexIndex, toVertexIndex);
		if (distance[toVertexIndex] != maxInt) {
			cout << "		���·�����ȣ�" << distance[toVertexIndex];
		}
	}
};
int main() {
	int weighted[N_INT][N_INT] = {
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt },
		{ maxInt,maxInt,maxInt,40,maxInt,maxInt,maxInt,30,maxInt,maxInt,maxInt },
		{ maxInt,24,maxInt,maxInt,18,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt },//{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,90,20,maxInt,maxInt,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,54,maxInt,maxInt,maxInt,maxInt,maxInt },
		{ maxInt,maxInt,25,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,30,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,50 },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,60,maxInt,maxInt,30,maxInt,maxInt },
		{ maxInt,maxInt,50,maxInt,maxInt,20,maxInt,maxInt,maxInt,45,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,12,maxInt }
	};
	for (int i = 1; i < N_INT; i++) {
		int distance[N_INT] = { 0 };
		int previous[N_INT] = { 0 };
		DijkstraAlgorithm<int> dijkstraCase(N_INT - 1, i, distance, previous, (int**)weighted);		
		dijkstraCase.dijkstra();
		for (int j = 1; j < N_INT; j++) {
			dijkstraCase.pathPrint(i, j);
			cout << endl;
		}
		cout << "``````````````````````````````````````````````````````````````````````````````````````````````````" << endl;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
class Hanoi {
public:
	static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
		if (count <= 1) {
			cout << aColumn << " - - > " << cColumn;
			cout << "	hanoiCountС�ڵ���1 " << endl;
		}
		else {
			cout << bColumn << "����" << cColumn << " aColumn��bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
			hanoiPrint(count - 1, aColumn, cColumn, bColumn);
			cout << aColumn << "-->" << cColumn;
			cout << "		aColumn��cColumn" << "��print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")�ĺ���" << endl;
			cout << aColumn << " , " << bColumn << "���� bColumn��cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
			hanoiPrint(count - 1, bColumn, aColumn, cColumn);
		}
	}
};
int main() {
	for (int i = 0; i < 7; i++) {
		Hanoi::hanoiPrint(i, 1, 2, 3);
		cout << "#############################################################################################" << endl;
	}
	return 0;
}*///20//4211-4261 20161127 -200*29-35*50 +19+20
/*#include<iostream>
#define maxInt 256
#define columnCount 11
using namespace std;
template<class Type>
class primAlgorithm {
private:
	int vertexCount;
	Type**weightedMatrix;
public:
	primAlgorithm(int n,Type**c) {
		vertexCount = n;
		weightedMatrix = c;
	}
	void printSpanningTree() {
		cout<<"��С�����������ӣ�"<< endl;
		prim();
	}
	void prim() {
		prim(vertexCount, weightedMatrix);
	}
	void prim(int n, Type**c) {
		Type lowcost[maxInt];
		int closest[maxInt];
		bool vertexSetBool[maxInt];
		vertexSetBool[1] = true;
		for (int i = 2; i <= n; i++) {
			lowcost[i] = *((int*)c + 1 * columnCount + i);
			closest[i] = 1;
			vertexSetBool[i] = false;
		}
		for (int i = 1; i < n; i++) {
			Type min = maxInt;
			int j = 1;
			for (int k = 2; k <= n; k++) {
				if ((lowcost[k] < min) && (!vertexSetBool[k])) {
					min = lowcost[k];
					j = k;
				}
			}
			cout << "[" << j << "] ���� [" << closest[j] << "]" << endl;
			vertexSetBool[j] = true;
			for (int k = 2; k <= n; k++) {
				if ((*((int*)c + j*columnCount + k) < lowcost[k]) && (!vertexSetBool[k])) {//*((int*)c+j*columnCount+k)
					lowcost[k] = *((int*)c + j*columnCount + k);
					closest[k] = j;
				}
			}
		}
	}
};
int main() {
	int weightedMatrix[columnCount][columnCount] = {
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt },
		{maxInt,0,6,1,5,5,maxInt,maxInt,maxInt,maxInt,maxInt },
		{maxInt,6,0,maxInt,maxInt,maxInt,3,maxInt,maxInt,maxInt,maxInt },
		{ maxInt,1,maxInt,0,6,maxInt,5,6,maxInt,maxInt,maxInt },
		{ maxInt,5,maxInt,6,0,maxInt,maxInt,6,5,maxInt,maxInt },
		{ maxInt,5,maxInt,maxInt,maxInt,0,maxInt,maxInt,2,maxInt,maxInt },
		{ maxInt,maxInt,3,5,maxInt,maxInt,0,6,maxInt,3,maxInt },
		{ maxInt,maxInt,maxInt,6,6,maxInt,6,0,4,maxInt,maxInt },
		{ maxInt,maxInt,maxInt,maxInt,5,2,maxInt,4,0,maxInt,2 },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,3,maxInt,maxInt,0,6 },
		{ maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,maxInt,2,6,0 }
	};
	primAlgorithm<int> primCase(columnCount-1,(int**)weightedMatrix);
	primCase.printSpanningTree();	
	return 0;
}*///4548-4598 20161202 -200*29-35*50 +26
/*#include<iostream>
#include<sstream>
#include<string>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int index = 0;
//����������������������
template<class Type>
class QuickSort {
public:
	void quickSort(Type *arrayInt, int startIndex, int endIndex) {
		if (startIndex<endIndex) {
			//##
			arrayString = "quickSort��[";
			for (index = startIndex; index <=endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			int divideIndex = partition(arrayInt, startIndex, endIndex);
			quickSort(arrayInt, startIndex, divideIndex - 1);
			quickSort(arrayInt, divideIndex + 1, endIndex);
		}
	}
	int partition(Type *arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		Type tempType = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempType && tempStartIndex<tempEndIndex)��";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempType) + " && " + returnString(tempStartIndex+1) + " < " + returnString(endIndex) + ")��";
			arrayString+=returnString(arrayInt[tempStartIndex + 1] < tempType&&(tempStartIndex+1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[++tempStartIndex] < tempType&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempType && tempStartIndex<tempEndIndex)��";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempType) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempType && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempType)��";
			arrayString += "while("+returnString(arrayInt[tempEndIndex-1])+" > "+returnString(tempType)+")��";
			arrayString += returnString(arrayInt[tempEndIndex-1] > tempType);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[--tempEndIndex] > tempType) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempType)��";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempType) + ")��";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempType);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) { 
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex <<"��"<< (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break; 
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpInt = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpInt;
		}
		//###
		cout <<"arrayInt[startIndex]��arrayInt[tempEndIndex]������"<< "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempType;
		return tempEndIndex;
	}	
};
int main() {
	int arrayInt[] = { 103,200,108,202,104,201,101,120,230,106,105,107,109 };
	QuickSort <int>caseQuickSort;
	//##
	arrayString = "[";
	for (index = 0; index < sizeof(arrayInt)/sizeof(arrayInt[0]); index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//������$$$$$$$$$$$$$$$$$$$$$$$$$$$$$����������������������������4
	caseQuickSort.quickSort(arrayInt, 0, sizeof(arrayInt) / sizeof(arrayInt[0])-1);
	//##
	arrayString = "[";
	for (index = 0; index < sizeof(arrayInt) / sizeof(arrayInt[0]); index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//������$$$$$$$$$$$$$������������������������������������������4
	return 0;
}*///1`````````````````````````````````````````````````````````````
/*#include<iostream>
class Perm {
public:
	template<class Type>
	static void printValue(Type list[], int startIndex, int endIndex) {
		using std::cout;
		using std::endl;
		if (startIndex == endIndex) {
			for (int i = 0; i <= endIndex; i++) {
				cout << list[i] << " ";
			}
			cout << endl;
		}
		else {
			for (int i = startIndex; i <= endIndex; i++) {
				//##
				cout << "	��������";
				for (int i = startIndex; i <= endIndex; i++) {
					cout << list[i];
				}
				cout << endl;
				//$$
				Type tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
				printValue(list, startIndex + 1, endIndex);
				tmp = list[i];
				list[i] = list[startIndex];
				list[startIndex] = tmp;
			}
		}
	}
};
int main() {
	char c[] = { 'a','b','c','d','e' };
	Perm::printValue(c, 0, sizeof(c) / sizeof(c[0]) - 1);
	return 0;
}*/
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int index = 0;
int arraySize = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString;
			arrayString = "�������飺[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString <<"startIndex:"<<startIndex<<" , endIndex:"<<endIndex<< endl;
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			arrayString = "ǰ�ֶ����飺[";
			for (index = startIndex; index <= distinguishIndex-1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex,distinguishIndex - 1);
			//##
			arrayString = "��ֶ����飺[";
			for (index = distinguishIndex+1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
		}
	}
	int partition(int *arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)��";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[++tempStartIndex] < tempInt&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)��";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 87,82,53,24,15,97,23,54 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	arrayString = "[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	return 0;
}*///2
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int index = 0;
int arraySize = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString;
			arrayString = "�������飺[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << "startIndex:" << startIndex << " , endIndex:" << endIndex << endl;
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			arrayString = "ǰ�ֶ����飺[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "��ֶ����飺[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)��";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[++tempStartIndex]<tempInt && tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)��";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, sizeof(arrayInt) / sizeof(arrayInt[0])-1);
	return 0;
}*///3
/*#include<iostream>
using namespace std;
void print(int n) {
	if (n == 1) {
		cout << n << endl;
	}
	else {
		//cout << n << endl;
		cout << "����print(" << n << " - 1)" << endl;
		print(n - 1);
		cout << "����print(" << n << " - 1)" << endl;
		cout << n << endl;
	}
}
int main() {
	print(10);
	return 0;
}*/
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int index = 0;
int arraySize = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString <<", "<< distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex+1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {		
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[++tempStartIndex] < tempInt&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)��";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")��";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout <<"arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������"<< "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmp = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmp;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 92,91,93,98,99 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	return 0;
}*///4
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int *arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex]&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1])   + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex-1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex-1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 93,98,82,77 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///5
/*#include<iostream>
#include<sstream>
#include<string>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt,startIndex,endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) { 
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 79,87,98,22,25 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///6
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,23,12 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///7
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort{
public:
	void quickSort(int *arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,23,12,33 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///8
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex){
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while(tempInt>arrayInt[++tempStartIndex]&&tempStartIndex<endIndex){
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while(tempInt<arrayInt[--tempEndIndex]){
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,23,12,33,25 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///9
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt,int startIndex,int endIndex){
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,23,44,12,33,25 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///10
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex=partition(arrayInt,startIndex,endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,23,44,12,33,25 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///11
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex-1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������

		}
	}
	int partition(int*arrayInt,int startIndex,int endIndex){
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 32,44,33,25 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///12
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { c };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///13
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		} 
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������		
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 98,97,92,91 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///14
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int *arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]){
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 3,2,1,4,6 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*////15
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex > tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempStartIndex;
	}
};
int main() {
	int arrayInt[] = { 1,2,3,4,5 };
	QuickSort caseQuickSort;
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///16
/*#include<iostream>
using namespace std;
class CutNoodle {
public:
	int getNoodles(int flodedNum) {
		if (flodedNum == 0) {
			return 2;
		}
		else {
			return 2 * getNoodles(flodedNum - 1) - 1;
		}
	}
};
int main(){
	CutNoodle caseCutNoodle;
	for (int i = 0; i < 11; i++) {
		cout << "������� " << i << " �Σ��м���һ�������Եõ� ";
		cout << caseCutNoodle.getNoodles(i);
		cout << "������" << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
	string valueString;
	stringstream stringStream;
	stringStream << value;
	stringStream >> valueString;
	return valueString;
}
string arrayString;
int arraySize = 0;
int index = 0;
//����������������������
class QuickSort {
public:
	void quickSort(int*arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
		//����������������������������������������������
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << arrayString << endl;
			arrayString = "[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//������������������������������������������������������
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			cout << "	distinguishIndex = " << distinguishIndex << endl;
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size()>3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$��������������������������������������
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$������������������������������������������������������
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "��[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//������������������������������������������������������
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "��[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//������������������������������������������������������
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
				//����������������������������������
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
			//��������������������������������������������������
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
		//��������������������������������������������������
		arrayInt[startIndex] = arrayInt[tempEndIndex];
		arrayInt[tempEndIndex] = tempInt;
		return tempEndIndex;
	}
};
int main() {
	int arrayInt[] = { 31,21,32,97,98,77 };
	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	QuickSort caseQuickSort;
	caseQuickSort.quickSort(arrayInt, 0, arraySize - 1);
	//##
	arrayString = "\n\n\n[";
	for (index = 0; index < arraySize; index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//����������������������������������������������������������������������������
	return 0;
}*///17
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main() {
	char *env_path = "PATH";
	char *env_value = NULL;
	env_value = getenv(env_path);
	if (NULL == env_value)
		printf("Not found!\n");
	printf("Get Env PATH:\n%s", env_value);
	return 0;
}
//#include<iostream>
//#include<sstream>
//#include<string>
//using namespace std;
////##
//inline string returnString(int value) {
//	string valueString;
//	stringstream stringStream;
//	stringStream << value;
//	stringStream >> valueString;
//	return valueString;
//}
//string arrayString;
//int arraySize = 0;
//int index = 0;
////����������������������
//class QuickSort {
//public:
//	void quickSort(int*arrayInt, int startIndex, int endIndex) {
//		//##
//		cout << "startIndex < endIndex��" << startIndex << " < " << endIndex << "��" << (startIndex < endIndex) << endl;
//		//����������������������������������������������
//		if (startIndex < endIndex) {
//			//##
//			arrayString = "[";
//			for (index = 0; index < arraySize; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size() > 3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << arrayString << endl;
//			arrayString = "[";
//			for (index = startIndex; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			arrayString.erase(arrayString.size() - 2, 2);
//			arrayString += "]";
//			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)��" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
//			//������������������������������������������������������
//			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
//			//##
//			cout << "	distinguishIndex = " << distinguishIndex << endl;
//			arrayString = "[";
//			for (index = startIndex; index <= distinguishIndex - 1; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size() > 3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
//			//$$$$$$$$$$4$$$$$$$��������������������������������������
//			quickSort(arrayInt, startIndex, distinguishIndex - 1);
//			//##
//			arrayString = "[";
//			for (index = startIndex; index <= distinguishIndex - 1; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size()>3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << "����quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)��" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
//			//$$$$$$$$$$4$$$$$$$��������������������������������������
//			//##
//			arrayString = "[";
//			for (index = distinguishIndex + 1; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size() > 3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
//			//$$$������������������������������������������������������
//			quickSort(arrayInt, distinguishIndex + 1, endIndex);
//			//##
//			arrayString = "[";
//			for (index = distinguishIndex + 1; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size() > 3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << "����quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)��" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
//			//$$$������������������������������������������������������
//		}
//	}
//	int partition(int*arrayInt, int startIndex, int endIndex) {
//		int tempStartIndex = startIndex;
//		int tempEndIndex = endIndex + 1;
//		int tempInt = arrayInt[startIndex];
//		while (true) {
//			//##
//			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
//			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
//			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "��[";
//			for (index = 0; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			arrayString.erase(arrayString.size() - 2, 2);
//			arrayString += "]";
//			cout << arrayString << endl;
//			//������������������������������������������������������
//			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
//				//##
//				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)��";
//				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")��";
//				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "��[";
//				for (index = 0; index <= endIndex; index++) {
//					arrayString += returnString(arrayInt[index]) + " ,";
//				}
//				arrayString.erase(arrayString.size() - 2, 2);
//				arrayString += "]";
//				cout << arrayString << endl;
//				//������������������������������������������������������
//			}
//			//##
//			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
//			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
//			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
//			arrayString += "��[";
//			for (index = tempStartIndex; index < tempEndIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			arrayString.erase(arrayString.size() - 2, 2);
//			arrayString += "]";
//			cout << arrayString << endl;
//			//������������������������������������������������������
//			while (tempInt < arrayInt[--tempEndIndex]) {
//				//##
//				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])��";
//				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")��";
//				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
//				arrayString += "��[";
//				for (index = tempStartIndex; index < tempEndIndex; index++) {
//					arrayString += returnString(arrayInt[index]) + " ,";
//				}
//				arrayString.erase(arrayString.size() - 2, 2);
//				arrayString += "]";
//				cout << arrayString << endl;
//				//������������������������������������������������������
//			}
//			if (tempStartIndex >= tempEndIndex) {
//				//##
//				cout << "tempStartIndex >= tempEndIndex��" << tempStartIndex << " >= " << tempEndIndex << "��" << (tempStartIndex >= tempEndIndex) << "������while(true)" << endl;
//				//����������������������������������
//				break;
//			}
//			//###
//			cout << "arrayInt[tempStartIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << tempStartIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[tempStartIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
//			//��������������������������������������������������
//			int tmpValue = arrayInt[tempStartIndex];
//			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
//			arrayInt[tempEndIndex] = tmpValue;
//		}
//		//###
//		cout << "arrayInt[startIndex]��arrayInt[tempEndIndex]������" << "arrayInt[" << startIndex << "]��arrayInt[" << tempEndIndex << "]��" << arrayInt[startIndex] << " �� " << arrayInt[tempEndIndex] << "����" << endl;
//		//��������������������������������������������������
//		arrayInt[startIndex] = arrayInt[tempEndIndex];
//		arrayInt[tempEndIndex] = tempInt;
//		return tempEndIndex;
//	}
//};
//int main() {
//	int arrayInt[] = { 32,23,12,43,15,21,55 };
//	arraySize = sizeof(arrayInt) / sizeof(arrayInt[0]);
//	QuickSort caseQuickSort;
//	caseQuickSort.quickSort(arrayInt, 0, sizeof(arrayInt) / sizeof(arrayInt[0])-1);
//	//##
//	arrayString = "\n\n\n[";
//	for (index = 0; index < arraySize; index++) {
//		arrayString += returnString(arrayInt[index]) + " ,";
//	}
//	arrayString.erase(arrayString.size() - 2, 2);
//	arrayString += "]";
//	cout << arrayString << endl;
//	cout << ((short*)1) << endl;
//	cout << sizeof(short) << endl;
//	cout << ((short*)1+1) << endl;
//	cout << (int(((short*)1 + 1))) << endl;
//	//����������������������������������������������������������������������������
//	return 0;
//}
//18
//19
//19
//20������������������������������������������������������������
//1`````````````````````````````````````````````````````````````
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//19
//20������������������������������������������������������������
/*#include<iostream>
template<class Type>
class Dijkstra {
public:
	void dijkstra(int n, int v, Type dist[], int prev[], Type**c) {
	}
};
int main() {
	return 0;
}*/
//1`````````````````````````````````````````````````````````````
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//19
//20������������������������������������������������������������
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Sort {
private:
public:
void insertionSort(int*arrayInt,const int arraySize) {
for (int index = 1; index < arraySize; index++) {
int tempInt = arrayInt[index];
while (tempInt < arrayInt[index - 1] && index >= 0) {
arrayInt[index] = arrayInt[index - 1];
index--;
}
arrayInt[index] = tempInt;
}
}
};
class binarySearch {
public:
binarySearch(int *arrayInt, int arraySize, int toFindNum) {
//##
string outputString = "[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
outputString += temp + " ,";
}
outputString.erase(outputString.size() - 1, 1);
outputString += "]";
cout << outputString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$
int frontIndex = 0;
int behindIndex = arraySize - 1;
int middleIndex = (frontIndex+behindIndex) / 2;
while (frontIndex != behindIndex) {
cout << "middleIndex:" << middleIndex << "	arrayInt[" << middleIndex << "]:" << arrayInt[middleIndex] << endl;
if (toFindNum == arrayInt[middleIndex]) {
cout << "�ҵ� " << arrayInt[middleIndex] << "	array[" << middleIndex << "]" << endl;
return;
}
else if (toFindNum < arrayInt[middleIndex]) {
behindIndex = middleIndex;
}else{
frontIndex = middleIndex+1;
}
middleIndex = (behindIndex + frontIndex) / 2;
}
cout << "û��" << toFindNum << endl;
}
};
int main(){
int arrayInt[] = { 12,11,10,9,8,1,2,3,4,5,6,7 };
Sort sortCase;
sortCase.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
for (int i = 0; i < 98; i++) {
binarySearch(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]), i);
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
}
return 0;
}*///1
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Sort {
public://void insertionSort(int*arrayInt,const int arraySize) {
void insertionSort(int*arrayInt, const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempInt = arrayInt[i];
int index = i;
while (tempInt < arrayInt[index-1]&&index>=0) {
arrayInt[index] = arrayInt[index - 1];
index--;
}
arrayInt[index] = tempInt;
}
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
};
template<class Type>
int binarySearch(Type *a, const Type&x, int arraySize) {
int left = 0;
int right = arraySize - 1;
while (left <= right) {
int middle = (left + right) / 2;
if (x == a[middle]) {
cout << "�ҵ�" << a[middle] << " array[" <<middle<< "]" << endl;
return middle;
}
if (x > a[middle]) {
left = middle + 1;
}
else {
right = middle - 1;
}
}
cout << "û��" << x << endl;
return -1;
}
int main() {
int arrayInt[] = { 1,2,34,5,6,9,8,98,12,14,15,16,17,98,97,96,87,86,85,84 };
Sort sortCase;
sortCase.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
for (int i = 0; i < 99; i++) {
binarySearch(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
cout <<"```````````````````````````````````````````````````````````````````````````````"<< endl;
}
return 0;//4586-4636 20161204 -200*29-36*50 +26
}*///2
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Sort {
public:
void insertionSort(int*arrayInt,const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempInt = arrayInt[i];
int tempIndex = i;
while (tempInt < arrayInt[tempIndex-1] && tempIndex >= 0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//arrayInt[tempIndex] = tempInt;
//##
string arrayString = "		[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl << "````````````````````````````````````````````````````````````````````````" << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
//##
string arrayString = "	[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
};
inline string toString(int valueInt) {
string valueString = "";
stringstream stringStream;
stringStream << valueInt;
stringStream >> valueString;
return valueString;
}
template<class Type>
int binarySearch(int*arrayInt, const Type &toFindNum, const int arraySize) {
int left = 0;
int right = arraySize - 1;
while (left <= right) {
int middle = (left + right) / 2;
//###
string binarySearchString = "[left = ";
string temp;
stringstream stringStream;
stringStream << left;
stringStream >> temp;
binarySearchString += temp + " , right = ";
stringStream << right;
stringStream >> temp;
binarySearchString += temp + " , (";//"($right + $left) / 2 = middle = $middle , arrayInt[$middle] = arrayInt[middle]"
binarySearchString += toString(right);
binarySearchString += " + ";
binarySearchString += toString(left);
binarySearchString += ") / 2 = middle = ";
binarySearchString += toString(middle);//arrayInt[$middle] = arrayInt[middle]"
binarySearchString += " , arrayInt[";
binarySearchString += toString(middle);
binarySearchString += "] = ";
binarySearchString += toString(arrayInt[middle]);
binarySearchString += "]";
cout << binarySearchString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$
if (toFindNum == arrayInt[middle]) {
cout << "�ҵ�" << arrayInt[middle] << endl;
return middle;
}
if (toFindNum> arrayInt[middle]) {
left = middle + 1;
}
else {
right = middle - 1;
}
}
return -1;
}
int main() {
int arrayInt[] = {98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81};
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
for (int i = 81; i < 99; i++) {
binarySearch(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
}
return 0;
}*///3
/***********************************************************************************************************
*   Source File Name :   LGY_DISK_Scheduler.cpp                                                            *
*   Project Name:        LGY_DISK_Scheduler                                                                *
*   Engineer:            ������                                                                            *
*   Date Generated:      2007-11-29                                                                        *
*   Last Revision Date:  2012-06-04                                                                        *
*   Brief Description:	                                                                                   *
*   �١�ʵ��Ŀ��                                                                                           *
*   	a���۲졢������ϵͳ�Ĵ��̵��ȷ�������ͨ��һ���򵥵Ĵ��̵���ģ������ʵ�֣�����Դ��̵��ȵ���⡣*
*   	b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������                                      *
*   �ڡ�ʵ������                                                                                           *
*		a��ģ��ʵ�ִ��̵����㷨��FCFS�����Ѱ�����ȣ������㷨��ʵ������֮һ����                      *
*	    b���ŵ��������˳�����û����루��ͨ����ָ�����ı��ļ���TXT�ļ�����ȡ������                         *
*	�ۡ�ʵ��Ҫ��                                                                                           *
*	    a��ʹ��ģ�黯���˼������ơ�                                                                      *
*   	b�������������͸����㷨����������ͼ��                                                              *
*   	c��ѧ���ɰ�����������������ѡ����õ��㷨��                                                        *
*	�ܡ����н��                                                                                           *
*	   a���������̵����㷨ģ�����Խ���Ѱ���������������                                               *
*	�����                                                                                                 *
*   	��һ�У���ţ�                                                                                     *
*   	�ڶ��У��ŵ��ķ���˳��                                                                           *
*    	�����У��ƶ��Ĵŵ�����                                                                             *
*	    ����������ƶ��ŵ�����ƽ���ƶ��ŵ�����                                                           *
*	                                                                                                       *
*	���������:�����ȷ����㷨�����Ѱ�����ȵ����㷨�������㷨                                              *
*	VC++6.0����ͨ��     ��Ŀ���ͣ�Win32 Console Application                                                *
*                                                                                                          *
************************************************************************************************************/
/*
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
const int MAXQUEUE = 200; //�������������󳤶�


//�ŵ�������ṹ�嶨��
typedef struct TRACK_Node
{
int iGo;		//Ҫ���ʵĴŵ���
int iBeVisited;	//�ŵ��Ƿ��Ѿ����ʱ�־��1���ѷ��ʣ�0��δ���ʣ�
}TRACK;


TRACK queue[MAXQUEUE]; //�ŵ��������������


int iReqNum = 0;			//�ŵ�����������
int iStart = 0;			//��ͷ��ʼλ��
int iNow = 0;				//��ͷ��ǰλ��
int iSum = 0;				//���ƶ��ŵ���
int iInput;				//�û���ǰ���������
char sFileName[20];		//�ļ���

void Init();			//��ʼ������
void Reset();			//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
int ReadTrackFile();	//����ŵ������ļ�
void FCFS();			//�����ȷ�������㷨
void SSTF();			//���Ѱ�����ȵ����㷨
void SCAN();			//���ݵ����㷨
void Version();			//��ʾ��Ȩ��Ϣ����
void Hint();			//��ʾʵ����ʾ��Ϣ����


void Init()	//��ʼ������
{
int i;

for (i = 0; i<MAXQUEUE; i++)
{
queue[i].iGo = -1;		//����Ҫ���ʵĴŵ���Ϊ�����ܵ���-1����������������ŵ���
queue[i].iBeVisited = 0;	//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ0��δ����
}

} //void Init()


void Reset()	//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
{
int i;

for (i = 0; i<iReqNum; i++)
{
queue[i].iBeVisited = 0; 	//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ0��δ����
}

printf("\n	�������ͷ�ĳ�ʼ�ŵ��ţ�������:  ");
scanf("%d", &iStart);	//�ӱ�׼�����ȡ�û���ǰ����Ĵ�ͷ��ʼλ��
iNow = iStart;			//��ͷ��ǰλ��
iSum = 0;					//���ƶ��ŵ���

} //void Reset()


int ReadTrackFile() //����ŵ������ļ�
{
FILE *fp;
int iTemp;
char cHead;

cout << "	\n	������Ҫ�򿪵Ĵŵ��������ı����ļ�����ע�⣺����·�����ͺ�׺����:  ";
cin >> sFileName; 		//�ӱ�׼�����ȡ�û���ǰ������ļ���

if ((fp = fopen(sFileName, "r")) == NULL)
{
cout << endl << "	���󣺴ŵ������ļ� " << sFileName << " �򲻿��������ļ�����·��!!" << endl;
return -1;

}
else
{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9)	//���˿ո񡢻��к�TAB�ַ�
{
cHead = fgetc(fp);
}
if (cHead == EOF)
{
printf("	���󣺴ŵ������ļ���%s Ϊ��!!\n", sFileName);
return -1;
}
else
{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp))	//���ļ�������Ĵŵ������δ���ŵ��������������
{
fscanf(fp, "%d ", &iTemp);
queue[iReqNum].iGo = iTemp;
iReqNum++;	//�ŵ�����������
}
}
}	//if((fp=fopen(sFileName,"r"))==NULL)

return 0;

} //void ReadTrackFile()


void FCFS() //�����ȷ�������㷨
{
int i;

Reset();	//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���

cout << endl << "---------------------------------------------" << endl;

cout << "	�����ȷ�������㷨�ĵ��Ƚ��:  " << endl << endl;
cout << "	    ��ʼ�ŵ���:  " << iStart << endl;
cout << "	���  ��һ�ŵ���  �ƶ��Ĵŵ���" << endl;

for (i = 0; i<iReqNum; i++)
{
//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[i].iGo << "      " << abs(queue[i].iGo - iNow) << endl;
iSum += abs(queue[i].iGo - iNow);		//�ۼ����ƶ��ŵ���
iNow = queue[i].iGo;					//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
}
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);

} //void FCFS()




void SCAN()	//���ݵ����㷨
{
int i, j;
int iNext;		//�������ʵ���һδ���ʴŵ������������queue�е��±�
int iMinMove;	//��ǰ���������Ѱ������

cout << endl << "---------------------------------------------" << endl;

cout << endl << "	��ѡ���ͷ��ʼ����1 OR 2����" << endl << endl;
cout << "	1  ��ͷ��ʼ����" << endl << endl << "	2  ��ͷ��ʼ����" << endl << endl << "	";

cin >> iInput;	//�ӱ�׼�����ȡ�û���ǰ���������

switch (iInput)	//�û���ǰ���������
{
case 1:			//��ͷ��ʼ����
Reset();	//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���

cout << endl << "---------------------------------------------" << endl;

cout << "	���ݵ����㷨������ͷ��ʼ���ڵĵ��Ƚ��:  " << endl << endl;
cout << "	    ��ʼ�ŵ���:  " << iStart << endl;
cout << "	���  ��һ�ŵ���  �ƶ��Ĵŵ���" << endl;

for (i = 0; i<iReqNum; i++)
{
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++)	//Ѱ�ҵ�ǰ������Ѱ��������̵�δ���ʴŵ������������queue�е��±�
{
if ((queue[j].iBeVisited == 0) && (queue[j].iGo >= iNow))
{
if (abs(queue[j].iGo - iNow)<iMinMove)
{
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
} //if(abs(queue[j].iGo-iNow)<iMinMove)
} //if((queue[j].iBeVisited==0)&&(queue[j].iGo>=iNow))
} //for(j=0;j<iReqNum;j++)

if (iNext != -1)
{
//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;					//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;				//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ1���ѷ���
} //if(iNext!=-1)

else	//��ͷ����
{
for (j = 0; j<iReqNum; j++)		//Ѱ�ҵ�ǰ������Ѱ��������̵�δ���ʴŵ������������queue�е��±�
{
if ((queue[j].iBeVisited == 0) && (queue[j].iGo<iNow))
{
if (abs(queue[j].iGo - iNow)<iMinMove)
{
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)

//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;				 	//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;				//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ1���ѷ���

} //if(iNext!=-1)
} //for(i=0;i<iReqNum;i++)

cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);

break;

case 2:			//��ͷ��ʼ����
Reset();
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "���ݵ����㷨---��ͷ��ʼ����ĵ��Ƚ������" << endl << endl;
cout << "	��ʼ�ŵ��ţ�	" << endl;
cout << "��� ��һ�ŵ��� �ƶ��Ĵŵ���" << endl;
for (i = iReqNum; i >= 0; i--) {
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++) {//�����������飬�ҵ�������̣�IGo-iNow��С��
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//�ŵ�û�з��ʹ�&&���⣬��С�ķ���
if (abs(queue[j].iGo - iNow)<iMinMove) {
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
}
if (iNext != -1) {
cout << "" << i + 1 << "	" << queue[iNext].iGo << "	" << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);
iNow = queue[iNext].iGo;
queue[iNext].iBeVisited = 1;
}
else {//��ͷ����
for (j = 0; j<iReqNum; j++)		//Ѱ�ҵ�ǰ������Ѱ��������̵�δ���ʴŵ������������queue�е��±�
{
if ((queue[j].iBeVisited == 0) && (queue[j].iGo<iNow))
{
if (abs(queue[j].iGo - iNow)<iMinMove)
{
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)
//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;				 	//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;
}
}
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);

break;

default:
printf("\n	�������!!\n\n");
return;
}	//switch(iInput)

} //void SCAN()

void SSTF() //���Ѱ�����ȵ����㷨
{
}



void Version()	//��ʾ��Ȩ��Ϣ����
{
cout << endl << endl;

cout << "         ��������������������������������������������������" << endl;
cout << "         �������� �������̵����㷨ģ��ϵͳ����        �� ��" << endl;
cout << "         �ĩ�����������������������������������������������" << endl;
cout << "         ���� ������(c)All Right Reserved    �� ��   ������" << endl;
cout << "         ��������������  LGY  ������    �� ����������������" << endl;
cout << "         ������������Version 2012 build 2.3 ���� ����������" << endl;
cout << "         ��������������������������������������������������" << endl;

cout << endl << endl;

}// void Version()


void Hint() //��ʾʵ����ʾ��Ϣ����
{
cout << endl;

cout << "	����������������������������������������������������������������������			" << endl;
cout << "     �١�ʵ��Ŀ��						 		   								" << endl;
cout << "     a���۲졢������ϵͳ�Ĵ��̵��ȷ�����                                   	" << endl;
cout << "     ��ͨ��һ���򵥵Ĵ��̵���ģ������ʵ�֣�����Դ��̵��ȵ���⡣          	" << endl;
cout << "     b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������	            " << endl;
cout << "     �ڡ�ʵ������			                                                    " << endl;
cout << "     a��ģ��ʵ�ִ��̵����㷨��FCFS�����Ѱ�����ȣ�                               " << endl;
cout << "     �����㷨��ʵ������֮һ�����ϣ���                                            " << endl;
cout << "     b���ŵ��������˳�����û����루��ͨ����ָ�����ı���TXT���ļ���ȡ������      " << endl;
cout << "     �ۡ�ʵ��Ҫ��									           			    	" << endl;
cout << "     a��ʹ��ģ�黯���˼������ơ�												" << endl;
cout << "     b�������������͸����㷨����������ͼ��	                                	" << endl;
cout << "     c��ѧ���ɰ�����������������ѡ����õ��㷨��			    					" << endl;
cout << "     �ܡ����н��    	                                                     	" << endl;
cout << "     a���������̵����㷨ģ�����Խ���Ѱ���������������    					" << endl;
cout << "     �����               														" << endl;
cout << "     ��һ�У���ţ�										                    	" << endl;
cout << "     �ڶ��У��ŵ��ķ���˳�� 													" << endl;
cout << "     �����У��ƶ��Ĵŵ�����								    					" << endl;
cout << "     ����������ƶ��ŵ�����ƽ���ƶ��ŵ�����									" << endl;
cout << "		 												                        	" << endl;
cout << "     ���������:�����ȷ����㷨�����Ѱ�����ȵ����㷨�������㷨					" << endl;
cout << "     VC++6.0����ͨ��   ��Ŀ���ͣ�Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     ��WINDOWS��˫��DEBUGĿ¼�е�EXE�ļ�ֱ�����У�����û����ʾ������ھ͹ر��ˣ� " << endl;
cout << "     �ⲻ�ǳ�����󣬽�������ǣ�	                                         	" << endl;
cout << "     1������ʼ->����->����-������ʾ����,��DOS����ڡ�                    	" << endl;
cout << "     2���ı䵱ǰĿ¼��EXE�ļ�����Ŀ¼��                                      	" << endl;
cout << "     �����߽�EXE�ļ��Ͳ����õ��ı��ļ�һ�����Ƶ���ǰĿ¼����                    	" << endl;
cout << "     3������EXE�ļ����������ƣ�����׺�������м��ɡ�Ϊ�������룬����������EXE�ļ���" << endl;
cout << "	����������������������������������������������������������������������			" << endl;
cout << endl;

} //void Hint()


void main()
{
int i;
bool bGoOn;		//�Ƿ�������̵����㷨ģ��ı�־
char sGoOn[1];	//�û������Ƿ�������̵����㷨ģ�����ĸ��y��Y��N��n

Hint();			//��ʾʵ����ʾ��Ϣ����
Version();		//��ʾ��Ȩ��Ϣ����

Init();			//��ʼ������

if (ReadTrackFile() == -1)    //����ŵ������ļ�
{
printf("	����ŵ������ļ�ʧ��!!\n\n");
}
else
{
bGoOn = true;
while (bGoOn)
{
cout << endl << "---------------------------------------------" << endl;
cout << "	�Ӵŵ������ļ� " << sFileName << " ������Ĵŵ���������:" << endl << endl << "	";
for (i = 0; i<iReqNum; i++)
{
cout << queue[i].iGo << " ";
}
cout << endl << endl << "	������Ϊ:  " << iReqNum << endl << endl;

iInput = -1;		//�û������������ѡ���㷨

cout << endl << "	�������㷨��ţ�1 OR 2 OR 3��ѡ������㷨��" << endl << endl;
cout << "	1  �����ȷ�������㷨" << endl << endl << "	2  ���ݵ����㷨" << endl << endl << "	3  ���Ѱ�����ȵ����㷨 	" << endl << endl << "	";

cin >> iInput;		//�ӱ�׼�����ȡ�û���ǰ���������

switch (iInput)		//�û������������ѡ���㷨
{
case 1:
FCFS();		//�����ȷ�������㷨
break;

case 2:
SCAN();		//���ݵ����㷨
break;

case 3:
SSTF();		//���Ѱ�����ȵ����㷨
break;
default:
printf("\n	������㷨��Ŵ���!!\n\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << "	Ҫ�������д��̵����㷨ģ����?(Y/N)	" << endl << "	";
cin >> sGoOn;
bGoOn = (sGoOn[0] == 'y' || sGoOn[0] == 'Y');

}  //while bGoOn

}	//if(ReadTrackFile()==-1)

} //void main()
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
class Sort {
public:
void insertionSort(int*arrayInt, const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempIndex = i;
int tempInt = arrayInt[i];
while(tempInt<arrayInt[tempIndex-1]&&tempIndex>=0){
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
//##
string arrayString = "\nforѭ��[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl << "```````````````````````````````````````````````````````````````````````````" << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
}
};
class Search {
private:
int*arrayInt;
int toFindNum;
int arraySize;
public:
Search(int* aInt, int findNum, int aSize) {
arrayInt = aInt;
toFindNum = findNum;
arraySize = aSize;
}
void binarySearch() {
int returnIndex=binarySearch(arrayInt, toFindNum, arraySize);
if (returnIndex > -1) {
cout << "�ҵ�" << arrayInt[returnIndex] << " , " << returnIndex << endl;
}
else {
cout << "û��" << toFindNum << endl;
}
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$
}
int binarySearch(int*arrayInt, const int toFindNum, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex <= rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
cout << middleIndex << " leftIndex:" << leftIndex << " rightIndex:" << rightIndex << endl;
if (toFindNum == arrayInt[middleIndex]) {
return middleIndex;
}
if (toFindNum < arrayInt[middleIndex]) {
rightIndex = middleIndex - 1;
}
else {
leftIndex = middleIndex + 1;
}
}
return -1;
}
};
int main() {
int arrayInt[] = { 98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
for (int i = 77; i<99; i++) {
Search caseSearch(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
caseSearch.binarySearch();
}
return 0;
}*///4//4702-4636 20161204 -200*29-30*50 
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
class Sort {
public:
void insertionSort(int*arrayInt, const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempInt = arrayInt[i];
int tempIndex = i;
while (tempInt<arrayInt[tempIndex-1]&&tempIndex>=0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << " tempIndex:" << (tempIndex + 1) << "	tempInt:" << tempInt<< endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << "  tempIndex:" << (tempIndex + 1) << "	tempInt:" << tempIndex << endl;
cout << "```````````````````````````````````````````````````````````````````````````````````````````````````" << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
}
};
class BinarySearch {
public:
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex<=rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
if (numToBeFound == arrayInt[middleIndex]) {
return middleIndex;
}
if (numToBeFound > arrayInt[middleIndex]) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
}
return -1;
}
void resultPrint(int*arrayInt,const int numToBeFound,const int arraySize) {
int arrayIndex = binarySearch(arrayInt, numToBeFound, arraySize);
if (arrayIndex > -1) {
cout << "�ҵ���" << arrayInt[arrayIndex] << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
};
int main() {
int arrayInt[] = { 1,2,3,4,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 1; i < 99; i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
}
return 0;//5351-5401 20161207 -200*29-19*50 +17
}*///5
/*#include<iostream>
#include<sstream>
using namespace std;
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
class Sort {
public:
void insertionSort(int*arrayInt,const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempInt = arrayInt[i];
int tempIndex = i;
while (tempInt < arrayInt[tempIndex - 1] && tempIndex >= 0) {
//##
string arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << "	tempIndex:" << tempIndex << "	tempInt" << tempInt << "	arrayInt[tempIndex-1]:" << arrayInt[i - 1] << endl;
//####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
}
arrayInt[tempIndex] = tempInt;
//##
string arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << "	tempIndex:" << tempIndex << "	tempInt" << tempInt << "	arrayInt[tempIndex-1]:" << arrayInt[i - 1] << endl;
//####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
}
};
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, const int arraySize) {
int index=binarySearch(arrayInt, numToBeFound, arraySize);
if (index == -1) {
cout << "û��" << numToBeFound << endl;
}
else {
cout << "�ҵ���" << arrayInt[index] << " index:" << index << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex <= rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
//##
string arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << "	leftIndex:" << leftIndex << "	rightIndex" << rightIndex << "	arrayInt[" << middleIndex << "]:" << arrayInt[middleIndex] << endl;
//####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
if (numToBeFound == arrayInt[middleIndex]) {
return middleIndex;
}
if (numToBeFound > arrayInt[middleIndex]) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
//###
cout << leftIndex << " <= " << rightIndex << ":" << (leftIndex <= rightIndex) << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$444
}
return -1;
}
};
int main() {
int arrayInt[] = { 1,3,4,2,98,87,97,83,82,81,70 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < 100; i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
cout << "```````````````````````````````````````````````````````````````````````````" << endl;
}
return 0;//5433-5483 20161208 -200*29-19*50 +17+32
}*///6//5479-5529 20161209 -200*29-20*50 +17+32
/************************************************************************************************************************************
*   Source File Name :   LGY_CPU_Scheduler                                                                                          *
*   Project Name:        LGY_CPU_Scheduler                                                                                          *
*   Engineer:            ������                                                                                                     *
*   Date Generated:      2007-11-19                                                                                                 *
*   Last Revision Date:  2012-06-04                                                                                                 *
*   Brief Description:	                                                                                                            *
*	[ʵ������]                                                                                                                      *
*	�١�ʵ��Ŀ��                                                                                                                    *
*		a�����̵����Ǵ��������ĺ������ݡ��۲졢������ϵͳ�Ľ��̵��ȷ�����                                                       *
*		��ͨ��һ���򵥵Ľ��̵���ģ������ʵ�֣�����Խ��̿��ƿ顢���̶��С����̵����㷨�������л�����⣬                          *
*		�������˽���ֵ����㷨�ľ���ʵʩ�취��                                                                                    *
*		b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������                                                               *
*	�ڡ�ʵ������                                                                                                                    *
*		a����ƽ��̿��ƿ�PCB��ṹ��ģ��ʵ�ֽ��̵����㷨��FIFO����̬���ȼ����ȣ�                                                    *
*		ʱ��Ƭ��ת���ȣ��̽������ȵ����㷨���༶�������е��ȡ���ʵ������֮һ�����ϣ���                                              *
*		b����дһ�����̵��ȳ���ģ�����ģ�����ֻ��PCB������Ӧ�ĵ���ģ�����������Ҫʵ�ʳ���                                    *
*		c�����û����루��ͨ���ļ����룩������������״̬����������ʱ��ͽ������ȼ������ݡ�                                           *
*	�ۡ�ʵ��Ҫ��                                                                                                                    *
*		a��ʹ��ģ�黯���˼������ƣ�                                                                                               *
*		b�������������͸����㷨����������ͼ��                                                                                       *
*		c��ѧ���ɰ�����������������ѡ����õ��㷨�������磺����ð�ݷ���д����ʵ�ֶ̽������ȵ��ȵ��㷨��                           *
*		d�����̵��ȳ���ģ�����ֻ��PCB������Ӧ�ĵ���ģ�����������Ҫʵ�ʳ���	                                                    *
*	�ܡ����н��                                                                                                                    *
*		a���������̵ĵ���ģ�������������                                                                                         *
*	�ݡ���ʾ                                                                                                                        *
*		a��ÿ�����̿�������״̬���������ʼ״̬Ϊ����״̬��                                                                         *
*		b��Ϊ�˱��ڴ��������еĽ�������ʱ��������Ϊ��λ���㡣                                                                     *
*		c�������̵����ȼ�����תʱ�����Լ����������е��������ĳ�ʼֵ�����û�������                                                   *
*		d�������ȼ��㷨�У����þ�̬���ȼ�����ʱ��Ƭ��ת�㷨�У����ÿɱ�ʱ��Ƭ�����û�������                                         *
*		e�������������ȼ�һ�µ����������FIFO���Խ����                                                                             *
*                                                                                                                                   *
*	 һ����WINDOWS��˫��DEBUGĿ¼�е�EXE�ļ�ֱ�����У����ܻ�û����ʾ������ھ͹ر��ˣ��ⲻ�ǳ�����󣬽�������ǣ�                  *
*    	1������ʼ->����->����-������ʾ����,��DOS����ڡ�                                                                          *
*    	2���ı䵱ǰĿ¼��EXE�ļ�����Ŀ¼�������߽�EXE�ļ��Ͳ����õ��ı��ļ�һ�����Ƶ���ǰĿ¼����                                   *
*    	3������EXE�ļ����������ƣ�����׺�������м��ɡ���Ϊ�������룬����������EXE�ļ�����                                           *
*    ���� ���������:FIFO�����ȼ������㷨����̬���ȼ�����ʱ��Ƭ��ת�����㷨���̽������ȵ����㷨��                                   *
*    	 VC++6.0����ͨ��  ��Ŀ���ͣ�Win32 Console Application                                                                       *
*    	���룺�������ļ����ı��ļ��������д洢����һϵ��Ҫִ�еĽ��̣�ÿ�����̰����ĸ������                                      *
*    	 	������(���Ȳ�����20�����ַ���) ����״̬(1���� 2�ȴ� 3����) ����ʱ�� ���ȼ�(0�����)                                     *
*    	���: ����ִ���� �ȴ�ʱ�� ƽ���ȴ�ʱ��                                                                                      *
*************************************************************************************************************************************/
/*#include<stdio.h>
#include<string.h>
#include<iostream>
#pragma warning(disable)
using namespace std;
const int MAXPCB = 200;	//������������
//������̿��ƿ�PCB�ṹ������
typedef struct PCB_Node {
char sName[20];		//������
int iStatus;		//����״̬(1���� 2�ȴ� 3����) ��ǰ��������ʱȫ��Ĭ��Ϊ��������
int iRunTime; 		//��������ʱ�䣨���룩
int iPriority; 		//����������(����ԽС���ȼ�Խ��)
int iBeFinished; 	//�����Ƿ�ִ����ɱ�־��1������ɣ�0��ĩ��ɣ�
int iWaitTime; 		//���̵ȴ�ʱ�䣨���룩
}PCB;
PCB pcbs[MAXPCB];		//PCB�������
int iPCBNum;			//ʵ�ʽ�����
char sFileName[20];		//�������ļ���
void InitPCB();			//PCB��ʼ������
int ReadPCBFile();		//���������ļ����ݣ�����PCB�������pcbs�������
void ReSetPCB();		//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
void FIFO();			//�Ƚ��ȳ������㷨
void Priority();		//���ȼ������㷨
void RR();				//ʱ��Ƭ��ת�����㷨
void SPF();				//�̽������ȵ����㷨
void Hint();			//��ʾʵ����ʾ��Ϣ����
void Version();			//��ʾ��Ȩ��Ϣ����
void InitPCB(){		//PCB��ʼ������
int i;
for (i = 0; i < MAXPCB; i++){
strcpy(pcbs[i].sName, "");
pcbs[i].iStatus = -1;
pcbs[i].iRunTime = -1;
pcbs[i].iPriority = -1;
pcbs[i].iBeFinished = 0;
pcbs[i].iWaitTime = 0;
} //for(i=0;i<MAXPCB;i++)
iPCBNum = 0;
} //void InitPCB()
int ReadPCBFile(){//���������ļ����ݣ�����PCB�������pcbs�������
FILE *fp;
int i;
char cHead;
cout << "	������Ҫ�򿪵Ľ��������ı����ļ�����ע�⣺����·�����ͺ�׺����:  ";
cin >> sFileName;
if ((fp = fopen(sFileName, "r")) == NULL){
cout << "	���󣺽������ļ� " << sFileName << " �򲻿�,�����ļ�����·��!!" << endl;
return -1;
}
else{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9){	//���˿ո񡢻��к�TAB�ַ�
cHead = fgetc(fp);
}
if (cHead == EOF){
printf("	���󣺽������ļ���%s Ϊ��!!\n", sFileName);
return -1;
}
else{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp)){
fscanf(fp, "%s %d %d %d", pcbs[iPCBNum].sName, &pcbs[iPCBNum].iStatus, &pcbs[iPCBNum].iRunTime, &pcbs[iPCBNum].iPriority);
iPCBNum++;
}	//while(!feof(fp))//���������Ľ�������
cout << endl << "	���ļ� " << sFileName << " ����Ľ������ݣ�" << endl << endl;
cout << "	������  ����״̬  ����ʱ��  ������" << endl;
for (i = 0; i < iPCBNum; i++){
cout << "	 " << pcbs[i].sName << "	  " << pcbs[i].iStatus << "	  " << pcbs[i].iRunTime << "		  " << pcbs[i].iPriority << endl;
}
cout << "	����������" << iPCBNum << endl;
return 0;
}	//if(cHead==EOF)
}	//if((fp=fopen(sFileName,"r"))==NULL)
}// int ReadPCBFile()


void ReSetPCB()	//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
{
int i;	//���������Ľ�������
cout << endl << "---------------------------------------------------------------" << endl;
cout << endl << "	���ļ� " << sFileName << " ����Ľ������ݣ�" << endl << endl;
cout << "	������  ����״̬  ����ʱ��  ������" << endl;
for (i = 0; i < iPCBNum; i++){
pcbs[i].iBeFinished = 0;
pcbs[i].iWaitTime = 0;
cout << "	 " << pcbs[i].sName << "	  " << pcbs[i].iStatus << "	  " << pcbs[i].iRunTime << "		  " << pcbs[i].iPriority << endl;
}
cout << "	����������" << iPCBNum << endl;
} //void ReSetPCB()


void FIFO() //�Ƚ��ȳ������㷨
{
int i, j;
int iSum; //�ܵȴ�ʱ��			  //����Ƚ��ȳ������㷨ִ����
cout << endl << "---------------------------------------------------------------" << endl;
cout << "	�Ƚ��ȳ������㷨ִ����:" << endl << endl;
cout << "	��� ������ ����ʱ�� �ȴ�ʱ��" << endl;
iSum = 0;
for (i = 0; i < iPCBNum; i++){
cout << "	 " << i + 1 << "	 " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	 " << pcbs[i].iWaitTime << endl;
//�����Ϣ�����������
iSum += pcbs[i].iWaitTime;	//�ۼ��ܵȴ�ʱ��
for (j = i + 1; j < iPCBNum; j++){
pcbs[j].iWaitTime += pcbs[i].iRunTime;
}
}
cout << "	�ܵ��ȴ���:" << iPCBNum << endl;
cout << "	�ܵȴ�ʱ��:" << iSum << endl;
printf("	ƽ���ȴ�ʱ��  %.2f\n", (float)iSum / (float)iPCBNum);
cout << endl << "---------------------------------------------------------------" << endl;
} //void FIFO()


void Priority(){	//���ȼ������㷨
cout << "	���ȼ������㷨ִ����:" << endl << endl;
cout << "	��� ������ ����ʱ�� �ȴ�ʱ�� ������" << endl;
int i, j = 1, WaitTime = 0, iSum = 0;
for (i = 0; i < iPCBNum; i++)	{
if (pcbs[i].iPriority == 1){
cout << "         " << j << "    " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	" << WaitTime << "       " << pcbs[i].iPriority << endl;
WaitTime += pcbs[i].iRunTime;
j++;
iSum += WaitTime;
}
}
for (i = 0; i < iPCBNum; i++){
if (pcbs[i].iPriority == 2){
cout << "         " << j << "    " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	" << WaitTime << "       " << pcbs[i].iPriority << endl;
WaitTime += pcbs[i].iRunTime;
j++;
iSum += WaitTime;
}
}
for (i = 0; i < iPCBNum; i++){
if (pcbs[i].iPriority == 3){
cout << "         " << j << "    " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	" << WaitTime << "       " << pcbs[i].iPriority << endl;
WaitTime += pcbs[i].iRunTime;
j++;
iSum += WaitTime;
}
}
for (i = 0; i < iPCBNum; i++){
if (pcbs[i].iPriority == 4){
cout << "         " << j << "    " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	" << WaitTime << "       " << pcbs[i].iPriority << endl;
WaitTime += pcbs[i].iRunTime;
j++;
iSum += WaitTime;
}
}
cout << "	�ܵ��ȴ���:" << iPCBNum << endl;
cout << "	�ܵȴ�ʱ��:" << iSum << endl;
printf("	ƽ���ȴ�ʱ��  %.2f\n", (float)iSum / (float)iPCBNum);
} //void Priority()


void RR(){//ʱ��Ƭ��ת�����㷨
int i;
int iNotEnded = 1;		//ѭ�����Ʊ�־���������н��̶��Ѿ�����㹻ʱ��Ƭ������ɣ���Ҫ������ת��
int iNum;				//��ĿǰΪֹĩִ����Ľ�����
int iRound = 0;			//��ת������
int iSum = 0;				//��ʱ��Ƭ��
float fBlockTime = 10;	//ʱ��Ƭ�ĳ��ȣ����룩
cout << endl << "	������ʱ��Ƭ�ĳ��ȣ����룩��" << endl << "	";
cin >> fBlockTime;
cout << endl << "---------------------------------------------------------------" << endl;
cout << "	ʱ��Ƭ��ת����ִ������ʱ��Ƭ�ĳ���Ϊ��" << fBlockTime << "���룩:" << endl;
while (iNotEnded == 1){//�������н��̶��Ѿ�����㹻ʱ��Ƭ������ɣ���Ҫ������ת��
iNotEnded = 0;
iNum = 0;
for (i = 0; i < iPCBNum; i++){//ͳ�Ƶ�ĿǰΪֹĩִ����Ľ�����iNum
if (pcbs[i].iBeFinished == 0){
iNum++;
} //if(pcbs[i].iBeFinished==0)
} //for(i=0;i<iPCBNum;i++)
if (iNum > 0){
iNotEnded = 1;
iRound++;	//�ۼ���ת������
cout << endl << "	��" << iRound << "�֣�";
for (i = 0; i < iPCBNum; i++){
if (pcbs[i].iBeFinished == 0){
cout << pcbs[i].sName << " ";	//�����Ϣ�����������
iSum++;	//�ۼ���ʱ��Ƭ��
if (pcbs[i].iRunTime <= fBlockTime*(iRound)){//i�����ڱ��ֻ��һ��ʱ��Ƭ���ܹ��������
pcbs[i].iBeFinished = 1;
} //if(pcbs[i].iRunTime<=fBlockTime*(iRound+1))
}//if(pcbs[i].iBeFinished==0)
} //for(i=0;i<iPCBNum;i++)
} //if(iNum>0)
} //while(iNotEnded==1)
cout << endl << "	��ת������:" << iRound << "	��ʱ��Ƭ��:" << iSum << endl;
cout << endl << "---------------------------------------------------------------" << endl;
}//void RR()


void SPF()	//�̽������ȵ����㷨
{
int i, j, iSum = 0;
PCB temp;
for (j = 0; j < iPCBNum - 1; j++)
for (i = 0; i < iPCBNum - 1; i++)
if (pcbs[i].iRunTime > pcbs[i + 1].iRunTime)
{
temp = pcbs[i];
pcbs[i] = pcbs[i + 1];
pcbs[i + 1] = temp;
}
cout << "	�̽������ȵ����㷨ִ����:" << endl << endl;
cout << "	��� ������ ����ʱ�� �ȴ�ʱ��" << endl;
for (i = 0; i < iPCBNum; i++)
{
cout << "	 " << i + 1 << "	 " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	 " << pcbs[i].iWaitTime << endl;
//�����Ϣ�����������
iSum += pcbs[i].iWaitTime;	//�ۼ��ܵȴ�ʱ��
for (j = i + 1; j < iPCBNum; j++)
{
pcbs[j].iWaitTime += pcbs[i].iRunTime;
}
}
cout << "	�ܵ��ȴ���:" << iPCBNum << endl;
cout << "	�ܵȴ�ʱ��:" << iSum << endl;
printf("	ƽ���ȴ�ʱ��  %.2f\n", (float)iSum / (float)iPCBNum);
cout << endl << "---------------------------------------------------------------" << endl;
} //void SPF ()


void Hint() //��ʾʵ����ʾ��Ϣ����
{
cout << endl;

cout << "  ����������������������������������������������������������������������			" << endl;

cout << "  [ʵ������]                                                                      " << endl;
cout << "  �١�ʵ��Ŀ��                                                                    " << endl;
cout << "  a�����̵����Ǵ��������ĺ������ݡ��۲졢������ϵͳ�Ľ��̵��ȷ�����           " << endl;
cout << "  ��ͨ��һ���򵥵Ľ��̵���ģ������ʵ�֣�����Խ��̿��ƿ顢���̶��С�            " << endl;
cout << "  ���̵����㷨�������л�����⣬�������˽���ֵ����㷨�ľ���ʵʩ�취��          " << endl;
cout << "  b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������                   " << endl;
cout << "  �ڡ�ʵ������                                                                    " << endl;
cout << "  a����ƽ��̿��ƿ�PCB��ṹ��ģ��ʵ�ֽ��̵����㷨��FIFO����̬���ȼ����ȣ�        " << endl;
cout << "  ʱ��Ƭ��ת���ȣ��̽������ȵ����㷨���༶�������е��ȣ�ʵ������֮һ�����ϣ���    " << endl;
cout << "  b����дһ�����̵��ȳ���ģ�����ģ�����ֻ��PCB������Ӧ�ĵ���ģ�����������Ҫʵ�ʳ���    " << endl;
cout << "  c�����û����루��ͨ���ļ����룩������������״̬����������ʱ��ͽ������ȼ������ݡ� " << endl;
cout << "  �ۡ�ʵ��Ҫ��                                                                       " << endl;
cout << "  a��ʹ��ģ�黯���˼������ƣ�                                                        " << endl;
cout << "  b�������������͸����㷨����������ͼ��                                                            " << endl;
cout << "  c��ѧ���ɰ�����������������ѡ����õ��㷨�������磺����ð�ݷ���д����ʵ�ֶ̽������ȵ��ȵ��㷨���� " << endl;
cout << "  d�����̵��ȳ���ģ�����ֻ��PCB������Ӧ�ĵ���ģ�����������Ҫʵ�ʳ���	                          " << endl;
cout << "  �ܡ����н��                                                                                     " << endl;
cout << "  a���������̵ĵ���ģ�������������                                                              " << endl;
cout << "  �ݡ���ʾ                                                                                         " << endl;
cout << "  a��ÿ�����̿�������״̬���������ʼ״̬Ϊ����״̬��                                              " << endl;
cout << "  b��Ϊ�˱��ڴ��������еĽ�������ʱ��������Ϊ��λ���㡣                                          " << endl;
cout << "  c�������̵����ȼ�����תʱ�����Լ����������е��������ĳ�ʼֵ�����û�������                        " << endl;
cout << "  d�������ȼ��㷨�У����þ�̬���ȼ�����ʱ��Ƭ��ת�㷨�У����ÿɱ�ʱ��Ƭ�����û�������              " << endl;
cout << "  e�������������ȼ�һ�µ����������FIFO���Խ����                                                  " << endl;

cout << "  �������������:FIFO�����ȼ������㷨����̬���ȼ�����ʱ��Ƭ��ת�����㷨���̽������ȵ����㷨�� VC++6.0����ͨ��  ��Ŀ���ͣ�Win32 Console Application��" << endl;
cout << "  ���룺�������ļ����ı��ļ��������д洢����һϵ��Ҫִ�еĽ��̣�ÿ�����̰����ĸ������           " << endl;
cout << "   	������(���Ȳ�����20�����ַ���) ����״̬(1���� 2�ȴ� 3����) ����ʱ�� ���ȼ�(0�����)                                   " << endl;
cout << "  ���: ����ִ���� �ȴ�ʱ�� ƽ���ȴ�ʱ��                                                           " << endl;
cout << "     VC++6.0����ͨ��   ��Ŀ���ͣ�Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     ��WINDOWS��˫��DEBUGĿ¼�е�EXE�ļ�ֱ�����У�����û����ʾ������ھ͹ر��ˣ� " << endl;
cout << "     �ⲻ�ǳ�����󣬽�������ǣ�	                                         	" << endl;
cout << "     1������ʼ->����->����-������ʾ����,��DOS����ڡ�                    	" << endl;
cout << "     2���ı䵱ǰĿ¼��EXE�ļ�����Ŀ¼��                                      	" << endl;
cout << "     �����߽�EXE�ļ��Ͳ����õ��ı��ļ�һ�����Ƶ���ǰĿ¼����                    	" << endl;
cout << "     3������EXE�ļ����������ƣ�����׺�������м��ɡ�Ϊ�������룬����������EXE�ļ���" << endl;

cout << "  ����������������������������������������������������������������������			" << endl;
cout << endl;

} //void Hint()


void Version()	//��ʾ��Ȩ��Ϣ����
{
cout << endl << endl;

cout << "	 ��������������������������������������������������" << endl;
cout << "	 ���������������̵����㷨ģ��ϵͳ�� �� ������������" << endl;
cout << "	 �ĩ�����������������������������������������������" << endl;
cout << "	 ���� ��   ��(c)All Right Reserved ����    ��������" << endl;
cout << "	 ��������������   LGY  ������   �� ����������������" << endl;
cout << "	 ������������Version 2012 build 2.3 ���� ����������" << endl;
cout << "	 ��������������������������������������������������" << endl;
cout << endl << endl;
} //void Version()



void main()		//������
{
int iInput;		//�û������������ѡ���㷨
bool bGoOn;		//�Ƿ�������̵����㷨ģ��ı�־
char sGoOn[1];	//�û������Ƿ�������̵����㷨ģ�����ĸ��y��Y��N��n

Hint();			//��ʾʵ����ʾ��Ϣ����
Version();		//��ʾ��Ȩ��Ϣ����

InitPCB();		//PCB��ʼ������

bGoOn = true;
strcpy(sGoOn, " ");

if (ReadPCBFile() == 0)	//��־ ���������ļ����ݺ��� ִ���Ƿ���ȷ
{
while (bGoOn)
{
cout << endl << "	�������㷨��ţ�1 OR 2 OR 3 OR 4��ѡ����̵����㷨��" << endl << endl;
cout << "	1  �Ƚ��ȳ������㷨" << endl << endl << "	2  ���ȼ������㷨" << endl << endl;
cout << "	3  ʱ��Ƭ��ת�����㷨" << endl << endl << "	4  �̽������ȵ����㷨" << endl << endl << "	";

cin >> iInput;		//�ӱ�׼�����ȡ�û������������ѡ���㷨
switch (iInput)
{
case 1:
ReSetPCB();		//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
FIFO();			//�Ƚ��ȳ������㷨
break;

case 2:
ReSetPCB();		//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
Priority();		//���ȼ������㷨
break;

case 3:
ReSetPCB();		//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
RR();			//ʱ��Ƭ��ת�����㷨
break;

case 4:
ReSetPCB();		//����PCB��ɱ�־���ȴ�ʱ��,�Թ���һ�������㷨ʹ�ã������������Ľ�������
SPF();
//�̽������ȵ����㷨
break;

default:
printf("\n	������㷨��Ŵ���!!\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << endl << "	Ҫ�������н��̵����㷨ģ����?(Y/N)" << endl << "	";
cin >> sGoOn;
bGoOn = (sGoOn[0] == 'y' || sGoOn[0] == 'Y');

}//while bGoOn

} //if(ReadPCBFile()==0)

}//void main()*/
/***********************************************************************************************************
*   Source File Name :   LGY_DISK_Scheduler.cpp                                                            *
*   Project Name:        LGY_DISK_Scheduler                                                                *
*   Engineer:            ������                                                                            *
*   Date Generated:      2007-11-29                                                                        *
*   Last Revision Date:  2012-06-04                                                                        *
*   Brief Description:	                                                                                   *
*   �١�ʵ��Ŀ��                                                                                           *
*   	a���۲졢������ϵͳ�Ĵ��̵��ȷ�������ͨ��һ���򵥵Ĵ��̵���ģ������ʵ�֣�����Դ��̵��ȵ���⡣*
*   	b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������                                      *
*   �ڡ�ʵ������                                                                                           *
*		a��ģ��ʵ�ִ��̵����㷨��FCFS�����Ѱ�����ȣ������㷨��ʵ������֮һ����                      *
*	    b���ŵ��������˳�����û����루��ͨ����ָ�����ı��ļ���TXT�ļ�����ȡ������                         *
*	�ۡ�ʵ��Ҫ��                                                                                           *
*	    a��ʹ��ģ�黯���˼������ơ�                                                                      *
*   	b�������������͸����㷨����������ͼ��                                                              *
*   	c��ѧ���ɰ�����������������ѡ����õ��㷨��                                                        *
*	�ܡ����н��                                                                                           *
*	   a���������̵����㷨ģ�����Խ���Ѱ���������������                                               *
*	�����                                                                                                 *
*   	��һ�У���ţ�                                                                                     *
*   	�ڶ��У��ŵ��ķ���˳��                                                                           *
*    	�����У��ƶ��Ĵŵ�����                                                                             *
*	    ����������ƶ��ŵ�����ƽ���ƶ��ŵ�����                                                           *
*	                                                                                                       *
*	���������:�����ȷ����㷨�����Ѱ�����ȵ����㷨�������㷨                                              *
*	VC++6.0����ͨ��     ��Ŀ���ͣ�Win32 Console Application                                                *
*                                                                                                          *
************************************************************************************************************/
/*#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
const int MAXQUEUE = 200; //�������������󳤶�//�ŵ�������ṹ�嶨��
typedef struct TRACK_Node{
int iGo;		//Ҫ���ʵĴŵ���
int iBeVisited;	//�ŵ��Ƿ��Ѿ����ʱ�־��1���ѷ��ʣ�0��δ���ʣ�
}TRACK;
TRACK queue[MAXQUEUE]; //�ŵ��������������
int iReqNum = 0;			//�ŵ�����������
int iStart = 0;			//��ͷ��ʼλ��
int iNow = 0;				//��ͷ��ǰλ��
int iSum = 0;				//���ƶ��ŵ���
int iInput;				//�û���ǰ���������
char sFileName[20];		//�ļ���



void Init();			//��ʼ������
void Reset();			//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
int ReadTrackFile();	//����ŵ������ļ�
void FCFS();			//�����ȷ�������㷨
void SSTF();			//���Ѱ�����ȵ����㷨
void SCAN();			//���ݵ����㷨
void Version();			//��ʾ��Ȩ��Ϣ����
void Hint();			//��ʾʵ����ʾ��Ϣ����


void Init(){//��ʼ������
int i;
for (i = 0; i<MAXQUEUE; i++){
queue[i].iGo = -1;		//����Ҫ���ʵĴŵ���Ϊ�����ܵ���-1����������������ŵ���
queue[i].iBeVisited = 0;	//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ0��δ����
}
} //void Init()


void Reset(){//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
int i;
for (i = 0; i<iReqNum; i++){
queue[i].iBeVisited = 0; 	//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ0��δ����
}
printf("\n	�������ͷ�ĳ�ʼ�ŵ��ţ�������:  ");
scanf("%d", &iStart);	//�ӱ�׼�����ȡ�û���ǰ����Ĵ�ͷ��ʼλ��
iNow = iStart;			//��ͷ��ǰλ��
iSum = 0;					//���ƶ��ŵ���
} //void Reset()

int ReadTrackFile(){//����ŵ������ļ�
FILE *fp;
int iTemp;
char cHead;
cout << "	\n	������Ҫ�򿪵Ĵŵ��������ı����ļ�����ע�⣺����·�����ͺ�׺����:  ";
cin >> sFileName; 		//�ӱ�׼�����ȡ�û���ǰ������ļ���
if ((fp = fopen(sFileName, "r")) == NULL){
cout << endl << "	���󣺴ŵ������ļ� " << sFileName << " �򲻿��������ļ�����·��!!" << endl;
return -1;
}else{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9){//���˿ո񡢻��к�TAB�ַ�
cHead = fgetc(fp);
}
if (cHead == EOF){
printf("	���󣺴ŵ������ļ���%s Ϊ��!!\n", sFileName);
return -1;
}else{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp)){//���ļ�������Ĵŵ������δ���ŵ��������������
fscanf(fp, "%d ", &iTemp);
queue[iReqNum].iGo = iTemp;
iReqNum++;	//�ŵ�����������
}
}
}
return 0;
} //void ReadTrackFile()


void FCFS(){//�����ȷ��������
int i;
Reset();	//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
cout << endl << "---------------------------------------------" << endl;
cout << "	�����ȷ�������㷨�ĵ��Ƚ��:  " << endl << endl;
cout << "	    ��ʼ�ŵ���:  " << iStart << endl;
cout << "	���  ��һ�ŵ���  �ƶ��Ĵŵ���" << endl;
for (i = 0; i<iReqNum; i++){
//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[i].iGo << "      " << abs(queue[i].iGo - iNow) << endl;
iSum += abs(queue[i].iGo - iNow);		//�ۼ����ƶ��ŵ���
iNow = queue[i].iGo;					//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
}
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);
} //void FCFS()




void SCAN(){//���ݵ����㷨
int i, j;
int iNext;		//�������ʵ���һδ���ʴŵ������������queue�е��±�
int iMinMove;	//��ǰ���������Ѱ������
cout << endl << "---------------------------------------------" << endl;
cout << endl << "	��ѡ���ͷ��ʼ����1 OR 2����" << endl << endl;
cout << "	1  ��ͷ��ʼ����" << endl << endl << "	2  ��ͷ��ʼ����" << endl << endl << "	";
cin >> iInput;	//�ӱ�׼�����ȡ�û���ǰ���������
switch (iInput)	//�û���ǰ���������
{
case 1:			//��ͷ��ʼ����
Reset();	//���÷��ʱ�־����ͷ��ǰλ�á����ƶ��ŵ���
cout << endl << "---------------------------------------------" << endl;
cout << "	���ݵ����㷨������ͷ��ʼ���ڵĵ��Ƚ��:  " << endl << endl;
cout << "	    ��ʼ�ŵ���:  " << iStart << endl;
cout << "	���  ��һ�ŵ���  �ƶ��Ĵŵ���" << endl;
for (i = 0; i<iReqNum; i++)
{
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++){
if ((queue[j].iBeVisited == 0) && (queue[j].iGo >= iNow)){
if (abs(queue[j].iGo - iNow)<iMinMove){
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
} //if(abs(queue[j].iGo-iNow)<iMinMove)
} //if((queue[j].iBeVisited==0)&&(queue[j].iGo>=iNow))
} //for(j=0;j<iReqNum;j++)
if (iNext != -1){//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;					//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;				//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ1���ѷ���
}else{
for (j = 0; j<iReqNum; j++){
if ((queue[j].iBeVisited == 0) && (queue[j].iGo<iNow)){
if (abs(queue[j].iGo - iNow)<iMinMove){
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;				 	//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;				//���ôŵ��Ƿ��Ѿ����ʱ�־Ϊ1���ѷ���
} //if(iNext!=-1)
} //for(i=0;i<iReqNum;i++)
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);
break;
case 2:			//��ͷ��ʼ����
Reset();
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "���ݵ����㷨---��ͷ��ʼ����ĵ��Ƚ������" << endl << endl;
cout << "	��ʼ�ŵ��ţ�	" << endl;
cout << "��� ��һ�ŵ��� �ƶ��Ĵŵ���" << endl;
for (i = iReqNum; i >= 0; i--) {
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++) {//�����������飬�ҵ�������̣�IGo-iNow��С��
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//�ŵ�û�з��ʹ�&&���⣬��С�ķ���
if (abs(queue[j].iGo - iNow)<iMinMove) {
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
}
if (iNext != -1) {
cout << "" << i + 1 << "	" << queue[iNext].iGo << "	" << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);
iNow = queue[iNext].iGo;
queue[iNext].iBeVisited = 1;
}
else {//��ͷ����
for (j = 0; j<iReqNum; j++){
if ((queue[j].iBeVisited == 0) && (queue[j].iGo>iNow)){
if (abs(queue[j].iGo - iNow)<iMinMove){
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)
//�����Ϣ�����������Ĵŵ�
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//�ۼ����ƶ��ŵ���
iNow = queue[iNext].iGo;				 	//�ƶ���ͷ��ǰλ��Ϊ��ǰ���ʴŵ���
queue[iNext].iBeVisited = 1;
}
}
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);
break;
default:
printf("\n	�������!!\n\n");
return;
}	//switch(iInput)
} //void SCAN()

void SSTF(){//���Ѱ�����ȵ����㷨
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "���Ѱ�������㷨---��ͷ��ʼ����ĵ��Ƚ������" << endl << endl;
cout << "	��ʼ�ŵ��ţ�	" << endl;
cout << "��� ��һ�ŵ��� �ƶ��Ĵŵ���" << endl;
int tempShortestDistance;
int tempIndex;
int i, j;
for (i = iReqNum; i >= 0; i--) {
tempShortestDistance = 9999;
tempIndex = -1;
for (j = 0; j<iReqNum; j++) {//�����������飬�ҵ�������̣�IGo-iNow��С��
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//�ŵ�û�з��ʹ�&&���⣬��С�ķ���
if (abs(queue[j].iGo - iNow)<tempShortestDistance) {
tempIndex = j;
tempShortestDistance = abs(queue[j].iGo - iNow);
}
}
}
if (tempIndex != -1) {
cout << "" << i + 1 << "	" << queue[tempIndex].iGo << "	" << abs(queue[tempIndex].iGo - iNow) << endl;
iSum += abs(queue[tempIndex].iGo - iNow);
iNow = queue[tempIndex].iGo;
queue[tempIndex].iBeVisited = 1;
}
}
cout << endl << "	�ܵ��ȴ���:  " << iReqNum << endl;
cout << endl << "	���ƶ��ŵ���:  " << iSum << endl;
printf("\n	ƽ���ƶ��ŵ���:  %.2f\n\n", (float)iSum / (float)iReqNum);
}



void Version()	//��ʾ��Ȩ��Ϣ����
{
cout << endl << endl;

cout << "         ��������������������������������������������������" << endl;
cout << "         �������� �������̵����㷨ģ��ϵͳ����        �� ��" << endl;
cout << "         �ĩ�����������������������������������������������" << endl;
cout << "         ���� ������(c)All Right Reserved    �� ��   ������" << endl;
cout << "         ��������������  LGY  ������    �� ����������������" << endl;
cout << "         ������������Version 2012 build 2.3 ���� ����������" << endl;
cout << "         ��������������������������������������������������" << endl;

cout << endl << endl;

}// void Version()


void Hint() //��ʾʵ����ʾ��Ϣ����
{
cout << endl;

cout << "	����������������������������������������������������������������������			" << endl;
cout << "     �١�ʵ��Ŀ��						 		   								" << endl;
cout << "     a���۲졢������ϵͳ�Ĵ��̵��ȷ�����                                   	" << endl;
cout << "     ��ͨ��һ���򵥵Ĵ��̵���ģ������ʵ�֣�����Դ��̵��ȵ���⡣          	" << endl;
cout << "     b�����ʵ�ʶ��ֱ��������Ϊ�պ������������������¼�ʵ������	            " << endl;
cout << "     �ڡ�ʵ������			                                                    " << endl;
cout << "     a��ģ��ʵ�ִ��̵����㷨��FCFS�����Ѱ�����ȣ�                               " << endl;
cout << "     �����㷨��ʵ������֮һ�����ϣ���                                            " << endl;
cout << "     b���ŵ��������˳�����û����루��ͨ����ָ�����ı���TXT���ļ���ȡ������      " << endl;
cout << "     �ۡ�ʵ��Ҫ��									           			    	" << endl;
cout << "     a��ʹ��ģ�黯���˼������ơ�												" << endl;
cout << "     b�������������͸����㷨����������ͼ��	                                	" << endl;
cout << "     c��ѧ���ɰ�����������������ѡ����õ��㷨��			    					" << endl;
cout << "     �ܡ����н��    	                                                     	" << endl;
cout << "     a���������̵����㷨ģ�����Խ���Ѱ���������������    					" << endl;
cout << "     �����               														" << endl;
cout << "     ��һ�У���ţ�										                    	" << endl;
cout << "     �ڶ��У��ŵ��ķ���˳�� 													" << endl;
cout << "     �����У��ƶ��Ĵŵ�����								    					" << endl;
cout << "     ����������ƶ��ŵ�����ƽ���ƶ��ŵ�����									" << endl;
cout << "		 												                        	" << endl;
cout << "     ���������:�����ȷ����㷨�����Ѱ�����ȵ����㷨�������㷨					" << endl;
cout << "     VC++6.0����ͨ��   ��Ŀ���ͣ�Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     ��WINDOWS��˫��DEBUGĿ¼�е�EXE�ļ�ֱ�����У�����û����ʾ������ھ͹ر��ˣ� " << endl;
cout << "     �ⲻ�ǳ�����󣬽�������ǣ�	                                         	" << endl;
cout << "     1������ʼ->����->����-������ʾ����,��DOS����ڡ�                    	" << endl;
cout << "     2���ı䵱ǰĿ¼��EXE�ļ�����Ŀ¼��                                      	" << endl;
cout << "     �����߽�EXE�ļ��Ͳ����õ��ı��ļ�һ�����Ƶ���ǰĿ¼����                    	" << endl;
cout << "     3������EXE�ļ����������ƣ�����׺�������м��ɡ�Ϊ�������룬����������EXE�ļ���" << endl;
cout << "	����������������������������������������������������������������������			" << endl;
cout << endl;

} //void Hint()


void main()
{
int i;
bool bGoOn;		//�Ƿ�������̵����㷨ģ��ı�־
char sGoOn[1];	//�û������Ƿ�������̵����㷨ģ�����ĸ��y��Y��N��n

Hint();			//��ʾʵ����ʾ��Ϣ����
Version();		//��ʾ��Ȩ��Ϣ����

Init();			//��ʼ������

if (ReadTrackFile() == -1)    //����ŵ������ļ�
{
printf("	����ŵ������ļ�ʧ��!!\n\n");
}
else
{
bGoOn = true;
while (bGoOn)
{
cout << endl << "---------------------------------------------" << endl;
cout << "	�Ӵŵ������ļ� " << sFileName << " ������Ĵŵ���������:" << endl << endl << "	";
for (i = 0; i<iReqNum; i++)
{
cout << queue[i].iGo << " ";
}
cout << endl << endl << "	������Ϊ:  " << iReqNum << endl << endl;

iInput = -1;		//�û������������ѡ���㷨

cout << endl << "	�������㷨��ţ�1 OR 2 OR 3��ѡ������㷨��" << endl << endl;
cout << "	1  �����ȷ�������㷨" << endl << endl << "	2  ���ݵ����㷨" << endl << endl << "	3  ���Ѱ�����ȵ����㷨 	" << endl << endl << "	";

cin >> iInput;		//�ӱ�׼�����ȡ�û���ǰ���������

switch (iInput)		//�û������������ѡ���㷨
{
case 1:
FCFS();		//�����ȷ�������㷨
break;

case 2:
SCAN();		//���ݵ����㷨
break;

case 3:
SSTF();		//���Ѱ�����ȵ����㷨
break;
default:
printf("\n	������㷨��Ŵ���!!\n\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << "	Ҫ�������д��̵����㷨ģ����?(Y/N)	" << endl << "	";
cin >> sGoOn;
bGoOn = (sGoOn[0] == 'y' || sGoOn[0] == 'Y');

}  //while bGoOn

}	//if(ReadTrackFile()==-1)

}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
int main(int argumentCount, char**argumentVector) {
double firstDouble = 0;
double secondDouble = 0;
double thirdDouble = 0;
double forthDouble = 0;
double *array[] = { &firstDouble,&secondDouble,&thirdDouble,&forthDouble };
for (int i = 0; i<sizeof(array) / sizeof(array[0]); i++) {
printf("�������%d����:\n", i + 1);
scanf("%lf", *(array + i));
//###
printf("%lfhh", array[i]);
printf("%lf", firstDouble);
printf(" %lf", secondDouble);
//$$$$$$$$$$$$$$$$$$
}
printf("����һ���򵥵� �� �� �� ������������\n");
printf("��ӣ�%lf\n", firstDouble + secondDouble + thirdDouble + forthDouble);
printf("�����%lf\n", firstDouble - secondDouble - thirdDouble - forthDouble);
printf("��ˣ�%lf\n", firstDouble*secondDouble*thirdDouble*forthDouble);
printf("�����%lf\n", firstDouble / secondDouble / thirdDouble / forthDouble);
return EXIT_SUCCESS;
}*/
/*#include<iostream>
#include<sstream>
using namespace std;
//###
string arrayString = "";
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
class Sort {
public:
void insertionSort(int*arrayInt, int arraySize) {
for (int i = 1; i < arraySize; i++) {
//###
arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
int tempIndex = i;
int tempInt = arrayInt[i];
while (tempInt<arrayInt[tempIndex-1]&&tempIndex>=0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//###
arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << "	" << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
}
//###
arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
};
class BinarySearch {
public:
void resultPrint(int*arrayInt,const int numToBeFound,const int arraySize) {
int index = binarySearch(arrayInt,numToBeFound,arraySize);
if (index > -1) {
cout << "�ҵ���" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex <= rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (numToBeFound<arrayInt[middleIndex]) {
rightIndex = middleIndex - 1;
}
else {
leftIndex = middleIndex + 1;
}
}
return -1;
}
};
int main() {
int arrayInt[] = { 9,2,3,4,1,5,8,7,10,11,12,6 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < 15; i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
}
return 0;
}*///7//5529-5579 20161210 -200*29-20*50 +17+32
/*#include<iostream>
#include<sstream>
using namespace std;
//##
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
string arrayString = "[";
//$$$$$$$$$$$$$$$$$$44
class Sort {
public:
void insertionSort(int*arrayInt, const int arraySize) {
for (int i = 0; i < arraySize; i++) {
int tempInt = arrayInt[i];
int tempIndex = i;
while (tempInt<arrayInt[tempIndex-1]) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
}
arrayInt[tempIndex] = tempInt;
//##
arrayString = "[";
for (int index = 0; index < arraySize;index++) {
arrayString += returnString(arrayInt[index]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$4
}
}
};
class BinarySearch {
public:
void printResult(int*arrayInt, const int numToBeFound, const int arraySize) {
//##
arrayString = "[";
for (int index = 0; index < arraySize; index++) {
arrayString += returnString(arrayInt[index]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$4
if (binarySearch(arrayInt, numToBeFound, arraySize) != -1) {
cout << "�ҵ���" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
int middleIndex = 0;
while (leftIndex <= rightIndex) {
middleIndex = (rightIndex + leftIndex) / 2;
//##
cout << "rightIndex:" << rightIndex << " leftIndex:" << leftIndex << " middleIndex:" << middleIndex << endl;
//$$$$$$$$$$$$$$$4
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (arrayInt[middleIndex] < numToBeFound) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
}
cout << "rightIndex:" << rightIndex << " leftIndex:" << leftIndex << " middleIndex:" << middleIndex << endl;
return -1;
}
};
int main(int columnCount,char*argumentVector) {
int arrayInt[] = { 3,2,4,1,5,6,19,17,26,15,14,13,12,11,10 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < 30; i++) {
caseBinarySearch.printResult(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
}
return 0;
}*///8
/*#include<iostream>
#include<sstream>
//##
using namespace std;
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream<< value;
stringStream >> valueString;
return valueString;
}
string arrayString;
//$$$$$$$$$$$$$$$$$$
class Sort {
public:
void insertionSort(int*arrayInt, const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempIndex = i;
int tempInt = arrayInt[i];
while (tempInt > arrayInt[tempIndex - 1] && tempIndex > 0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//###
arrayString = "[";
for (int i = 0; i < arraySize;i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$44
}
arrayInt[tempIndex] = tempInt;
}
//###
arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$44
}
};//6432-6482 20161213 -200*29-4*50 +2
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, const int arraySize) {
if (binarySearch(arrayInt, numToBeFound, arraySize)!=-1) {
cout << "�ҵ���" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while(leftIndex<=rightIndex){
int middleIndex = (leftIndex + rightIndex);
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (arrayInt[middleIndex] > numToBeFound) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
}
return -1;
}
};
int main() {
int arrayInt[] = { 3,2,5,4,1,9,8,6,7,10,22,12,11,13,14,15,25,23 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < 36; i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
}
return 0;
}*///9//6549-6599 20161214 -200*29-3*50 +19 //6603-6653 20161215 -200*29-3*50 +23
/*#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
void printMatrix(int **a, int m, int n) {
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
cout << *((int*)a + m * i + j) << "\t";
}
cout << "\n";
}
}
int main() {
int m = 5, n = 5;
int matrixdata[5][5] = { { 1 ,1 ,0 ,0 ,1 },
{ 1 ,1, 0 ,0, 0 },
{ 1 ,1 ,1 ,1 ,1 },
{ 1 ,1 ,0 ,1 ,0 },
{ 1 ,0 ,0 ,1 ,0 } };
cout << "----------matrix--------" << endl;
printMatrix((int**)matrixdata, m, n);
int b[200][200];
int i, j;
for (i = 0; i < m; i++) {
cout << "set\t";
for (j = 0; j < n; j++) {
cout << "(" << i << "," << j << "):" << matrixdata[i][j] << "\t";
b[i][j] = matrixdata[i][j];
}
cout << endl;
}
cout << "----------b--------" << endl;
printMatrix((int**)b, 200, n);
}*/
/*#include<iostream>
#include<sstream>
#include<string>
using namespace std;
//##
inline string returnString(int value) {
string arrayString;
stringstream stringStream;
stringStream << value;
stringStream >> arrayString;
return arrayString;
}
string arrayString;
//$$$$$$$$$$$$$$$$$$$444
class Sort {
public:
void insertionSort(int*arrayInt,const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempIndex = i;
int tempInt = arrayInt[i];
while (tempInt<arrayInt[tempIndex-1]&&tempIndex>0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//##
arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$4
}
arrayInt[tempIndex] = tempInt;
}
//##
arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$
}
int*mergeSort(int*arrayInt,const int arraySize) {
int*tempIndexInt = new int[arraySize];
return tempIndexInt;
}
void mergeSort(int*arrayInt, int leftIndex, int rightIndex) {
int*tempIndexInt = new int[rightIndex+1];
if (leftIndex < rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
mergeSort(arrayInt, leftIndex, middleIndex);
mergeSort(arrayInt, middleIndex + 1, rightIndex);
merge(arrayInt, arrayInt, leftIndex, middleIndex, rightIndex);
copy(arrayInt, arrayInt, leftIndex, rightIndex);
}
delete[]tempIndexInt;
}
void merge(int*arrayInt, int*tempArrayInt, int leftIndex, int middleIndex, int rightIndex) {
if (tempArrayInt[0] > tempArrayInt[1]) {
int temp = tempArrayInt[0];
tempArrayInt[0] = tempArrayInt[1];
tempArrayInt[1] = temp;
}
}
void copy(int*arrayInt, int*tempArrayInt, int leftIndex, int rightIndex) {
}
};
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, const int arraySize) {
if (binarySearch(arrayInt, numToBeFound, arraySize)!=-1) {
cout << "�ҵ�" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex <= rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
//##
string arrayString = "[";
for (int j = 0; j < arraySize; j++) {
arrayString += returnString(arrayInt[j]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << "	leftIndex:" << leftIndex << "	rightIndex" << rightIndex << "	arrayInt[" << middleIndex << "]:" << arrayInt[middleIndex] << endl;
//####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (arrayInt[middleIndex] > numToBeFound) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
//###
cout << leftIndex << " <= " << rightIndex << ":" << (leftIndex <= rightIndex) << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$444

}
return -1;
}
};
int main() {
int arrayInt[] = { 3,2,8,1,4,10,5,7,12,6,18,9 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < sizeof(arrayInt) / sizeof(arrayInt[0]); i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
}
return 0;//6604-6654 20161216 -200*29-4*50 +23
}*///10
/*#include<iostream>
#include<sstream>
using namespace std;
class Sort {
public:
void insertionSort(int*arrayInt,const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempIndex = i;
int tempInt = arrayInt[i];
while (tempInt<arrayInt[tempIndex-1]&&tempIndex>0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//##
string arrayString = "		[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 1, 1);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
//##
string arrayString = "[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl << "````````````````````````````````````````````````````````````````````````" << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
//##
string arrayString = "	[";
for (int i = 0; i < arraySize; i++) {
string temp;
stringstream stringStream;
stringStream << arrayInt[i];
stringStream >> temp;
arrayString += temp + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
};
//###
inline string toString(int valueInt) {
string valueString = "";
stringstream stringStream;
stringStream << valueInt;
stringStream >> valueString;
return valueString;
}
string binarySearchString;
//������������������������������������������������������������
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, const int arraySize) {
if (binarySearch(arrayInt, numToBeFound, arraySize) != -1) {
cout << "�ҵ���" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int *arrayInt, const int numToBeFound, const int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
int middleIndex = 0;
while (leftIndex <= rightIndex) {
middleIndex = (leftIndex + rightIndex) / 2;
//###
binarySearchString = "[leftIndex = ";
binarySearchString += toString(leftIndex) + " , rightIndex = ";
binarySearchString += toString(rightIndex) + " , (";//"($right + $left) / 2 = middle = $middle , arrayInt[$middle] = arrayInt[middle]"
binarySearchString += toString(leftIndex);
binarySearchString += " + ";
binarySearchString += toString(rightIndex);
binarySearchString += ") / 2 = middleIndex = ";
binarySearchString += toString(middleIndex);//arrayInt[$middle] = arrayInt[middle]"
binarySearchString += " , arrayInt[";
binarySearchString += toString(middleIndex);
binarySearchString += "] = ";
binarySearchString += toString(arrayInt[middleIndex]);
binarySearchString += "]";
cout << binarySearchString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (arrayInt[middleIndex] < numToBeFound) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
}
//###
binarySearchString = "[leftIndex = ";
binarySearchString += toString(leftIndex) + " , rightIndex = ";
binarySearchString += toString(rightIndex) + " , (";//"($right + $left) / 2 = middle = $middle , arrayInt[$middle] = arrayInt[middle]"
binarySearchString += toString(leftIndex);
binarySearchString += " + ";
binarySearchString += toString(rightIndex);
binarySearchString += ") / 2 = middleIndex = ";
binarySearchString += toString(middleIndex);//arrayInt[$middle] = arrayInt[middle]"
binarySearchString += " , arrayInt[";
binarySearchString += toString(middleIndex);
binarySearchString += "] = ";
binarySearchString += toString(arrayInt[middleIndex]);
binarySearchString += "]";
cout << binarySearchString << endl;
//��������������������������������������������������������������������������
return -1;
}
};
int main() {
int arrayInt[] = { 3,2,8,9,7,1,5,4,6,10,11,32,12,13 };
Sort caseSort;
caseSort.insertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
for (int i = 0; i < 34; i++) {
caseBinarySearch.resultPrint(arrayInt, i, sizeof(arrayInt) / sizeof(arrayInt[0]));
cout << "``````````````````````````````````````````````````````````````````````````````````````" << endl;
}
return 0;
}*///11
/*#include<iostream>
#include<sstream>
using namespace std;
//###
string arrayString;
inline string returnString(int value) {
string valueString;
stringstream stringStream;
stringStream << value;
stringStream >> valueString;
return valueString;
}
//$$$$����������������������������������$$������������
class Sort {
public:
void inertionSort(int*arrayInt, const int arraySize) {
for (int i = 1; i < arraySize; i++) {
int tempIndex = i;
int tempInt = arrayInt[i];
while (arrayInt[tempIndex-1]>tempInt&&tempIndex>0) {
arrayInt[tempIndex] = arrayInt[tempIndex - 1];
tempIndex--;
//##
arrayString = "		[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i]) + " ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
arrayInt[tempIndex] = tempInt;
//##
arrayString = "[";
for (int i = 0; i < arraySize; i++) {
arrayString += returnString(arrayInt[i])+" ,";
}
arrayString.erase(arrayString.size() - 2, 2);
arrayString += "]";
cout << arrayString << endl << "````````````````````````````````````````````````````````````````````````" << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
}
};
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, int arraySize) {
if (binarySearch(arrayInt, numToBeFound, arraySize) != -1) {
cout << "�ҵ�" << numToBeFound << endl;
}
else {
cout << "û��" << numToBeFound << endl;
}
}
int binarySearch(int*arrayInt, const int numToBeFound, int arraySize) {
int leftIndex = 0;
int rightIndex = arraySize - 1;
while (leftIndex <= rightIndex) {
int middleIndex = (leftIndex + rightIndex) / 2;
//###
string binarySearchString = "[leftIndex = ";
binarySearchString += returnString(leftIndex) + " , rightIndex = ";
binarySearchString += returnString(rightIndex) + " , (";//"($right + $left) / 2 = middle = $middle , arrayInt[$middle] = arrayInt[middle]"
binarySearchString += returnString(leftIndex);
binarySearchString += " + ";
binarySearchString += returnString(rightIndex);
binarySearchString += ") / 2 = middleIndex = ";
binarySearchString += returnString(middleIndex);//arrayInt[$middle] = arrayInt[middle]"
binarySearchString += " , arrayInt[";
binarySearchString += returnString(middleIndex);
binarySearchString += "] = ";
binarySearchString += returnString(arrayInt[middleIndex]);
binarySearchString += "]";
cout << binarySearchString << endl;
//$$$$$$$$$$$$$$$$$$$$$$$$$$
if (arrayInt[middleIndex] == numToBeFound) {
return middleIndex;
}
if (arrayInt[middleIndex] < numToBeFound) {
leftIndex = middleIndex + 1;
}
else {
rightIndex = middleIndex - 1;
}
}
return -1;
}
};
int main() {
int arrayInt[] = { 3,2,6,1,4,9,8,10,5,7,11,12 };
Sort caseSort;
caseSort.inertionSort(arrayInt, sizeof(arrayInt) / sizeof(arrayInt[0]));
BinarySearch caseBinarySearch;
caseBinarySearch.resultPrint(arrayInt,sizeof(arrayInt),sizeof(arrayInt)/sizeof(arrayInt[0]));
return 0;//6715-6815 20161218 -200*29-4*50 +34
}*///12
//13
//14
//15
//16
//17
//18
//19
//20
//6914-6964 20161223 -200*29-8*50 +34