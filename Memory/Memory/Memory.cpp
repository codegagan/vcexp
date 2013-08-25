// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	void * p=NULL;
	void * pa[30000];
	long i=0;
	p=malloc(1);
	cout<<"Check you memory (RAM) usage and press enter to start";
	getchar();
	cout<<"Lemme see, how much memory of your system I can take...."<<endl;
	while(p){
	
	p=malloc(100000);
	if(p)memset(p, 1,100000);
	pa[i]=p;
	i++;
	if(i>30000)break;
	}
	cout<<"Got bytes (X 100000) :"<<i<<endl;
	cout<<"Check you memory (RAM) usage now";
	getchar();
	return 0;
}
