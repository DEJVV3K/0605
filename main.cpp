#include <iostream>
#include <fstream>

using namespace std;

int t[10];
int lnaj=t[0];
int main () 
{
	ifstream wejscie;
	ofstream wyjscie;
	
	wejscie.open("wejscie.txt");
	wyjscie.open("wyjscie.json");
	
	if (wejscie.good()) {
		while(!wejscie.eof())
			for(int i=0; i<10; i++)
			wejscie >> t[i];}
			
	for(int i=0; i<10; i++) {
		if(lnaj<t[i])
		lnaj=t[i];}
	
	wyjscie << "{ \n	\"najwieksza\" : \" " << lnaj;
	
	wejscie.close();
	wyjscie.close();
	
	return 0;
}
