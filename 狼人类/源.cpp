#include<iostream>
using std::cout; using std::endl;
class person
{
public:
	void study()
	{
		cout << "我在学习" << endl;
	}
};
class wolf
{
public:
	void attack()
	{
		cout << "我在打架" << endl;
	}
};
class wolfpeople :public person, public wolf
{
public:
	void change()
	{
		cout << "我要变身" << endl;
	}
};
int main()
{
	wolfpeople A;
	A.change(); A.change(); A.attack();
	return 0;
}