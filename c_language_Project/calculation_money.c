#define LENGTH 10
#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지

struct member
{
	char n[10];
	int p, pm[10];
};

int main()
{
	FILE *fp = fopen("datal.txt", "r");
	
	struct member data;
	int tm[10],k, t, m, sw;
	
	printf("\t\t\t 출장비 지급표\n");
	printf("성명 출장비 지급액 오만 일만 오천 일천 오백 일백 오십 일십 오 일 \n");
	
	for(k=0; k<=LENGTH-1; k++);
	{
		tm[k] = 0;
		data.pm[k] = 0;
	}

	fscanf(fp, "%s %d", data.n, &data.p); //data.n과 data.p 변수에  이름과 출장비를 저장한다. 

	do
	{
		t=data.p;
		m=50000;
		sw =1;
		for(k=0; k<=LENGTH-1; k++)
		{
			data.pm[k] = t/m;
			t-=data.pm[k]*m;
				
			if(sw==1) //처음 5만원을 만원, 천원, 백원 등으로 변환 
			{
				m/=5;
				sw=0;
			}
			else // 두번째 만원을  오천원, 오백원 오십원 등으로 변환 
			{
				m/=2;
				sw=1;
			}
		}
		printf("%s %d", data.n, data.p);
		for(k=0; k<=LENGTH-1; k++)
		{
			printf("%5d, data.pm[k]");
			tm[k] += data.pm[k];
		}
		printf("\n");
		fscanf(fp, "%s %d", data.n, &data.p);
	} while(strcmp(data.n, "quit")!=0);
	
	printf("전체 화폐 매수");
	for(k=0; k<=LENGTH-1; k++)
	{
		printf("%5d",tm[k]);
	}
	
	fclose(fp); 
	return 0;
	
}


