#include <iostream>
#include <string>
using namespace std;

#define MAXSIZE 10

struct Router
{
	string address[MAXSIZE];
	string nextHop[MAXSIZE];
	int distance[MAXSIZE];
};



int main()
{
	Router routers[7];
	initializeRouters(routers);

}

void initializeRouters(Router r[])
{
	r[0].address[0] = "1.0.0.0";
	r[0].address[1] = "2.0.0.0";
	r[1].address[0] = "2.0.0.0";
	r[1].address[1] = "3.0.0.0";
	r[2].address[0] = "3.0.0.0";
	r[2].address[1] = "4.0.0.0";
	r[3].address[0] = "4.0.0.0";
	r[3].address[1] = "5.0.0.0";
	r[4].address[0] = "5.0.0.0";
	r[4].address[1] = "6.0.0.0";
	r[5].address[0] = "6.0.0.0";
	r[5].address[1] = "7.0.0.0";
	r[6].address[0] = "7.0.0.0";
	r[6].address[1] = "8.0.0.0";

	for(int i=0; i<7;i++)
	{
		for(int j=0; j<2;j++)
		{
			r[i].nextHop[j] = "R" + to_string(i+1);
			r[i].distance[j] = 0;
		}
	}	
}