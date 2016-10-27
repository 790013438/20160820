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
#include<iostream>
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
}
//18
//19
//20
//2279-2329 20161027 200*24+21*53-17-18-12