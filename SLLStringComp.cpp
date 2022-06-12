#include<iostream>
#include<string.h>
using namespace std;

//STRING COMPARE

int strcom (char const* string1, char const* string2, int size)
{
    if(&string1[size-1] == &string2[size-1]){
        return 0;
    }
    else if(&string1[size-1] < &string2[size-1]){
        return -1;
    }
    else if(&string1[size-1] > &string2[size-1]){
        return 1;
    }
    else{
        return strcom(string1,string2,size-1);
    }
}
int stringCompare (char const* string1, char const* string2)
{
    int n1=0;
	for(int i=0;string1[i]!='\0';i++)
	   n1++;
	int n2=0;
    for(int i=0;string2[i]!='\0';i++)
	   n2++;
	if(n1!=n2)
	{
		return -1;
	}
	else if (n1==n2)
		return strcom(string1,string2,n1);
	else return -2;

}

int main()
{
	//STRING COMPARE
	cout<<"//STRING COMPARE"<<endl<<endl;

	char* st1="ab";
	char* st2="abC";
	char* st3="abc";

	cout<<"Compare ab and abC. "<<stringCompare(st1,st2)<<endl<<endl;
	cout<<"Compare abc and ab. "<<stringCompare(st3,st1)<<endl<<endl;
	cout<<"Compare abc and abc. "<<stringCompare(st3,st3)<<endl<<endl;

	system("pause");
	return 0;
}