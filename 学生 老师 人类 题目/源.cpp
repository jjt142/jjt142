#include<iostream>
#include<string.h>
using std::cout; using std::endl;
 
//����
class person
{
public:
	person(int ID, const char* c) :m_ID(ID) {
		int size = sizeof(c);
		m_szName = new char[size + 1];
		strcpy_s(m_szName, size, c);
	}
	~person() {
		delete[]m_szName;
	}
	/*int inputID() {
		return m_ID;
	}
	char* inputname() {
		return m_szName;
	}*/
	void inputPinfo()
	{
		cout <<"���"<< m_ID << endl <<"����"<< m_szName << endl;
	}

private:
	int m_ID;
	char* m_szName;
};
//ѧ����
class student :public person
{
public:

	//���캯��
	student(int ID, const char* c, int classID, int sorce)
		:person(ID, c), m_classID(classID), m_sorce(sorce) {};
	//���һ��student��;
	/*student& inputstudent(student& P)
	{
		return P;
	}*/
	void inputSinfo()
	{
		cout << m_classID << endl << m_sorce << endl;
	}
private:
	int m_classID;
	int m_sorce;
};
//��ʦ��
class teacher :public person
{
public:
	teacher(int ID, const char* c, const char* professional_ranks, const char* department)
		:person(ID, c){
		int size1 = sizeof(professional_ranks);
		m_professional_ranks = new char[size1 + 1];
		strcpy_s(m_professional_ranks, size1, professional_ranks);
		int size = sizeof(department);
		m_department = new char[size + 1];
		strcpy_s(m_department, size, department);
	};
	~teacher() {
		delete[]m_professional_ranks;
	}
	void inputTinfo()
	{
		cout << m_professional_ranks << endl << m_department << endl;
	}
	/*teacher inputstudent(teacher& P)
	{
		return P;
	}*/


private:
	char* m_professional_ranks;
	char* m_department;
};
void setinfo()
{
	teacher T1(123, "����", "�м�", "��Ӫ��");
	student S1(12345, "����", 142, 567);
	T1.inputPinfo(); T1.inputTinfo();
	S1.inputPinfo(); S1.inputSinfo();
}


int main()
{
	setinfo();
	return 0;
}
