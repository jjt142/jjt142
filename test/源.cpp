#include<iostream>
#include<string.h>
//circle
class circle
{
public:
	//constructed function
	circle(double radius) :m_R(radius),m_S(radius*radius*3.14) {};
	double acreage()
	{
		return m_S;
	}
	double radius()
	{
		return m_R;
	}
	
private:
	//radius
	double m_R;
	//acreage
	double m_S;
};
class table
{
public:
	table(double heighet) :m_H(heighet) {};
	double Getheighet() {
		return m_H;
	}
private:
	double m_H;
};
class roundtable :public circle, public table
{
public:
	//���캯��
	roundtable(double radius, double heighet,const char* c)
		:circle(radius), table(heighet) {
		int size = sizeof(c);
		m_ccolor = new char[size + 1];
		strcpy_s(m_ccolor, size, c);
	};


	//roundtable(const roundtable& p)


	//��������
	~roundtable() {
		delete []m_ccolor;
	}
	char* color() {
		return m_ccolor;
	}
private:
	char* m_ccolor;
};
int main()
{
	roundtable A(1.1,4.5, "black"); 
	std::cout << "Բ��A�Ĳ������а뾶-���-�߶�-��ɫ" <<
		std::endl<<
		A.radius() << std::endl << 
		A.acreage() << std::endl <<
		A.Getheighet () << std::endl <<
		A.color () << std::endl;
	return 0;
}