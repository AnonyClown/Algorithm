#define LENGTH 10
#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����

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
	
	printf("\t\t\t ����� ����ǥ\n");
	printf("���� ����� ���޾� ���� �ϸ� ��õ ��õ ���� �Ϲ� ���� �Ͻ� �� �� \n");
	
	for(k=0; k<=LENGTH-1; k++);
	{
		tm[k] = 0;
		data.pm[k] = 0;
	}

	fscanf(fp, "%s %d", data.n, &data.p); //data.n�� data.p ������  �̸��� ����� �����Ѵ�. 

	do
	{
		t=data.p;
		m=50000;
		sw =1;
		for(k=0; k<=LENGTH-1; k++)
		{
			data.pm[k] = t/m;
			t-=data.pm[k]*m;
				
			if(sw==1) //ó�� 5������ ����, õ��, ��� ������ ��ȯ 
			{
				m/=5;
				sw=0;
			}
			else // �ι�° ������  ��õ��, ����� ���ʿ� ������ ��ȯ 
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
	
	printf("��ü ȭ�� �ż�");
	for(k=0; k<=LENGTH-1; k++)
	{
		printf("%5d",tm[k]);
	}
	
	fclose(fp); 
	return 0;
	
}


