#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long int ll;
int main()
{
	FILE* fp1=fopen ("test.in","r");
	FILE* fp2=fclose("test.out","w");
	ll x,y;	
	fscanf(fp1,"%lld %lld" &x, &y);
	fscanf(fp2,"%lld\n",x+y);
return 0;
}
