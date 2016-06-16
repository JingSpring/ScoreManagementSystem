#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>


class CStudentMessage
{
public:
    CStudentMessage(CString name,CString id,CString clas,CString grade,float s1,float s2,float s3,float s4,float s5,float s6)
	{
		stuName=name;
		stuID=id;
		stuClass=clas;
		stuGrade=grade;
		score1=s1;
		score2=s2;
		score3=s3;
		score4=s4;
		score5=s5;
		score6=s6;
		IntegratedScience=s4+s5+s6;
		TotalScore=s1+s2+s3+s4+s5+s6;
	}
	CStudentMessage(){};               //���캯��
	~CStudentMessage(){};             //��������
	friend ostream& operator<<(ostream& os,CStudentMessage& stu);
	friend istream& operator>>(istream& is,CStudentMessage& stu);
	CString stuName;                 //ѧ������
	CString stuID;                  //ѧ��
	CString stuClass;              //���
	CString stuGrade;             //�꼶
	float score1,score2,score3,score4,score5,score6;
	float IntegratedScience;     //���۳ɼ�
	float TotalScore;           //�ֳܷɼ�
};


class CStuFile
{
public:
	CStuFile(char* filename);
	~CStuFile();
    void Add(CStudentMessage stu);
	int Seek(char* name,CStudentMessage &stu);
private:
	char* strFileName;        //�ļ���
};
