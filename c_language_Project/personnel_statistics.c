#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct member
{
	char name[50];
	int age, dong;
};

int main()
{
	int tmp[11][9]={0,};
	int nm, i ,j,sum=0,cnt=1;
	struct member data;
	
	FILE *ouf;
	ouf = fopen("result3.txt", "w");
	
	
	fprintf(ouf,"��\t 0~9\t 10~19\t 20~29\t 30~39\t 40~49\t 50~59\t 60�̻�\t �հ�\n");
	printf("�� �ڵ�� ��,�� ���̸� �Է��ϼ���\n�׸� �Է��Ͻǽ� 0�� �Է��ϼ���\n�� �ڵ� ���� ����\n ");
	
	while(1)
	{
		scanf("%d %s %d", &data.dong, data.name, &data.age);
		if(data.dong==0)
		{
			break;
		}
		else if(data.dong>11)
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n ó������ �ٽ� �Է����ּ���\n�� �ڵ� ���� ����\n");
		}
		
		nm = (data.age/10)+ 1;
		if(nm>7)
		{
			nm=7;
		} 
		tmp[data.dong-1][nm]+=1;
		 
	}
	
	//�� ���� 
	for(i=0; i<10; i++)
	{
		tmp[i][0]+=cnt;
		cnt++;
	}
	
	// �� �հ� ���ϱ� 
	for(j=1; j<8; j++)
	{
		for(i=0;i<11; i++)
		{
			sum+=tmp[i][j];
			if(i==10)
			{
				tmp[i][j]=sum;
				sum=0; 
			}
		}
	}
	
	// �� �հ� ���ϱ�  
	for(i=0; i<11; i++)
	{
		for(j=1; j<9; j++)
		{
			sum+=tmp[i][j];
			if(j==8)
			{
				tmp[i][j]=sum;
				sum=0;
			}
		}
	}
	
	for(i=0; i<11; i++)
	{
		for(j=0; j<9; j++)
		{
			fprintf(ouf,"%d\t",tmp[i][j]);
		}
		fprintf(ouf,"\n");
	}
	
	fclose(ouf);
	
	
}
