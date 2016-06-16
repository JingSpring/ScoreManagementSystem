#include"stdafx.h"
#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include"CStudentMessage.h"


ostream& operator<<(ostream& os,CStudentMessage& stu)
{
	os.write((char *)&stu.stuName,sizeof(stu.stuName));
	os.write((char *)&stu.stuID,sizeof(stu.stuID));
	os.write((char *)&stu.stuClass,sizeof(stu.stuClass));
	os.write((char *)&stu.stuGrade,sizeof(stu.stuGrade));
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
	CString name,id,clas,grade;
	is.read((char *)&name,sizeof(name));
	is.read((char *)&id,sizeof(id));
	is.read((char *)&clas,sizeof(clas));
	is.read((char *)&grade,sizeof(grade));
	is.read((char *)&stu.score1,sizeof(float));
	is.read((char *)&stu.score2,sizeof(float));
	is.read((char *)&stu.score3,sizeof(float));
	is.read((char *)&stu.score4,sizeof(float));
	is.read((char *)&stu.score5,sizeof(float));
	is.read((char *)&stu.score6,sizeof(float));
	strncpy((char *)&stu.stuName,(char *)&name,sizeof((char *)&name));
	strncpy((char *)&stu.stuID,(char *)&id,sizeof((char *)&id));
	strncpy((char *)&stu.stuClass,(char *)&clas,sizeof((char *)&clas));
	strncpy((char *)&stu.stuGrade,(char *)&grade,sizeof((char *)&grade));
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
	file.close();
}
int CStuFile::Seek(char* name,CStudentMessage &stu)
{
	int nRec=-1;
	fstream file(strFileName,ios::in|ios::nocreate);
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
		if(strcmp(name,(char *)&stu.stuName)==0)
		{
			nRec=i;  break;
		}
		i++;
	}
	file.close();
	return nRec;
}