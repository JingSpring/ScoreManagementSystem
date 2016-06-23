#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>


class CStudentMessage
{
public:
    CStudentMessage(char* name,char* id,char* clas,char* grade,float s1,float s2,float s3,float s4,float s5,float s6);
    CStudentMessage(){};                         //构造函数       
    ~CStudentMessage(){};                       //析构函数
    friend ostream& operator<<(ostream& os,CStudentMessage& stu);
    friend istream& operator>>(istream& is,CStudentMessage& stu);
    char stuName[20];                        //学生姓名
    char stuID[20];                         //学号
    char stuClass[20];                     //班别
    char stuGrade[20];                    //年级
    float score1,score2,score3,score4,score5,score6;
    float IntegratedScience;            //理综成绩
    float TotalScore;                  //总分成绩
};


class CStuFile
{
public:
    CStuFile(char* filename);
    ~CStuFile();
    void Add(CStudentMessage stu);
    int FindSame(char* id,CStudentMessage &stu);
    int number;                 //人数
private:
    char* strFileName;        //文件名
};