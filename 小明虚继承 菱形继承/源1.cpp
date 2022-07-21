#include <stdio.h>
#include <iostream>
using std::cout; using std::endl;

class CBaseInfo {
public:
	CBaseInfo(const char* pName, int nSex) {
	m_pName = _strdup(pName);
		m_nSex = nSex;
	printf("CBaseInfo\n");
	}
	CBaseInfo(CBaseInfo& obj) {
		m_pName = _strdup(obj.m_pName);
		m_nSex = obj.m_nSex;
	}
	~CBaseInfo() {
		if (m_pName) {
			delete[] m_pName;
			m_pName = nullptr;
		}
	}
	char* m_pName;
	int m_nSex;
};

class CStu :virtual public CBaseInfo {
public:
	int m_nNumOfStu;
	CStu(const char* pName, int nSex, int nNum)
		:CBaseInfo(pName, nSex), m_nNumOfStu(nNum)
	{
		printf("CStu\n");
	}
};

class CTeacher :virtual public CBaseInfo {
public:
	int m_nNumOfTeacher;
	CTeacher(const char* pName, int nSex, int nNum)
		:CBaseInfo(pName, nSex), m_nNumOfTeacher(nNum) {
		printf("CTeacher\n");
	}
};

class CStuTec : public CStu, public CTeacher {
public:
	CStuTec(const char* pName, int nSex, int nNumStu, int nNumTec)
		:CStu(pName, nSex, nNumStu), CTeacher(pName, nSex, nNumTec),
		CBaseInfo(pName, nSex)
	{
		printf("CStuTec\n");
	}
};

int main(int* argc, char* argv[])
{
	CStuTec obj("xiaoming", 1, 2, 3);
	printf("姓名：%s\n 性别：%d\n,学号：%d\n,职工号：%d\n", 
		obj.m_pName, obj.m_nSex, obj.m_nNumOfStu, obj.m_nNumOfTeacher);
	return 0;
}
