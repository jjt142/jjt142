#include<iostream>
using std::cout; using std::endl;
class person
{
public:
	void study()
	{
		cout << "����ѧϰ" << endl;
	}
};
class wolf
{
public:
	void attack()
	{
		cout << "���ڴ��" << endl;
	}
};
class wolfpeople :public person, public wolf
{
public:
	void change()
	{
		cout << "��Ҫ����" << endl;
	}
};
int main()
{
	wolfpeople A;
	A.change(); A.change(); A.attack();
	return 0;
}