// 20160820.cpp : 定义控制台应用程序的入口点。
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
	printf("a b c d e\n");//两句话 JFrame int this EditData
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
		cout << "页码中用到数字 " << i << " 的的次数 " << count[i] <<"	pages%10 = "<<pages%10<<",pages/10="<<pages/10<< endl;
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
		for (int i = 1; i <= pages; i++) { //页码
			if (i % 10 == 0)
			{
				//cout << endl;
			}
			//cout << setw(4) << i;
			countNum(i, index);//统计页数
		}
		for (int j = 0; j < 10; j++)
		{
			cout << "\n用到" << j << ":" << index[j] << "次";
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
				cout << "交换后" << endl << "	";
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
				cout << "反交换" << endl << "	";
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
				cout << "交换" << endl << "	";
				for (int i = 0; i < sizeof(list); i++) {
					cout << list[i];
				}
				cout << " k:" << k << endl;
				cout << "递归调用getValue(" << list[k] << " , " << k + 1 << " , " << m << ")" << endl;
				//$$$$$$$$$$$$$$$$$$$$$
				getValue(list, k + 1, m);
				temp = list[k];
				list[k] = list[i];
				list[i] = temp;
				//###############
				cout << "反交换getValue(" << list[k] << " , " << k + 1 << " , " << m << ")" << endl;
				//$$$$$$$$$$$$$$$$$
			}
		}
		//######
		cout << "结束getValue(" << list[k] << " , " << k << " , " << m << ")" << endl << endl;
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
				cout << "调用递归函数：getValue(" << list << " , k+1=" << k + 1 << " , " << m << ") for中 i = " << i << " " << list[i] << " 和 " << list[k] << " 交换" << endl;
				//$$$$$$$$$$$$
				getValue(list, k + 1, m);
				tmp = list[k];
				list[k] = list[i];
				list[i] = tmp;
			}
		}
		//#####
		cout << "函数结束getValue(" << list << " , " << k << " , " << m << ")" << endl;
		//￥￥￥
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
				cout <<"	"<< list[i] <<  " 和 " << list[k] << " 交换" << endl;
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
作者：Milo Yip
链接：https://www.zhihu.com/question/20187195/answer/34873279
来源：知乎
著作权归作者所有，转载请联系作者获得授权。

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
				cout << "getValue( " << list << " , " << startIndex + 1 << " , " << endIndex << " ) " << list[startIndex] << " 交换 " << list[i] << endl;
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
				cout << "	" << list[i] << " 交换 " << list[startIndex] << " startIndex:" << startIndex << " , i:" << i << endl;
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
				cout << "	处理数组";
				for (int i = startIndex; i <= endIndex; i++) {
					cout << list[i];
				}
				cout <<" : "<< list[startIndex] << " 和 " << list[i] << " 交换" << endl;
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
				cout << "处理数组";
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
				cout << "处理数组：";
				for (int j = startIndex; j <= endIndex; j ++ ) {
					cout << list[j];
				}
				cout <<" "<< list[startIndex] << "和" << list[i] << "交换后：";
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
				cout << "处理数组：";
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
				cout << "	处理数组：";
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
				cout << "	处理数组：";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				//$$
				Type tmp = list[startIndex];
				list[startIndex] = list[i];
				list[i] = tmp;
				//##
				cout << "交换后子数组：";
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
				cout << "	处理数组：";
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
				cout << "处理数组：";
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
				cout << "endIndex" << endIndex << "sizeof(list)/sizeof(list[0]):" << sizeof(list) / sizeof(list[0]) << "	处理数组：";
				for (int index = startIndex; index <= endIndex; index++) {
					cout << list[index];
				}
				cout << endl;
				//￥￥
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
				cout << "	处理数组：";
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
				cout << "	处理数组";
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
				cout << "	处理数组";
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
				cout << "	处理数组：";
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
				cout << "	处理数组";
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
				cout << "	处理数组";
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
//#pragma warning(disable:4996)//改20161030
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
	PlaySound(_T("bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);//改
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
			printf("打砖块游戏\n得分:%d/%d：\n", score, sum);
			printf("┏");
			for (j = 0; j<N; j++)
			{
				printf("━");
			}
			printf("┓\n");
			for (i = 0; i<M; i++)
			{
				printf("┃");
				for (j = 0; j<N; j++)
				{


					if (i == y && j == x)
					{
						printf("●");
					}
					else
					{
						switch (a[i][j])
						{
						case 0:printf("　"); break;
						case 1:printf("※"); break;
						}
					}
				}
				printf("┃\n");
			}
			printf("┗");
			for (j = 0; j<N; j++)
			{
				if (j>p - d && j<p + d)
				{
					printf("█");
				}
				else printf("━");
			}
			printf("┛\n");
			if (_kbhit())//改
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
						if (score % 2 == 0)mciOpen.lpstrElementName = _T("get1.mp3");//改
						else mciOpen.lpstrElementName = _T("get2.mp3");//改
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
			printf("恭喜你，你淫了，再接再厉啊~\\(≧▽≦)/~\n");
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
			printf("真遗憾，你输了，下次注意啊Orz\n");
			sum = 0; score = 0;
			mciSendCommand(dev[0], MCI_CLOSE, NULL, NULL);
			{
				mciOpen.lpstrElementName = _T("bang.wav");//改
				if (mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen) == 0)
					dev[0] = mciOpen.wDeviceID;
				else
					mciOpen.wDeviceID = dev[0];
				mciPlay.dwFrom = 0;
				mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_NOTIFY | MCI_FROM, (DWORD)&mciPlay);
			}
		}
		printf("是否再来一次：\n1、是\t2、否\n");
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
	num[p] = num[j];//必须是j不能是i
	num[j] = x;
	return j;
}
int select(int p, int r, int k)//选择p到r间的第k小元素
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
			printf("无法打开\n");
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
			//、4、
			printf("\nplease putin k:\n");
			scanf("%d", &k);
			j = select(0, i - 1, k);
			printf("\n第 %d 小的数是: %d\n", k, j);
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
			cout << "	n<1 || m<1:处理 q( " << n << " , " << m << " )" << endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << "		n == 1 || m==1 处理 q( " << n << " , " << m << " )" << endl;
			return 1;
		}
		if (n < m) {
			cout << "		n<m:处理 q( " << n << " , " << m << " )" << endl;
			q(n, n);
		}
		if (n == m) {
			cout << "			n==m:处理 q( " << n << " , " << m << " )" << endl;
			return q(n, m - 1) + 1;
		}
		cout << "				最后return :处理 q( " << n << " , " << m << " )" << endl;
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
			cout << "	n < 1 || m < 1 处理" << n << " , " << m << endl;
			return 0;
		}
		if (n == 1 || m == 1) {
			cout << "	n == 1 || m == 1 处理" << n << " , " << m << endl;
			return 1;
		}
		if (n < m) {
			cout << "	n < m  处理" << n << " , " << m << endl;
			return q(n, n);
		}
		if (n == m) {
			cout << "	n == m 处理" << n << " , " << m << endl;
			return q(n, m - 1) + 1;
		}
		cout << "最后return：处理" << n << " , " << m << endl;
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
		cout << "普通级" << m << " , " << n << endl;
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
#define N 100//定义最大连乘的矩阵个数为100个
void matrixChain(int p[], int m[N + 1][N + 1], int s[N + 1][N + 1])/*用m[i][j]二维数组来存储Ai*......Aj的最小数乘次数，用s[i][j]来存储使Ai......Aj获得最小数乘次数对应的断开位置k，需要注意的是此处的N+1非常关键，虽然只用到的行列下标只从1到N但是下标0对应的元素默认也属于该数组，所以数组的长度就应该为N+1*/
/*{
	int n = N;//定义m,s数组的都是n*n的，不用行列下标为0的元素，但包括在该数组中
	for (int i = 1; i <= n; i++)
		m[i][i] = 0; /*将矩阵m的对角线位置上元素全部置0，此时应是r=1的情况，表示先计 算第一层对角线上个元素的值*/
		/*	for (int r = 2; r <= n; r++)//r表示斜对角线的层数，从2取到n
			{
				for (int i = 1; i <= n - r + 1; i++)//i表示计算第r层斜对角线上第i行元素的值
				{
					int j = i + r - 1;//j表示当斜对角线层数为r，行下标为i时的列下标
					m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];//计算当断开位置为i时对应的数乘次数
					s[i][j] = i;//断开位置为i
					for (int k = i + 1; k < j; k++)
					{
						int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];/*计算当断开位置k为从i到j（不包括i和j）的所有取值对应的(Ai*......*Ak)*(Ak+1*.......Aj)的数乘次数*/
						/*				if (t < m[i][j])
										{
											m[i][j] = t;//将Ai*......Aj的最小数乘次数存入m[i][j]
											s[i][j] = k;//将对应的断开位置k存入s[i][j]
										}
									}
								}
							}
						}
						void traceback(int i, int j, int s[][N + 1])//用递归来实现输出得到最小数乘次数的表达式
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
							int n;//用来存储矩阵的个数
							int q[2 * N];/*用q数组来存储最原始的输入（各矩阵的行和列），主要目的是为了检验这N个矩阵是否满足连乘的条件*/
							/*	int p[N + 1], flag = 1;/*用p[i-1],p[i]数组来存储A的阶数，flag用来判断这N个矩阵是否满足连乘*/
							/*	int m[N + 1][N + 1];// 用m[i][j]二维数组来存储Ai*......Aj的最小数乘次数
								int s[N + 1][N + 1];// 用s[i][j]来存储使Ai......Aj获得最小数乘次数对应的断开位置k
								printf("请输入矩阵的个数（小于100）:");  scanf("%d", &n);
								for (int i = 0; i <= 2 * n - 1; i++)//各矩阵的阶数的输入先存入数组q中接受检验
								{
									if (i % 2 == 0)
									{
										printf("********************\n");
										printf("*请输入A%d的行:", (i / 2) + 1);
									}
									else
									{
										printf("列************:");
									}
									scanf("%d", &q[i]);
								}
								for (int i = 1; i <= 2 * n - 2; i++)//矩阵连乘条件的检验
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
									printf("式子如下:\n");
									traceback(1, n, s);
									printf("\n");
									printf("最小数乘次数为%d\n", m[1][n]);
								}
								else
								{
									printf("这%d个矩阵不能连乘!\n", n);
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
										return 1;
									}
									if (n < m) {
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << q(n, n) << endl;
										return q(n, n);
									}
									if (n == m) {
										cout << "忽略一个q(n , m-1) ";
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << q(n, m - 1) << " + 1" << endl;
										return q(n, m - 1) + 1;
									}
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
										return 1;
									}
									if (n < m) {
										cout << "省略q(n , m) --> q(n , n) ";
										cout << n << " , " << m << " n < m q(" << n << " , " << m << ") = " << "q(" << n << " , " << n << ") = " << q(n, n) << endl;
										return q(n, n);
									}
									if (n == m) {
										cout << "忽略一个q(n , m-1) ";
										cout << n << " , " << m << " n == m q( " << n << " , " << m << " - 1" << " ) + 1 = " << q(n, m - 1) << " + 1" << endl;
										return q(n, m - 1) + 1;
									}
									cout << "忽略一个q(n , m-1)，一个q(n , m-n)";
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << " = " << q(n, m - 1) << " + " << q(n - m, m) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
							char num[501][501]; ///记录中间结果的数组
							char flag[501][501];    ///标记数组，用于标识下标的走向，构造出公共子序列
							void LCS(); ///动态规划求解
							void getLCS();    ///采用倒推方式求最长公共子序列

							int main()
							{
								/*int i;
								int randStringLength = 20;
								srand(time(NULL) + rand());    //初始化随机数的种子
								char temp0Char[501], temp1Char[501];
								for (i = 0; i < randStringLength; i++)
								{
									temp0Char[i] = rand() % 65 + 32;      //控制得到的随机数为可显示字符
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
								//￥￥￥￥￥￥￥￥
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
										if (a[i - 1] == b[j - 1])   ///注意这里的下标是i-1与j-1
										{
											num[i][j] = num[i - 1][j - 1] + 1;
											flag[i][j] = 1;  ///斜向下标记
										}
										else if (num[i][j - 1]>num[i - 1][j])
										{
											num[i][j] = num[i][j - 1];
											flag[i][j] = 2;  ///向右标记
										}
										else
										{
											num[i][j] = num[i - 1][j];
											flag[i][j] = 3;  ///向下标记
										}
									}
								}
							}

							void getLCS()
							{

								char res[500];
								int i = strlen(a);
								int j = strlen(b);
								int k = 0;    ///用于保存结果的数组标志位
								while (i>0 && j>0)
								{
									if (flag[i][j] == 1)   ///如果是斜向下标记
									{
										res[k] = a[i - 1];
										k++;
										i--;
										j--;
									}
									else if (flag[i][j] == 2)  ///如果是斜向右标记
										j--;
									else if (flag[i][j] == 3)  ///如果是斜向下标记
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
								//common_len[i][j]存储的是x的第i位与有的第j位的公共子序列的长度
								//b[i][j] 记录获得common_len[i][j]的路径：分别为0 -1 1，便于回溯输出公共子串

								int i, j;

								for (i = 0; i < x_len; i++)
									common_len[i][0] = 0;
								for (j = 0; j < y_len; j++)
									common_len[0][j] = 0;

								for (i = 1; i <= x_len; i++)
								{
									for (j = 1; j <= y_len; j++)
									{
										if (x[i - 1] == y[j - 1])  //从零开始存储，所以第i位为x[i-1]
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
								srand(time(NULL) + rand());    //初始化随机数的种子
								for (i = 0; i < randStringLength; i++)
								{
									x[i] = rand() % 26 + 65;      //控制得到的随机数为可显示字符
									y[i] = rand() % 26 + 65;
								}
								x[i] = 0;
								y[i] = 0;
								printf("%s\n", x);
								printf("%s\n", y);
								printf("最长公共子序列为：\n");
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
										cout << n << " , " << m << " n < 1 || m < 1 返回" << 0 << endl;
										return 0;
									}
									if (n == 1 || m == 1) {
										cout << n << " , " << m << " n == 1 || m==1 返回" << 1 << endl;
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
									cout << n << " , " << m << " n 大于 m q(" << n << " , " << m << " - " << 1 << " ) + q(" << n << " - " << m << " , " << m << ") = " << (arg0 = q(n, m - 1)) << " + " << (arg1 = q(n - m, m)) << endl;
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
										cout << "hanoiCount小于等于1 count <= 1 count = " << hanoiCount << endl;
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
										cout << "hanoiCount小于等于1 count <= 1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << "hanoiCount > 1  aColumn到cColumn print(" << hanoiCount <<" , "<<aColumn<<" , "<<cColumn<<" , "<<bColumn<<")"<< endl;
										print(hanoiCount - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "hanoiCount > 1  aColumn到cColumn print(" << hanoiCount << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "hanoiCount小于等于1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn<<" print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << " --> " << cColumn << endl;
										cout << aColumn << "和" << bColumn << "交换  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->"<<cColumn << endl;
										cout << aColumn << "和" << bColumn << "交换  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " --> " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << aColumn << "和" << bColumn << "交换  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn <<" --> "<< cColumn << endl;
										cout << aColumn << "和" << bColumn << "交换  print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
							int V[200][200];//前i个物品装入容量为j的背包中获得的最大价值
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
								printf("选中的物品是:\n");
								for (i = 0; i<n; i++)
									printf("%d ", x[i]);
								printf("\n");
								return V[n - 1][C];

							}

							void main()
							{
								int s;//获得的最大价值
								int w[200];//物品的重量
								int v[200];//物品的价值
								int x[200];//物品的选取状态
								int n, i;
								int C;//背包最大容量
								n = 5;
								printf("请输入背包的最大容量:\n");
								scanf("%d", &C);

								printf("输入物品数:\n");
								scanf("%d", &n);
								printf("请分别输入物品的重量:\n");
								for (i = 0; i<n; i++)
									scanf("%d", &w[i]);

								printf("请分别输入物品的价值:\n");
								for (i = 0; i<n; i++)
									scanf("%d", &v[i]);

								s = KnapSack(n, w, v, x, C);

								printf("最大物品价值为:\n");
								printf("%d\n", s);


							}/*
							#include<iostream>
							using namespace std;
							class Hanoi {
							public:
								static void hanoiPrint(int count, int aColumn, int bColumn, int cColumn) {
									if (count <= 1) {
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << "-->" << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn <<" aColumn到bColumn"<< " print(" << count << " , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << " - - > " << cColumn << endl;
										cout << aColumn << "和" << bColumn << "交换 bColumn到cColumn print(" << count << " , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count<<" , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - >" << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
										cout << aColumn << " - - > " << cColumn << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn << endl;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
										cout << "	hanoiCount小于等于1 " << endl;
									}
									else {
										cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
										hanoiPrint(count - 1, aColumn, cColumn, bColumn);
										cout << aColumn << "-->" << cColumn;
										cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
										cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
								int matrix[N][M];      //邻接矩阵
								int n;                 //顶点数
								int e;                 //边数
							}MGraph;

							void DijkstraPath(MGraph g, int *dist, int *path, int v0)   //v0表示源顶点
							{
								int i, j, k;
								bool *visited = (bool *)malloc(sizeof(bool)*g.n);
								for (i = 0; i<g.n; i++)     //初始化
								{
									if (g.matrix[v0][i]>0 && i != v0)
									{
										dist[i] = g.matrix[v0][i];
										path[i] = v0;     //path记录最短路径上从v0到i的前一个顶点
									}
									else
									{
										dist[i] = INT_MAX;    //若i不与v0直接相邻，则权值置为无穷大
										path[i] = -1;
									}
									visited[i] = false;
									path[v0] = v0;
									dist[v0] = 0;
								}
								visited[v0] = true;
								for (i = 1; i<g.n; i++)     //循环扩展n-1次
								{
									int min = INT_MAX;
									int u;
									for (j = 0; j<g.n; j++)    //寻找未被扩展的权值最小的顶点
									{
										if (visited[j] == false && dist[j]<min)
										{
											min = dist[j];
											u = j;
										}
									}
									visited[u] = true;
									for (k = 0; k<g.n; k++)   //更新dist数组的值和路径的值
									{
										if (visited[k] == false && g.matrix[u][k]>0 && min + g.matrix[u][k]<dist[k])
										{
											dist[k] = min + g.matrix[u][k];
											path[k] = u;
										}
									}
								}
							}

							void showPath(int *path, int v, int v0)   //打印最短路径上的各个顶点
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
								int n, e;     //表示输入的顶点数和边数
								while (cin >> n >> e&&e != 0)
								{
									int i, j;
									int s, t, w;      //表示存在一条边s->t,权值为w
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
									cin >> v0;        //输入源顶点
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
				cout << "没有从 [" << fromVertexIndex << "] 到达 [" << toVertexIndex << "] 顶点的路径";
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
			cout << "顶点[" << fromVertexIndex << "] 到 顶点[" << toVertexIndex << "] 的最短路径：";
		}
		pathPrint(previous, fromVertexIndex, toVertexIndex);
		if (distance[toVertexIndex] != maxInt) {
			cout << "		最短路径长度：" << distance[toVertexIndex];
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
			cout << "	hanoiCount小于等于1 " << endl;
		}
		else {
			cout << bColumn << "交换" << cColumn << " aColumn到bColumn" << " print(" << count - 1 << "`" << count << "-1` , " << aColumn << " , " << cColumn << " , " << bColumn << ")" << endl;
			hanoiPrint(count - 1, aColumn, cColumn, bColumn);
			cout << aColumn << "-->" << cColumn;
			cout << "		aColumn到cColumn" << "在print(" << count << " , " << aColumn << " , " << bColumn << " , " << cColumn << ")的函数" << endl;
			cout << aColumn << " , " << bColumn << "交换 bColumn到cColumn print(" << count - 1 << "`" << count << "-1` , " << bColumn << " , " << aColumn << " , " << cColumn << ")" << endl;
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
		cout<<"最小生成树的连接："<< endl;
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
			cout << "[" << j << "] 连接 [" << closest[j] << "]" << endl;
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
//￥￥￥￥￥￥￥￥￥￥￥
template<class Type>
class QuickSort {
public:
	void quickSort(Type *arrayInt, int startIndex, int endIndex) {
		if (startIndex<endIndex) {
			//##
			arrayString = "quickSort：[";
			for (index = startIndex; index <=endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempType && tempStartIndex<tempEndIndex)：";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempType) + " && " + returnString(tempStartIndex+1) + " < " + returnString(endIndex) + ")：";
			arrayString+=returnString(arrayInt[tempStartIndex + 1] < tempType&&(tempStartIndex+1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[++tempStartIndex] < tempType&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempType && tempStartIndex<tempEndIndex)：";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempType) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempType && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempType)：";
			arrayString += "while("+returnString(arrayInt[tempEndIndex-1])+" > "+returnString(tempType)+")：";
			arrayString += returnString(arrayInt[tempEndIndex-1] > tempType);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[--tempEndIndex] > tempType) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempType)：";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempType) + ")：";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempType);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) { 
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex <<"："<< (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break; 
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpInt = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpInt;
		}
		//###
		cout <<"arrayInt[startIndex]和arrayInt[tempEndIndex]交换："<< "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥$$$$$$$$$$$$$$$$$$$$$$$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥4
	caseQuickSort.quickSort(arrayInt, 0, sizeof(arrayInt) / sizeof(arrayInt[0])-1);
	//##
	arrayString = "[";
	for (index = 0; index < sizeof(arrayInt) / sizeof(arrayInt[0]); index++) {
		arrayString += returnString(arrayInt[index]) + " ,";
	}
	arrayString.erase(arrayString.size() - 2, 2);
	arrayString += "]";
	cout << arrayString << endl;
	//￥￥￥$$$$$$$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥4
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
				cout << "	处理数组";
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
//￥￥￥￥￥￥￥￥￥￥￥
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
			arrayString = "处理数组：[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString <<"startIndex:"<<startIndex<<" , endIndex:"<<endIndex<< endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			arrayString = "前分段数组：[";
			for (index = startIndex; index <= distinguishIndex-1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			quickSort(arrayInt, startIndex,distinguishIndex - 1);
			//##
			arrayString = "后分段数组：[";
			for (index = distinguishIndex+1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
		}
	}
	int partition(int *arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)：";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[++tempStartIndex] < tempInt&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)：";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		if (startIndex < endIndex) {
			//##
			arrayString = "[";
			for (index = 0; index < arraySize; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString;
			arrayString = "处理数组：[";
			for (index = startIndex; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << "startIndex:" << startIndex << " , endIndex:" << endIndex << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int distinguishIndex = partition(arrayInt, startIndex, endIndex);
			//##
			arrayString = "前分段数组：[";
			for (index = startIndex; index <= distinguishIndex - 1; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			quickSort(arrayInt, startIndex, distinguishIndex - 1);
			//##
			arrayString = "后分段数组：[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			quickSort(arrayInt, distinguishIndex + 1, endIndex);
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)：";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[++tempStartIndex]<tempInt && tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<tempEndIndex)：";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
		cout << "处理print(" << n << " - 1)" << endl;
		print(n - 1);
		cout << "返回print(" << n << " - 1)" << endl;
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString <<", "<< distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex+1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {		
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[++tempStartIndex] < tempInt&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(arrayInt[++" + returnString(tempStartIndex) + "]<tempInt && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(arrayInt[tempStartIndex + 1]) + "<" + returnString(tempInt) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
			arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
			arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (arrayInt[--tempEndIndex] > tempInt) {
				//##
				arrayString = "while(arrayInt[--" + returnString(tempEndIndex) + "] > tempInt)：";
				arrayString += "while(" + returnString(arrayInt[tempEndIndex - 1]) + " > " + returnString(tempInt) + ")：";
				arrayString += returnString(arrayInt[tempEndIndex - 1] > tempInt);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout <<"arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换："<< "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmp = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmp;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int *arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex]&&tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1])   + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex-1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex-1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) { 
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort{
public:
	void quickSort(int *arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex+1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex){
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while(tempInt>arrayInt[++tempStartIndex]&&tempStartIndex<endIndex){
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while(tempInt<arrayInt[--tempEndIndex]){
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt,int startIndex,int endIndex){
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥

		}
	}
	int partition(int*arrayInt,int startIndex,int endIndex){
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		} 
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥		
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int *arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]){
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt, int startIndex, int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex > tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
		cout << "如果对折 " << i << " 次，中间切一刀，可以得到 ";
		cout << caseCutNoodle.getNoodles(i);
		cout << "根面条" << endl;
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
//￥￥￥￥￥￥￥￥￥￥￥
class QuickSort {
public:
	void quickSort(int*arrayInt,int startIndex,int endIndex) {
		//##
		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			//##
			arrayString = "[";
			for (index = distinguishIndex + 1; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			if (arrayString.size() > 3) {
				arrayString.erase(arrayString.size() - 2, 2);
			}
			arrayString += "]";
			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
		}
	}
	int partition(int*arrayInt, int startIndex, int endIndex) {
		int tempStartIndex = startIndex;
		int tempEndIndex = endIndex + 1;
		int tempInt = arrayInt[startIndex];
		while (true) {
			//##
			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
			for (index = 0; index <= endIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
				//##
				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
				for (index = 0; index <= endIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			//##
			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
			arrayString += "：[";
			for (index = tempStartIndex; index < tempEndIndex; index++) {
				arrayString += returnString(arrayInt[index]) + " ,";
			}
			arrayString.erase(arrayString.size() - 2, 2);
			arrayString += "]";
			cout << arrayString << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			while (tempInt < arrayInt[--tempEndIndex]) {
				//##
				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
				arrayString += "：[";
				for (index = tempStartIndex; index < tempEndIndex; index++) {
					arrayString += returnString(arrayInt[index]) + " ,";
				}
				arrayString.erase(arrayString.size() - 2, 2);
				arrayString += "]";
				cout << arrayString << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			}
			if (tempStartIndex >= tempEndIndex) {
				//##
				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
				break;
			}
			//###
			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
			int tmpValue = arrayInt[tempStartIndex];
			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
			arrayInt[tempEndIndex] = tmpValue;
		}
		//###
		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
////￥￥￥￥￥￥￥￥￥￥￥
//class QuickSort {
//public:
//	void quickSort(int*arrayInt, int startIndex, int endIndex) {
//		//##
//		cout << "startIndex < endIndex：" << startIndex << " < " << endIndex << "：" << (startIndex < endIndex) << endl;
//		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//			cout << "int distinguishIndex = partition(arrayInt, startIndex, endIndex)：" << "partition(" << arrayString << ", " << startIndex << "," << endIndex << ")\n";
//			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//			cout << "处理quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
//			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//			cout << "返回quickSort(" << arrayString << ", startIndex, " << distinguishIndex << " - 1)：" << "(" << arrayString << ", " << startIndex << ", " << (distinguishIndex - 1) << ")\n";
//			//$$$$$$$$$$4$$$$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			//##
//			arrayString = "[";
//			for (index = distinguishIndex + 1; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			if (arrayString.size() > 3) {
//				arrayString.erase(arrayString.size() - 2, 2);
//			}
//			arrayString += "]";
//			cout << "处理quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
//			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//			cout << "返回quickSort(" << arrayString << ", " << distinguishIndex << " + 1, endIndex)：" << "(" << arrayString << ", " << (distinguishIndex + 1) << ", " << endIndex << ")\n";
//			//$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//		}
//	}
//	int partition(int*arrayInt, int startIndex, int endIndex) {
//		int tempStartIndex = startIndex;
//		int tempEndIndex = endIndex + 1;
//		int tempInt = arrayInt[startIndex];
//		while (true) {
//			//##
//			arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
//			arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
//			arrayString += returnString(tempInt > arrayInt[tempStartIndex + 1] && (tempStartIndex + 1) < endIndex) + "：[";
//			for (index = 0; index <= endIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			arrayString.erase(arrayString.size() - 2, 2);
//			arrayString += "]";
//			cout << arrayString << endl;
//			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			while (tempInt > arrayInt[++tempStartIndex] && tempStartIndex < endIndex) {
//				//##
//				arrayString = "while(tempInt > arrayInt[++" + returnString(tempStartIndex) + "] && tempStartIndex<endIndex)：";
//				arrayString += "while(" + returnString(tempInt) + " > " + returnString(arrayInt[tempStartIndex + 1]) + " && " + returnString(tempStartIndex + 1) + " < " + returnString(endIndex) + ")：";
//				arrayString += returnString(arrayInt[tempStartIndex + 1] < tempInt && (tempStartIndex + 1) < endIndex) + "：[";
//				for (index = 0; index <= endIndex; index++) {
//					arrayString += returnString(arrayInt[index]) + " ,";
//				}
//				arrayString.erase(arrayString.size() - 2, 2);
//				arrayString += "]";
//				cout << arrayString << endl;
//				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			}
//			//##
//			arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
//			arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
//			arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
//			arrayString += "：[";
//			for (index = tempStartIndex; index < tempEndIndex; index++) {
//				arrayString += returnString(arrayInt[index]) + " ,";
//			}
//			arrayString.erase(arrayString.size() - 2, 2);
//			arrayString += "]";
//			cout << arrayString << endl;
//			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			while (tempInt < arrayInt[--tempEndIndex]) {
//				//##
//				arrayString = "while(tempInt < arrayInt[--" + returnString(tempEndIndex) + "])：";
//				arrayString += "while(" + returnString(tempInt) + " < " + returnString(arrayInt[tempEndIndex - 1]) + ")：";
//				arrayString += returnString(tempInt < arrayInt[tempEndIndex - 1]);
//				arrayString += "：[";
//				for (index = tempStartIndex; index < tempEndIndex; index++) {
//					arrayString += returnString(arrayInt[index]) + " ,";
//				}
//				arrayString.erase(arrayString.size() - 2, 2);
//				arrayString += "]";
//				cout << arrayString << endl;
//				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			}
//			if (tempStartIndex >= tempEndIndex) {
//				//##
//				cout << "tempStartIndex >= tempEndIndex：" << tempStartIndex << " >= " << tempEndIndex << "：" << (tempStartIndex >= tempEndIndex) << "：结束while(true)" << endl;
//				//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//				break;
//			}
//			//###
//			cout << "arrayInt[tempStartIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << tempStartIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[tempStartIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
//			//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//			int tmpValue = arrayInt[tempStartIndex];
//			arrayInt[tempStartIndex] = arrayInt[tempEndIndex];
//			arrayInt[tempEndIndex] = tmpValue;
//		}
//		//###
//		cout << "arrayInt[startIndex]和arrayInt[tempEndIndex]交换：" << "arrayInt[" << startIndex << "]和arrayInt[" << tempEndIndex << "]：" << arrayInt[startIndex] << " 和 " << arrayInt[tempEndIndex] << "交换" << endl;
//		//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//	//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
//	return 0;
//}
//18
//19
//19
//20······························
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
//20······························
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
//20······························
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
cout << "找到 " << arrayInt[middleIndex] << "	array[" << middleIndex << "]" << endl;
return;
}
else if (toFindNum < arrayInt[middleIndex]) {
behindIndex = middleIndex;
}else{
frontIndex = middleIndex+1;
}
middleIndex = (behindIndex + frontIndex) / 2;
}
cout << "没有" << toFindNum << endl;
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
cout << "找到" << a[middle] << " array[" <<middle<< "]" << endl;
return middle;
}
if (x > a[middle]) {
left = middle + 1;
}
else {
right = middle - 1;
}
}
cout << "没有" << x << endl;
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
cout << "找到" << arrayInt[middle] << endl;
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
*   Engineer:            赖国勇                                                                            *
*   Date Generated:      2007-11-29                                                                        *
*   Last Revision Date:  2012-06-04                                                                        *
*   Brief Description:	                                                                                   *
*   ①、实验目的                                                                                           *
*   	a、观察、体会操作系统的磁盘调度方法，并通过一个简单的磁盘调度模拟程序的实现，加深对磁盘调度的理解。*
*   	b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。                                      *
*   ②、实验内容                                                                                           *
*		a、模拟实现磁盘调度算法：FCFS，最短寻道优先，电梯算法（实现其中之一）。                      *
*	    b、磁道请求服务顺序由用户输入（可通过从指定的文本文件（TXT文件）中取出）。                         *
*	③、实验要求                                                                                           *
*	    a、使用模块化设计思想来设计。                                                                      *
*   	b、给出主函数和各个算法函数的流程图。                                                              *
*   	c、学生可按照自身条件，随意选择采用的算法。                                                        *
*	④、运行结果                                                                                           *
*	   a、给出磁盘调度算法模拟程序对进程寻道请求的排序结果。                                               *
*	输出：                                                                                                 *
*   	第一列：序号；                                                                                     *
*   	第二列：磁道的服务顺序；                                                                           *
*    	第三列：移动的磁道数；                                                                             *
*	    最后计算出总移动磁道数、平均移动磁道数。                                                           *
*	                                                                                                       *
*	本程序包括:先来先服务算法，最短寻道优先调度算法，电梯算法                                              *
*	VC++6.0调试通过     项目类型：Win32 Console Application                                                *
*                                                                                                          *
************************************************************************************************************/
/*
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
const int MAXQUEUE = 200; //定义请求队列最大长度


//磁道号请求结构体定义
typedef struct TRACK_Node
{
int iGo;		//要访问的磁道号
int iBeVisited;	//磁道是否已经访问标志（1：已访问；0：未访问）
}TRACK;


TRACK queue[MAXQUEUE]; //磁道号请求队列数组


int iReqNum = 0;			//磁道访问请求数
int iStart = 0;			//磁头初始位置
int iNow = 0;				//磁头当前位置
int iSum = 0;				//总移动磁道数
int iInput;				//用户当前输入的整数
char sFileName[20];		//文件名

void Init();			//初始化函数
void Reset();			//重置访问标志、磁头当前位置、总移动磁道数
int ReadTrackFile();	//读入磁道号流文件
void FCFS();			//先来先服务调度算法
void SSTF();			//最短寻道优先调度算法
void SCAN();			//电梯调度算法
void Version();			//显示版权信息函数
void Hint();			//显示实验提示信息函数


void Init()	//初始化函数
{
int i;

for (i = 0; i<MAXQUEUE; i++)
{
queue[i].iGo = -1;		//设置要访问的磁道号为不可能的数-1，以区别正常请求磁道号
queue[i].iBeVisited = 0;	//设置磁道是否已经访问标志为0：未访问
}

} //void Init()


void Reset()	//重置访问标志、磁头当前位置、总移动磁道数
{
int i;

for (i = 0; i<iReqNum; i++)
{
queue[i].iBeVisited = 0; 	//设置磁道是否已经访问标志为0：未访问
}

printf("\n	请输入磁头的初始磁道号（整数）:  ");
scanf("%d", &iStart);	//从标准输入获取用户当前输入的磁头初始位置
iNow = iStart;			//磁头当前位置
iSum = 0;					//总移动磁道数

} //void Reset()


int ReadTrackFile() //读入磁道号流文件
{
FILE *fp;
int iTemp;
char cHead;

cout << "	\n	请输入要打开的磁道号流（文本）文件名（注意：包括路径名和后缀名）:  ";
cin >> sFileName; 		//从标准输入获取用户当前输入的文件名

if ((fp = fopen(sFileName, "r")) == NULL)
{
cout << endl << "	错误：磁道号流文件 " << sFileName << " 打不开，请检查文件名和路径!!" << endl;
return -1;

}
else
{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9)	//过滤空格、换行和TAB字符
{
cHead = fgetc(fp);
}
if (cHead == EOF)
{
printf("	错误：磁道号流文件：%s 为空!!\n", sFileName);
return -1;
}
else
{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp))	//将文件中输入的磁道号依次存入磁道号请求队列数组
{
fscanf(fp, "%d ", &iTemp);
queue[iReqNum].iGo = iTemp;
iReqNum++;	//磁道访问请求数
}
}
}	//if((fp=fopen(sFileName,"r"))==NULL)

return 0;

} //void ReadTrackFile()


void FCFS() //先来先服务调度算法
{
int i;

Reset();	//重置访问标志、磁头当前位置、总移动磁道数

cout << endl << "---------------------------------------------" << endl;

cout << "	先来先服务调度算法的调度结果:  " << endl << endl;
cout << "	    初始磁道号:  " << iStart << endl;
cout << "	序号  下一磁道号  移动的磁道数" << endl;

for (i = 0; i<iReqNum; i++)
{
//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[i].iGo << "      " << abs(queue[i].iGo - iNow) << endl;
iSum += abs(queue[i].iGo - iNow);		//累加总移动磁道数
iNow = queue[i].iGo;					//移动磁头当前位置为当前访问磁道号
}
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);

} //void FCFS()




void SCAN()	//电梯调度算法
{
int i, j;
int iNext;		//即将访问的下一未访问磁道号在数组队列queue中的下标
int iMinMove;	//当前方向上最短寻道距离

cout << endl << "---------------------------------------------" << endl;

cout << endl << "	请选择磁头初始方向（1 OR 2）：" << endl << endl;
cout << "	1  磁头初始向内" << endl << endl << "	2  磁头初始向外" << endl << endl << "	";

cin >> iInput;	//从标准输入获取用户当前输入的整数

switch (iInput)	//用户当前输入的整数
{
case 1:			//磁头初始向内
Reset();	//重置访问标志、磁头当前位置、总移动磁道数

cout << endl << "---------------------------------------------" << endl;

cout << "	电梯调度算法——磁头初始向内的调度结果:  " << endl << endl;
cout << "	    初始磁道号:  " << iStart << endl;
cout << "	序号  下一磁道号  移动的磁道数" << endl;

for (i = 0; i<iReqNum; i++)
{
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++)	//寻找当前方向上寻道距离最短的未访问磁道号在数组队列queue中的下标
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
//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;					//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;				//设置磁道是否已经访问标志为1：已访问
} //if(iNext!=-1)

else	//掉头向外
{
for (j = 0; j<iReqNum; j++)		//寻找当前方向上寻道距离最短的未访问磁道号在数组队列queue中的下标
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

//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;				 	//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;				//设置磁道是否已经访问标志为1：已访问

} //if(iNext!=-1)
} //for(i=0;i<iReqNum;i++)

cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);

break;

case 2:			//磁头初始向外
Reset();
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "电梯调度算法---磁头初始向外的调度结果：·" << endl << endl;
cout << "	初始磁道号：	" << endl;
cout << "序号 下一磁道号 移动的磁道数" << endl;
for (i = iReqNum; i >= 0; i--) {
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++) {//遍历所有数组，找到距离最短（IGo-iNow最小）
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//磁道没有访问过&&向外，向小的访问
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
else {//掉头向内
for (j = 0; j<iReqNum; j++)		//寻找当前方向上寻道距离最短的未访问磁道号在数组队列queue中的下标
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
//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;				 	//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;
}
}
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);

break;

default:
printf("\n	输入错误!!\n\n");
return;
}	//switch(iInput)

} //void SCAN()

void SSTF() //最短寻道优先调度算法
{
}



void Version()	//显示版权信息函数
{
cout << endl << endl;

cout << "         ┏━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
cout << "         ┃　　　 　　磁盘调度算法模拟系统　　        　 ┃" << endl;
cout << "         ┠───────────────────────┨" << endl;
cout << "         ┃　 　　　(c)All Right Reserved    　 　   　　┃" << endl;
cout << "         ┃　　　　　　  LGY  赖国勇    　 　　　　　　　┃" << endl;
cout << "         ┃　　　　　Version 2012 build 2.3 　　 　　　　┃" << endl;
cout << "         ┗━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

cout << endl << endl;

}// void Version()


void Hint() //显示实验提示信息函数
{
cout << endl;

cout << "	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;
cout << "     ①、实验目的						 		   								" << endl;
cout << "     a、观察、体会操作系统的磁盘调度方法，                                   	" << endl;
cout << "     并通过一个简单的磁盘调度模拟程序的实现，加深对磁盘调度的理解。          	" << endl;
cout << "     b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。	            " << endl;
cout << "     ②、实验内容			                                                    " << endl;
cout << "     a、模拟实现磁盘调度算法：FCFS，最短寻道优先，                               " << endl;
cout << "     电梯算法（实现其中之一种以上）。                                            " << endl;
cout << "     b、磁道请求服务顺序由用户输入（可通过从指定的文本（TXT）文件中取出）。      " << endl;
cout << "     ③、实验要求									           			    	" << endl;
cout << "     a、使用模块化设计思想来设计。												" << endl;
cout << "     b、给出主函数和各个算法函数的流程图。	                                	" << endl;
cout << "     c、学生可按照自身条件，随意选择采用的算法。			    					" << endl;
cout << "     ④、运行结果    	                                                     	" << endl;
cout << "     a、给出磁盘调度算法模拟程序对进程寻道请求的排序结果。    					" << endl;
cout << "     输出：               														" << endl;
cout << "     第一列：序号；										                    	" << endl;
cout << "     第二列：磁道的服务顺序； 													" << endl;
cout << "     第三列：移动的磁道数；								    					" << endl;
cout << "     最后计算出总移动磁道数、平均移动磁道数。									" << endl;
cout << "		 												                        	" << endl;
cout << "     本程序包括:先来先服务算法，最短寻道优先调度算法，电梯算法					" << endl;
cout << "     VC++6.0调试通过   项目类型：Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     在WINDOWS中双击DEBUG目录中的EXE文件直接运行，可能没有显示结果窗口就关闭了， " << endl;
cout << "     这不是程序错误，解决方法是：	                                         	" << endl;
cout << "     1、“开始->程序->附件-命令提示符”,打开DOS命令窗口。                    	" << endl;
cout << "     2、改变当前目录至EXE文件所在目录；                                      	" << endl;
cout << "     （或者将EXE文件和测试用的文本文件一并复制到当前目录）。                    	" << endl;
cout << "     3、输入EXE文件的完整名称（含后缀名）运行即可。为方便输入，可以重命名EXE文件。" << endl;
cout << "	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;
cout << endl;

} //void Hint()


void main()
{
int i;
bool bGoOn;		//是否继续磁盘调度算法模拟的标志
char sGoOn[1];	//用户输入是否继续磁盘调度算法模拟的字母：y、Y、N、n

Hint();			//显示实验提示信息函数
Version();		//显示版权信息函数

Init();			//初始化函数

if (ReadTrackFile() == -1)    //读入磁道号流文件
{
printf("	读入磁道号流文件失败!!\n\n");
}
else
{
bGoOn = true;
while (bGoOn)
{
cout << endl << "---------------------------------------------" << endl;
cout << "	从磁道号流文件 " << sFileName << " 所读入的磁道号流如下:" << endl << endl << "	";
for (i = 0; i<iReqNum; i++)
{
cout << queue[i].iGo << " ";
}
cout << endl << endl << "	请求数为:  " << iReqNum << endl << endl;

iInput = -1;		//用户输入的整数以选择算法

cout << endl << "	请输入算法编号（1 OR 2 OR 3）选择调度算法：" << endl << endl;
cout << "	1  先来先服务调度算法" << endl << endl << "	2  电梯调度算法" << endl << endl << "	3  最短寻道优先调度算法 	" << endl << endl << "	";

cin >> iInput;		//从标准输入获取用户当前输入的整数

switch (iInput)		//用户输入的整数以选择算法
{
case 1:
FCFS();		//先来先服务调度算法
break;

case 2:
SCAN();		//电梯调度算法
break;

case 3:
SSTF();		//最短寻道优先调度算法
break;
default:
printf("\n	输入的算法编号错误!!\n\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << "	要继续进行磁盘调度算法模拟吗?(Y/N)	" << endl << "	";
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
string arrayString = "\nfor循环[";
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
cout << "找到" << arrayInt[returnIndex] << " , " << returnIndex << endl;
}
else {
cout << "没有" << toFindNum << endl;
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
cout << "找到了" << arrayInt[arrayIndex] << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
cout << "没有" << numToBeFound << endl;
}
else {
cout << "找到了" << arrayInt[index] << " index:" << index << endl;
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
*   Engineer:            赖国勇                                                                                                     *
*   Date Generated:      2007-11-19                                                                                                 *
*   Last Revision Date:  2012-06-04                                                                                                 *
*   Brief Description:	                                                                                                            *
*	[实验内容]                                                                                                                      *
*	①、实验目的                                                                                                                    *
*		a、进程调度是处理机管理的核心内容。观察、体会操作系统的进程调度方法，                                                       *
*		并通过一个简单的进程调度模拟程序的实现，加深对进程控制块、进程队列、进程调度算法，进程切换的理解，                          *
*		并体会和了解各种调度算法的具体实施办法。                                                                                    *
*		b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。                                                               *
*	②、实验内容                                                                                                                    *
*		a、设计进程控制块PCB表结构，模拟实现进程调度算法：FIFO，静态优先级调度，                                                    *
*		时间片轮转调度，短进程优先调度算法，多级反馈队列调度。（实现其中之一个以上）。                                              *
*		b、编写一个进程调度程序模拟程序。模拟程序只对PCB进行相应的调度模拟操作，不需要实际程序。                                    *
*		c、由用户输入（可通过文件输入）进程名、进程状态、进程运行时间和进程优先级等数据。                                           *
*	③、实验要求                                                                                                                    *
*		a、使用模块化设计思想来设计；                                                                                               *
*		b、给出主函数和各个算法函数的流程图。                                                                                       *
*		c、学生可按照自身条件，随意选择采用的算法，（例如：采用冒泡法编写程序，实现短进程优先调度的算法）                           *
*		d、进程调度程序模拟程序只对PCB进行相应的调度模拟操作，不需要实际程序。	                                                    *
*	④、运行结果                                                                                                                    *
*		a、给出进程的调度模拟操作排序结果。                                                                                         *
*	⑤、提示                                                                                                                        *
*		a、每个进程可有三个状态，并假设初始状态为就绪状态。                                                                         *
*		b、为了便于处理，程序中的进程运行时间以纳秒为单位计算。                                                                     *
*		c、各进程的优先级或轮转时间数以及进程需运行的纳秒数的初始值均由用户给定。                                                   *
*		d、在优先级算法中，采用静态优先级。在时间片轮转算法中，采用可变时间片，由用户给定。                                         *
*		e、对于遇到优先级一致的情况，采用FIFO策略解决。                                                                             *
*                                                                                                                                   *
*	 一、在WINDOWS中双击DEBUG目录中的EXE文件直接运行，可能会没有显示结果窗口就关闭了，这不是程序错误，解决方法是：                  *
*    	1、“开始->程序->附件-命令提示符”,打开DOS命令窗口。                                                                          *
*    	2、改变当前目录至EXE文件所在目录；（或者将EXE文件和测试用的文本文件一并复制到当前目录）。                                   *
*    	3、输入EXE文件的完整名称（含后缀名）运行即可。（为方便输入，可以重命名EXE文件。）                                           *
*    二、 本程序包括:FIFO，优先级调度算法（静态优先级），时间片轮转调度算法，短进程优先调度算法。                                   *
*    	 VC++6.0调试通过  项目类型：Win32 Console Application                                                                       *
*    	输入：进程流文件（文本文件），其中存储的是一系列要执行的进程，每个进程包括四个数据项：                                      *
*    	 	进程名(长度不超过20个的字符串) 进程状态(1就绪 2等待 3运行) 所需时间 优先级(0级最高)                                     *
*    	输出: 进程执行流 等待时间 平均等待时间                                                                                      *
*************************************************************************************************************************************/
/*#include<stdio.h>
#include<string.h>
#include<iostream>
#pragma warning(disable)
using namespace std;
const int MAXPCB = 200;	//定义最大进程数
//定义进程控制块PCB结构体类型
typedef struct PCB_Node {
char sName[20];		//进程名
int iStatus;		//进程状态(1就绪 2等待 3运行) 当前程序中暂时全部默认为就绪处理
int iRunTime; 		//进程运行时间（纳秒）
int iPriority; 		//进程优先数(数字越小优先级越高)
int iBeFinished; 	//进程是否执行完成标志（1：已完成；0：末完成）
int iWaitTime; 		//进程等待时间（纳秒）
}PCB;
PCB pcbs[MAXPCB];		//PCB数组队列
int iPCBNum;			//实际进程数
char sFileName[20];		//进程流文件名
void InitPCB();			//PCB初始化函数
int ReadPCBFile();		//读进程流文件数据，存入PCB数组队列pcbs，并输出
void ReSetPCB();		//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
void FIFO();			//先进先出调度算法
void Priority();		//优先级调度算法
void RR();				//时间片轮转调度算法
void SPF();				//短进程优先调度算法
void Hint();			//显示实验提示信息函数
void Version();			//显示版权信息函数
void InitPCB(){		//PCB初始化函数
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
int ReadPCBFile(){//读进程流文件数据，存入PCB数组队列pcbs，并输出
FILE *fp;
int i;
char cHead;
cout << "	请输入要打开的进程流（文本）文件名（注意：包括路径名和后缀名）:  ";
cin >> sFileName;
if ((fp = fopen(sFileName, "r")) == NULL){
cout << "	错误：进程流文件 " << sFileName << " 打不开,请检查文件名和路径!!" << endl;
return -1;
}
else{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9){	//过滤空格、换行和TAB字符
cHead = fgetc(fp);
}
if (cHead == EOF){
printf("	错误：进程流文件：%s 为空!!\n", sFileName);
return -1;
}
else{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp)){
fscanf(fp, "%s %d %d %d", pcbs[iPCBNum].sName, &pcbs[iPCBNum].iStatus, &pcbs[iPCBNum].iRunTime, &pcbs[iPCBNum].iPriority);
iPCBNum++;
}	//while(!feof(fp))//输出所读入的进程数据
cout << endl << "	从文件 " << sFileName << " 读入的进程数据：" << endl << endl;
cout << "	进程名  进程状态  运行时间  优先数" << endl;
for (i = 0; i < iPCBNum; i++){
cout << "	 " << pcbs[i].sName << "	  " << pcbs[i].iStatus << "	  " << pcbs[i].iRunTime << "		  " << pcbs[i].iPriority << endl;
}
cout << "	进程总数：" << iPCBNum << endl;
return 0;
}	//if(cHead==EOF)
}	//if((fp=fopen(sFileName,"r"))==NULL)
}// int ReadPCBFile()


void ReSetPCB()	//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
{
int i;	//输出所读入的进程数据
cout << endl << "---------------------------------------------------------------" << endl;
cout << endl << "	从文件 " << sFileName << " 读入的进程数据：" << endl << endl;
cout << "	进程名  进程状态  运行时间  优先数" << endl;
for (i = 0; i < iPCBNum; i++){
pcbs[i].iBeFinished = 0;
pcbs[i].iWaitTime = 0;
cout << "	 " << pcbs[i].sName << "	  " << pcbs[i].iStatus << "	  " << pcbs[i].iRunTime << "		  " << pcbs[i].iPriority << endl;
}
cout << "	进程总数：" << iPCBNum << endl;
} //void ReSetPCB()


void FIFO() //先进先出调度算法
{
int i, j;
int iSum; //总等待时间			  //输出先进先出调度算法执行流
cout << endl << "---------------------------------------------------------------" << endl;
cout << "	先进先出调度算法执行流:" << endl << endl;
cout << "	序号 进程名 运行时间 等待时间" << endl;
iSum = 0;
for (i = 0; i < iPCBNum; i++){
cout << "	 " << i + 1 << "	 " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	 " << pcbs[i].iWaitTime << endl;
//输出信息摸拟进程运行
iSum += pcbs[i].iWaitTime;	//累加总等待时间
for (j = i + 1; j < iPCBNum; j++){
pcbs[j].iWaitTime += pcbs[i].iRunTime;
}
}
cout << "	总调度次数:" << iPCBNum << endl;
cout << "	总等待时间:" << iSum << endl;
printf("	平均等待时间  %.2f\n", (float)iSum / (float)iPCBNum);
cout << endl << "---------------------------------------------------------------" << endl;
} //void FIFO()


void Priority(){	//优先级调度算法
cout << "	优先级调度算法执行流:" << endl << endl;
cout << "	序号 进程名 运行时间 等待时间 优先数" << endl;
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
cout << "	总调度次数:" << iPCBNum << endl;
cout << "	总等待时间:" << iSum << endl;
printf("	平均等待时间  %.2f\n", (float)iSum / (float)iPCBNum);
} //void Priority()


void RR(){//时间片轮转调度算法
int i;
int iNotEnded = 1;		//循环控制标志：不是所有进程都已经获得足够时间片运行完成，需要继续轮转。
int iNum;				//到目前为止末执行完的进程数
int iRound = 0;			//轮转周期数
int iSum = 0;				//总时间片数
float fBlockTime = 10;	//时间片的长度（纳秒）
cout << endl << "	请输入时间片的长度（纳秒）：" << endl << "	";
cin >> fBlockTime;
cout << endl << "---------------------------------------------------------------" << endl;
cout << "	时间片轮转调度执行流（时间片的长度为：" << fBlockTime << "纳秒）:" << endl;
while (iNotEnded == 1){//不是所有进程都已经获得足够时间片运行完成，需要继续轮转。
iNotEnded = 0;
iNum = 0;
for (i = 0; i < iPCBNum; i++){//统计到目前为止末执行完的进程数iNum
if (pcbs[i].iBeFinished == 0){
iNum++;
} //if(pcbs[i].iBeFinished==0)
} //for(i=0;i<iPCBNum;i++)
if (iNum > 0){
iNotEnded = 1;
iRound++;	//累加轮转周期数
cout << endl << "	第" << iRound << "轮：";
for (i = 0; i < iPCBNum; i++){
if (pcbs[i].iBeFinished == 0){
cout << pcbs[i].sName << " ";	//输出信息摸拟进程运行
iSum++;	//累加总时间片数
if (pcbs[i].iRunTime <= fBlockTime*(iRound)){//i进程在本轮获得一个时间片后能够运行完成
pcbs[i].iBeFinished = 1;
} //if(pcbs[i].iRunTime<=fBlockTime*(iRound+1))
}//if(pcbs[i].iBeFinished==0)
} //for(i=0;i<iPCBNum;i++)
} //if(iNum>0)
} //while(iNotEnded==1)
cout << endl << "	轮转周期数:" << iRound << "	总时间片数:" << iSum << endl;
cout << endl << "---------------------------------------------------------------" << endl;
}//void RR()


void SPF()	//短进程优先调度算法
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
cout << "	短进程优先调度算法执行流:" << endl << endl;
cout << "	序号 进程名 运行时间 等待时间" << endl;
for (i = 0; i < iPCBNum; i++)
{
cout << "	 " << i + 1 << "	 " << pcbs[i].sName << "	 " << pcbs[i].iRunTime << "	 " << pcbs[i].iWaitTime << endl;
//输出信息摸拟进程运行
iSum += pcbs[i].iWaitTime;	//累加总等待时间
for (j = i + 1; j < iPCBNum; j++)
{
pcbs[j].iWaitTime += pcbs[i].iRunTime;
}
}
cout << "	总调度次数:" << iPCBNum << endl;
cout << "	总等待时间:" << iSum << endl;
printf("	平均等待时间  %.2f\n", (float)iSum / (float)iPCBNum);
cout << endl << "---------------------------------------------------------------" << endl;
} //void SPF ()


void Hint() //显示实验提示信息函数
{
cout << endl;

cout << "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;

cout << "  [实验内容]                                                                      " << endl;
cout << "  ①、实验目的                                                                    " << endl;
cout << "  a、进程调度是处理机管理的核心内容。观察、体会操作系统的进程调度方法，           " << endl;
cout << "  并通过一个简单的进程调度模拟程序的实现，加深对进程控制块、进程队列、            " << endl;
cout << "  进程调度算法，进程切换的理解，并体会和了解各种调度算法的具体实施办法。          " << endl;
cout << "  b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。                   " << endl;
cout << "  ②、实验内容                                                                    " << endl;
cout << "  a、设计进程控制块PCB表结构，模拟实现进程调度算法：FIFO，静态优先级调度，        " << endl;
cout << "  时间片轮转调度，短进程优先调度算法，多级反馈队列调度（实现其中之一个以上）。    " << endl;
cout << "  b、编写一个进程调度程序模拟程序。模拟程序只对PCB进行相应的调度模拟操作，不需要实际程序。    " << endl;
cout << "  c、由用户输入（可通过文件输入）进程名、进程状态、进程运行时间和进程优先级等数据。 " << endl;
cout << "  ③、实验要求                                                                       " << endl;
cout << "  a、使用模块化设计思想来设计；                                                        " << endl;
cout << "  b、给出主函数和各个算法函数的流程图。                                                            " << endl;
cout << "  c、学生可按照自身条件，随意选择采用的算法，（例如：采用冒泡法编写程序，实现短进程优先调度的算法）。 " << endl;
cout << "  d、进程调度程序模拟程序只对PCB进行相应的调度模拟操作，不需要实际程序。	                          " << endl;
cout << "  ④、运行结果                                                                                     " << endl;
cout << "  a、给出进程的调度模拟操作排序结果。                                                              " << endl;
cout << "  ⑤、提示                                                                                         " << endl;
cout << "  a、每个进程可有三个状态，并假设初始状态为就绪状态。                                              " << endl;
cout << "  b、为了便于处理，程序中的进程运行时间以纳秒为单位计算。                                          " << endl;
cout << "  c、各进程的优先级或轮转时间数以及进程需运行的纳秒数的初始值均由用户给定。                        " << endl;
cout << "  d、在优先级算法中，采用静态优先级。在时间片轮转算法中，采用可变时间片，由用户给定。              " << endl;
cout << "  e、对于遇到优先级一致的情况，采用FIFO策略解决。                                                  " << endl;

cout << "  二、本程序包括:FIFO，优先级调度算法（静态优先级），时间片轮转调度算法，短进程优先调度算法。 VC++6.0调试通过  项目类型：Win32 Console Application。" << endl;
cout << "  输入：进程流文件（文本文件），其中存储的是一系列要执行的进程，每个进程包括四个数据项：           " << endl;
cout << "   	进程名(长度不超过20个的字符串) 进程状态(1就绪 2等待 3运行) 所需时间 优先级(0级最高)                                   " << endl;
cout << "  输出: 进程执行流 等待时间 平均等待时间                                                           " << endl;
cout << "     VC++6.0调试通过   项目类型：Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     在WINDOWS中双击DEBUG目录中的EXE文件直接运行，可能没有显示结果窗口就关闭了， " << endl;
cout << "     这不是程序错误，解决方法是：	                                         	" << endl;
cout << "     1、“开始->程序->附件-命令提示符”,打开DOS命令窗口。                    	" << endl;
cout << "     2、改变当前目录至EXE文件所在目录；                                      	" << endl;
cout << "     （或者将EXE文件和测试用的文本文件一并复制到当前目录）。                    	" << endl;
cout << "     3、输入EXE文件的完整名称（含后缀名）运行即可。为方便输入，可以重命名EXE文件。" << endl;

cout << "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;
cout << endl;

} //void Hint()


void Version()	//显示版权信息函数
{
cout << endl << endl;

cout << "	 ┏━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
cout << "	 ┃　　　　　进程调度算法模拟系统　 　 　　　　　┃" << endl;
cout << "	 ┠───────────────────────┨" << endl;
cout << "	 ┃　 　   　(c)All Right Reserved 　　    　　　┃" << endl;
cout << "	 ┃　　　　　　   LGY  赖国勇   　 　　　　　　　┃" << endl;
cout << "	 ┃　　　　　Version 2012 build 2.3 　　 　　　　┃" << endl;
cout << "	 ┗━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
cout << endl << endl;
} //void Version()



void main()		//主函数
{
int iInput;		//用户输入的整数以选择算法
bool bGoOn;		//是否继续进程调度算法模拟的标志
char sGoOn[1];	//用户输入是否继续进程调度算法模拟的字母：y、Y、N、n

Hint();			//显示实验提示信息函数
Version();		//显示版权信息函数

InitPCB();		//PCB初始化函数

bGoOn = true;
strcpy(sGoOn, " ");

if (ReadPCBFile() == 0)	//标志 读进程流文件数据函数 执行是否正确
{
while (bGoOn)
{
cout << endl << "	请输入算法编号（1 OR 2 OR 3 OR 4）选择进程调度算法：" << endl << endl;
cout << "	1  先进先出调度算法" << endl << endl << "	2  优先级调度算法" << endl << endl;
cout << "	3  时间片轮转调度算法" << endl << endl << "	4  短进程优先调度算法" << endl << endl << "	";

cin >> iInput;		//从标准输入获取用户输入的整数以选择算法
switch (iInput)
{
case 1:
ReSetPCB();		//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
FIFO();			//先进先出调度算法
break;

case 2:
ReSetPCB();		//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
Priority();		//优先级调度算法
break;

case 3:
ReSetPCB();		//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
RR();			//时间片轮转调度算法
break;

case 4:
ReSetPCB();		//重置PCB完成标志、等待时间,以供另一个调度算法使用，并输出所读入的进程数据
SPF();
//短进程优先调度算法
break;

default:
printf("\n	输入的算法编号错误!!\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << endl << "	要继续进行进程调度算法模拟吗?(Y/N)" << endl << "	";
cin >> sGoOn;
bGoOn = (sGoOn[0] == 'y' || sGoOn[0] == 'Y');

}//while bGoOn

} //if(ReadPCBFile()==0)

}//void main()*/
/***********************************************************************************************************
*   Source File Name :   LGY_DISK_Scheduler.cpp                                                            *
*   Project Name:        LGY_DISK_Scheduler                                                                *
*   Engineer:            赖国勇                                                                            *
*   Date Generated:      2007-11-29                                                                        *
*   Last Revision Date:  2012-06-04                                                                        *
*   Brief Description:	                                                                                   *
*   ①、实验目的                                                                                           *
*   	a、观察、体会操作系统的磁盘调度方法，并通过一个简单的磁盘调度模拟程序的实现，加深对磁盘调度的理解。*
*   	b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。                                      *
*   ②、实验内容                                                                                           *
*		a、模拟实现磁盘调度算法：FCFS，最短寻道优先，电梯算法（实现其中之一）。                      *
*	    b、磁道请求服务顺序由用户输入（可通过从指定的文本文件（TXT文件）中取出）。                         *
*	③、实验要求                                                                                           *
*	    a、使用模块化设计思想来设计。                                                                      *
*   	b、给出主函数和各个算法函数的流程图。                                                              *
*   	c、学生可按照自身条件，随意选择采用的算法。                                                        *
*	④、运行结果                                                                                           *
*	   a、给出磁盘调度算法模拟程序对进程寻道请求的排序结果。                                               *
*	输出：                                                                                                 *
*   	第一列：序号；                                                                                     *
*   	第二列：磁道的服务顺序；                                                                           *
*    	第三列：移动的磁道数；                                                                             *
*	    最后计算出总移动磁道数、平均移动磁道数。                                                           *
*	                                                                                                       *
*	本程序包括:先来先服务算法，最短寻道优先调度算法，电梯算法                                              *
*	VC++6.0调试通过     项目类型：Win32 Console Application                                                *
*                                                                                                          *
************************************************************************************************************/
/*#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
const int MAXQUEUE = 200; //定义请求队列最大长度//磁道号请求结构体定义
typedef struct TRACK_Node{
int iGo;		//要访问的磁道号
int iBeVisited;	//磁道是否已经访问标志（1：已访问；0：未访问）
}TRACK;
TRACK queue[MAXQUEUE]; //磁道号请求队列数组
int iReqNum = 0;			//磁道访问请求数
int iStart = 0;			//磁头初始位置
int iNow = 0;				//磁头当前位置
int iSum = 0;				//总移动磁道数
int iInput;				//用户当前输入的整数
char sFileName[20];		//文件名



void Init();			//初始化函数
void Reset();			//重置访问标志、磁头当前位置、总移动磁道数
int ReadTrackFile();	//读入磁道号流文件
void FCFS();			//先来先服务调度算法
void SSTF();			//最短寻道优先调度算法
void SCAN();			//电梯调度算法
void Version();			//显示版权信息函数
void Hint();			//显示实验提示信息函数


void Init(){//初始化函数
int i;
for (i = 0; i<MAXQUEUE; i++){
queue[i].iGo = -1;		//设置要访问的磁道号为不可能的数-1，以区别正常请求磁道号
queue[i].iBeVisited = 0;	//设置磁道是否已经访问标志为0：未访问
}
} //void Init()


void Reset(){//重置访问标志、磁头当前位置、总移动磁道数
int i;
for (i = 0; i<iReqNum; i++){
queue[i].iBeVisited = 0; 	//设置磁道是否已经访问标志为0：未访问
}
printf("\n	请输入磁头的初始磁道号（整数）:  ");
scanf("%d", &iStart);	//从标准输入获取用户当前输入的磁头初始位置
iNow = iStart;			//磁头当前位置
iSum = 0;					//总移动磁道数
} //void Reset()

int ReadTrackFile(){//读入磁道号流文件
FILE *fp;
int iTemp;
char cHead;
cout << "	\n	请输入要打开的磁道号流（文本）文件名（注意：包括路径名和后缀名）:  ";
cin >> sFileName; 		//从标准输入获取用户当前输入的文件名
if ((fp = fopen(sFileName, "r")) == NULL){
cout << endl << "	错误：磁道号流文件 " << sFileName << " 打不开，请检查文件名和路径!!" << endl;
return -1;
}else{
cHead = fgetc(fp);
while (cHead == ' ' || cHead == 10 || cHead == 9){//过滤空格、换行和TAB字符
cHead = fgetc(fp);
}
if (cHead == EOF){
printf("	错误：磁道号流文件：%s 为空!!\n", sFileName);
return -1;
}else{
fseek(fp, -1, SEEK_CUR);
while (!feof(fp)){//将文件中输入的磁道号依次存入磁道号请求队列数组
fscanf(fp, "%d ", &iTemp);
queue[iReqNum].iGo = iTemp;
iReqNum++;	//磁道访问请求数
}
}
}
return 0;
} //void ReadTrackFile()


void FCFS(){//先来先服务调度算
int i;
Reset();	//重置访问标志、磁头当前位置、总移动磁道数
cout << endl << "---------------------------------------------" << endl;
cout << "	先来先服务调度算法的调度结果:  " << endl << endl;
cout << "	    初始磁道号:  " << iStart << endl;
cout << "	序号  下一磁道号  移动的磁道数" << endl;
for (i = 0; i<iReqNum; i++){
//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[i].iGo << "      " << abs(queue[i].iGo - iNow) << endl;
iSum += abs(queue[i].iGo - iNow);		//累加总移动磁道数
iNow = queue[i].iGo;					//移动磁头当前位置为当前访问磁道号
}
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);
} //void FCFS()




void SCAN(){//电梯调度算法
int i, j;
int iNext;		//即将访问的下一未访问磁道号在数组队列queue中的下标
int iMinMove;	//当前方向上最短寻道距离
cout << endl << "---------------------------------------------" << endl;
cout << endl << "	请选择磁头初始方向（1 OR 2）：" << endl << endl;
cout << "	1  磁头初始向内" << endl << endl << "	2  磁头初始向外" << endl << endl << "	";
cin >> iInput;	//从标准输入获取用户当前输入的整数
switch (iInput)	//用户当前输入的整数
{
case 1:			//磁头初始向内
Reset();	//重置访问标志、磁头当前位置、总移动磁道数
cout << endl << "---------------------------------------------" << endl;
cout << "	电梯调度算法——磁头初始向内的调度结果:  " << endl << endl;
cout << "	    初始磁道号:  " << iStart << endl;
cout << "	序号  下一磁道号  移动的磁道数" << endl;
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
if (iNext != -1){//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;					//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;				//设置磁道是否已经访问标志为1：已访问
}else{
for (j = 0; j<iReqNum; j++){
if ((queue[j].iBeVisited == 0) && (queue[j].iGo<iNow)){
if (abs(queue[j].iGo - iNow)<iMinMove){
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;				 	//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;				//设置磁道是否已经访问标志为1：已访问
} //if(iNext!=-1)
} //for(i=0;i<iReqNum;i++)
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);
break;
case 2:			//磁头初始向外
Reset();
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "电梯调度算法---磁头初始向外的调度结果：·" << endl << endl;
cout << "	初始磁道号：	" << endl;
cout << "序号 下一磁道号 移动的磁道数" << endl;
for (i = iReqNum; i >= 0; i--) {
iMinMove = 9999;
iNext = -1;
for (j = 0; j<iReqNum; j++) {//遍历所有数组，找到距离最短（IGo-iNow最小）
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//磁道没有访问过&&向外，向小的访问
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
else {//掉头向内
for (j = 0; j<iReqNum; j++){
if ((queue[j].iBeVisited == 0) && (queue[j].iGo>iNow)){
if (abs(queue[j].iGo - iNow)<iMinMove){
iNext = j;
iMinMove = abs(queue[j].iGo - iNow);
}
}
} //for(j=0;j<iReqNum;j++)
//输出信息摸拟访问请求的磁道
cout << "      	" << i + 1 << "      " << queue[iNext].iGo << "      " << abs(queue[iNext].iGo - iNow) << endl;
iSum += abs(queue[iNext].iGo - iNow);	 	//累加总移动磁道数
iNow = queue[iNext].iGo;				 	//移动磁头当前位置为当前访问磁道号
queue[iNext].iBeVisited = 1;
}
}
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);
break;
default:
printf("\n	输入错误!!\n\n");
return;
}	//switch(iInput)
} //void SCAN()

void SSTF(){//最短寻道优先调度算法
cout << endl << "````````````````````````````````````````````````````````````" << endl;
cout << "最短寻道优先算法---磁头初始向外的调度结果：·" << endl << endl;
cout << "	初始磁道号：	" << endl;
cout << "序号 下一磁道号 移动的磁道数" << endl;
int tempShortestDistance;
int tempIndex;
int i, j;
for (i = iReqNum; i >= 0; i--) {
tempShortestDistance = 9999;
tempIndex = -1;
for (j = 0; j<iReqNum; j++) {//遍历所有数组，找到距离最短（IGo-iNow最小）
if ((queue[j].iBeVisited == 0) && (queue[j].iGo <= iNow)) {//磁道没有访问过&&向外，向小的访问
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
cout << endl << "	总调度次数:  " << iReqNum << endl;
cout << endl << "	总移动磁道数:  " << iSum << endl;
printf("\n	平均移动磁道数:  %.2f\n\n", (float)iSum / (float)iReqNum);
}



void Version()	//显示版权信息函数
{
cout << endl << endl;

cout << "         ┏━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
cout << "         ┃　　　 　　磁盘调度算法模拟系统　　        　 ┃" << endl;
cout << "         ┠───────────────────────┨" << endl;
cout << "         ┃　 　　　(c)All Right Reserved    　 　   　　┃" << endl;
cout << "         ┃　　　　　　  LGY  赖国勇    　 　　　　　　　┃" << endl;
cout << "         ┃　　　　　Version 2012 build 2.3 　　 　　　　┃" << endl;
cout << "         ┗━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

cout << endl << endl;

}// void Version()


void Hint() //显示实验提示信息函数
{
cout << endl;

cout << "	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;
cout << "     ①、实验目的						 		   								" << endl;
cout << "     a、观察、体会操作系统的磁盘调度方法，                                   	" << endl;
cout << "     并通过一个简单的磁盘调度模拟程序的实现，加深对磁盘调度的理解。          	" << endl;
cout << "     b、提高实际动手编程能力，为日后从事软件开发工作打下坚实基础。	            " << endl;
cout << "     ②、实验内容			                                                    " << endl;
cout << "     a、模拟实现磁盘调度算法：FCFS，最短寻道优先，                               " << endl;
cout << "     电梯算法（实现其中之一种以上）。                                            " << endl;
cout << "     b、磁道请求服务顺序由用户输入（可通过从指定的文本（TXT）文件中取出）。      " << endl;
cout << "     ③、实验要求									           			    	" << endl;
cout << "     a、使用模块化设计思想来设计。												" << endl;
cout << "     b、给出主函数和各个算法函数的流程图。	                                	" << endl;
cout << "     c、学生可按照自身条件，随意选择采用的算法。			    					" << endl;
cout << "     ④、运行结果    	                                                     	" << endl;
cout << "     a、给出磁盘调度算法模拟程序对进程寻道请求的排序结果。    					" << endl;
cout << "     输出：               														" << endl;
cout << "     第一列：序号；										                    	" << endl;
cout << "     第二列：磁道的服务顺序； 													" << endl;
cout << "     第三列：移动的磁道数；								    					" << endl;
cout << "     最后计算出总移动磁道数、平均移动磁道数。									" << endl;
cout << "		 												                        	" << endl;
cout << "     本程序包括:先来先服务算法，最短寻道优先调度算法，电梯算法					" << endl;
cout << "     VC++6.0调试通过   项目类型：Win32 Console Application	                	" << endl;
cout << "		 												                        	" << endl;
cout << "     在WINDOWS中双击DEBUG目录中的EXE文件直接运行，可能没有显示结果窗口就关闭了， " << endl;
cout << "     这不是程序错误，解决方法是：	                                         	" << endl;
cout << "     1、“开始->程序->附件-命令提示符”,打开DOS命令窗口。                    	" << endl;
cout << "     2、改变当前目录至EXE文件所在目录；                                      	" << endl;
cout << "     （或者将EXE文件和测试用的文本文件一并复制到当前目录）。                    	" << endl;
cout << "     3、输入EXE文件的完整名称（含后缀名）运行即可。为方便输入，可以重命名EXE文件。" << endl;
cout << "	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━			" << endl;
cout << endl;

} //void Hint()


void main()
{
int i;
bool bGoOn;		//是否继续磁盘调度算法模拟的标志
char sGoOn[1];	//用户输入是否继续磁盘调度算法模拟的字母：y、Y、N、n

Hint();			//显示实验提示信息函数
Version();		//显示版权信息函数

Init();			//初始化函数

if (ReadTrackFile() == -1)    //读入磁道号流文件
{
printf("	读入磁道号流文件失败!!\n\n");
}
else
{
bGoOn = true;
while (bGoOn)
{
cout << endl << "---------------------------------------------" << endl;
cout << "	从磁道号流文件 " << sFileName << " 所读入的磁道号流如下:" << endl << endl << "	";
for (i = 0; i<iReqNum; i++)
{
cout << queue[i].iGo << " ";
}
cout << endl << endl << "	请求数为:  " << iReqNum << endl << endl;

iInput = -1;		//用户输入的整数以选择算法

cout << endl << "	请输入算法编号（1 OR 2 OR 3）选择调度算法：" << endl << endl;
cout << "	1  先来先服务调度算法" << endl << endl << "	2  电梯调度算法" << endl << endl << "	3  最短寻道优先调度算法 	" << endl << endl << "	";

cin >> iInput;		//从标准输入获取用户当前输入的整数

switch (iInput)		//用户输入的整数以选择算法
{
case 1:
FCFS();		//先来先服务调度算法
break;

case 2:
SCAN();		//电梯调度算法
break;

case 3:
SSTF();		//最短寻道优先调度算法
break;
default:
printf("\n	输入的算法编号错误!!\n\n");
return;

}	//switch(iInput)

bGoOn = false;
strcpy(sGoOn, " ");

cout << "	要继续进行磁盘调度算法模拟吗?(Y/N)	" << endl << "	";
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
printf("请输入第%d个数:\n", i + 1);
scanf("%lf", *(array + i));
//###
printf("%lfhh", array[i]);
printf("%lf", firstDouble);
printf(" %lf", secondDouble);
//$$$$$$$$$$$$$$$$$$
}
printf("这是一个简单的 加 减 乘 除法计算器。\n");
printf("相加：%lf\n", firstDouble + secondDouble + thirdDouble + forthDouble);
printf("相减：%lf\n", firstDouble - secondDouble - thirdDouble - forthDouble);
printf("相乘：%lf\n", firstDouble*secondDouble*thirdDouble*forthDouble);
printf("相除：%lf\n", firstDouble / secondDouble / thirdDouble / forthDouble);
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
cout << "找到了" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
cout << "找到了" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
cout << "找到了" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
cout << "找到" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
class BinarySearch {
public:
void resultPrint(int*arrayInt, const int numToBeFound, const int arraySize) {
if (binarySearch(arrayInt, numToBeFound, arraySize) != -1) {
cout << "找到了" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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
//￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
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
//$$$$￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥$$￥￥￥￥￥￥
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
cout << "找到" << numToBeFound << endl;
}
else {
cout << "没有" << numToBeFound << endl;
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