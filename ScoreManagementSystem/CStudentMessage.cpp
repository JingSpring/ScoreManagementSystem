#include"stdafx.h"
#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include"CStudentMessage.h"


CStudentMessage::CStudentMessage(char* name,char* id,char* clas,char* grade,float s1,float s2,float s3,float s4,float s5,float s6)
{
    strncpy(stuName,name,20);
    strncpy(stuID,id,20);
    strncpy(stuClass,clas,20);
    strncpy(stuGrade,grade,20);
    IntegratedScience=0.0;
    TotalScore=0.0;
    score1=s1;
    score2=s2;
    score3=s3;
    score4=s4;
    score5=s5;
    score6=s6;
    IntegratedScience=(float)(s4+s5+s6);
    TotalScore=(float)(s1+s2+s3+s4+s5+s6);
}

ostream& operator<<(ostream& os,CStudentMessage& stu)
{
    os.write(stu.stuName,sizeof(stu.stuName));
    os.write(stu.stuID,sizeof(stu.stuID));
    os.write(stu.stuClass,sizeof(stu.stuClass));
    os.write(stu.stuGrade,sizeof(stu.stuGrade));
    os.write((char *)&stu.score1,sizeof(float));
    os.write((char *)&stu.score2,sizeof(float));
    os.write((char *)&stu.score3,sizeof(float));
    os.write((char *)&stu.score4,sizeof(float));
    os.write((char *)&stu.score5,sizeof(float));
    os.write((char *)&stu.score6,sizeof(float));
    os.write((char *)&stu.IntegratedScience,sizeof(float));
    os.write((char *)&stu.TotalScore,sizeof(float));
    return os;
}

istream& operator>>(istream& is,CStudentMessage& stu)
{
    char name[20],id[20],clas[20],grade[20];
    is.read(name,sizeof(name));
    is.read(id,sizeof(id));
    is.read(clas,sizeof(clas));
    is.read(grade,sizeof(grade));
    is.read((char *)&stu.score1,sizeof(float));
    is.read((char *)&stu.score2,sizeof(float));
    is.read((char *)&stu.score3,sizeof(float));
    is.read((char *)&stu.score4,sizeof(float));
    is.read((char *)&stu.score5,sizeof(float));
    is.read((char *)&stu.score6,sizeof(float));
    is.read((char *)&stu.IntegratedScience,sizeof(float));
    is.read((char *)&stu.TotalScore,sizeof(float));
    strncpy(stu.stuName,name,sizeof(name));
    strncpy(stu.stuID,id,sizeof(id));
    strncpy(stu.stuClass,clas,sizeof(clas));
    strncpy(stu.stuGrade,grade,sizeof(grade));
    return is;
}

CStuFile::CStuFile(char* filename)
{
    strFileName = new char[strlen(filename)+1];
    strcpy(strFileName,filename);
}

CStuFile::~CStuFile()
{
    if(strFileName)  delete[]strFileName;
}

void CStuFile::Add(CStudentMessage stu)
{
    fstream file(strFileName,ios::out|ios::app|ios::binary);
    file<<stu;
    number++;
    file.close();
}

int CStuFile::FindSame(char* id,CStudentMessage &stu)
{
    int nRec=-1;
    fstream file(strFileName,ios::in);
    if(!file)
    {
        cout<<"文件"<<strFileName<<"不能打开！\n";
        MessageBox(NULL,"文件无法打开！","警告",0);   //
        return nRec;
    }
    int i=0;
    while(!file.eof())
    {
        file>>stu;
        if(strcmp(id,stu.stuID)==0)
        {
            nRec=i;  break;
        }
        i++;
    }
    file.close();
    return nRec;
}