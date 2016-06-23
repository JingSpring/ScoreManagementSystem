#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>


class CStudentMessage
{
public:
    CStudentMessage(char* name,char* id,char* clas,char* grade,float s1,float s2,float s3,float s4,float s5,float s6);
    CStudentMessage(){};                         //���캯��       
    ~CStudentMessage(){};                       //��������
    friend ostream& operator<<(ostream& os,CStudentMessage& stu);
    friend istream& operator>>(istream& is,CStudentMessage& stu);
    char stuName[20];                        //ѧ������
    char stuID[20];                         //ѧ��
    char stuClass[20];                     //���
    char stuGrade[20];                    //�꼶
    float score1,score2,score3,score4,score5,score6;
    float IntegratedScience;            //���۳ɼ�
    float TotalScore;                  //�ֳܷɼ�
};


class CStuFile
{
public:
    CStuFile(char* filename);
    ~CStuFile();
    void Add(CStudentMessage stu);
    int FindSame(char* id,CStudentMessage &stu);
    int number;                 //����
private:
    char* strFileName;        //�ļ���
};