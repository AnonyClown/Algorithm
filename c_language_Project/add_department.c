#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct member
{
	char bu[50], irum[10]; // 부서, 성명 
	int bon, su; // 본봉, 수당 
};

int main()
{
	FILE *inf, *ouf;
	inf = fopen("data2.txt", "r");
	ouf = fopen("result2.txt", "w");
	
	struct member data;
	int gtot, butot, keb;
	char bubi[5];
	
	gtot = 0;
	fprintf(ouf,"\t\t사원 급여표\n");
	fprintf(ouf, "부서\t성명\t본봉\t수당\t합계\n");
	fscanf(inf, "%s %s %d %d", data.bu, data.irum, &data.bon, &data.su);
	
	while(1)
	{
		butot = 0;
		strcpy(bubi, data.bu);
		do
		{
			keb = data.bon + data.su;
			butot += keb;
			fprintf(ouf, "%s\t %s\t %d\t %d\t %d\n", data.bu, data.irum, data.bon, data.su, keb);
			
			if(fscanf(inf, "%s %s %d %d", data.bu, data.irum, &data.bon, &data.su) == EOF)
			{
				gtot += butot;
				fprintf(ouf, "부서합계 : %d\n", butot);
				fprintf(ouf, "전체 합계 : %d\n", gtot);
				
				fclose(ouf);
				fclose(inf);
				exit(0);
			}
		} while(strcmp(bubi, data.bu)==0);
		
		gtot += butot;
		fprintf(ouf, "부서합계 : %d\n", butot);
	}
}
