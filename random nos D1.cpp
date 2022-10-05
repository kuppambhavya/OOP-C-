#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	int x;
	srand((unsigned) time(NULL)); 
    for(int x=0; x<3; x++){        

        int random = 20+ (rand() % 50);

        cout<<random<<"   ";

    }
  return 1;
}
