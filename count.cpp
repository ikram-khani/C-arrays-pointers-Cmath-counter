#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int chcount=0;
	int wdcount=1;
	char ch='a';

	
	cout<<"Enter the phrase: ";
	while (ch != '\r' )
	{
	   ch= getche();
		if ( ch==' '  )
		wdcount++;
		 else
		chcount++;
	}
	cout<<"\nwords="<<wdcount<<endl
	<<"Letters="<<(chcount-1)<<endl;
	return 0;
	
}
