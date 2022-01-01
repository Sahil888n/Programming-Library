#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

class MarvellousFile
{
	public:
	char Fname[30];
	int fd;
	MarvellousFile(char *Name)
	{
		
	}
	~MarvellousFile()
	{
	}
	
};