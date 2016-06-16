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
	CStudentMessage(){};               //构造函数
	~CStudentMessage(){};             //析构函数
	friend ostream& operator<<(ostream& os,CStudentMessage& stu);
	friend istream& operator>>(istream& is,CStudentMessage& stu);
	CString stuName;                 //学生姓名
	CString stuID;                  //学号
	CString stuClass;              //班别
	CString stuGrade;             //年级
	float score1,score2,score3,score4,score5,score6;
	float IntegratedScience;     //理综成绩
	float TotalScore;           //总分成绩
};


class CStuFile
{
public:
	CStuFile(char* filename);
	~CStuFile();
    void Add(CStudentMessage stu);
	int Seek(char* name,CStudentMessage &stu);
private:
	char* strFileName;        //文件名
};
