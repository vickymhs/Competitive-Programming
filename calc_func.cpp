#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int n,s=0,i,x;
	cin>>n;
	
	if(n%2==0)
	cout<<n/2;
	
	else
	cout<<-((n/2 )+1);
}