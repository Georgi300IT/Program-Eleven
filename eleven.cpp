#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Bulgarian");
	int a; double pro=1;
	for (int i=22; i<150; i+=11)
	pro*=i; //<=> pro=pro*i; 
	int i=22;
	do
	{	
	if (i%11==0) pro=pro*i; i+=11;
    }
	while (i<150);
	cout<<"Произведението е "<<pro<<endl;
}
