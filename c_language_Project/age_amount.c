#include<stdio.h>
#include<string.h>

struct member
{
	char ban[4];
	int num,weight;
};

int main()
{
	struct member data[100];
	
	int flag, a, b, i, k;
	char c[4];
	
	printf("�� ��ȣ�� ���Ը� �Է��ϼ���. \n��� �Է��ϸ� 0 0 0�� �Է��ϼ���\n");
	flag=0;
	i=-1;
	k=-1;
	
	do{
		k++;
		scanf("%s %d %d", data[k].ban, &data[k].num, &data[k].weight);
		
	} while(data[k].num != 0);
	
	printf("��\t��ȣ\tü��\t\n");
	while(i<k-1)
	{
		i++;
		if(flag == 0)
		{
			flag =1;
			a = data[i].weight;
			b = data[i].weight;
		}
		else if(a > data[i].weight)
		{
			a = data[i].weight;
		}
		else if(b < data[i].weight)
		{
			b = data[i].weight;
		}
		
		if(strcmp(c,data[i].ban)==0)
		{
			printf("	\t%d\t%d\n",data[i].num, data[i].weight);
			continue;
		}
		strcpy(c, data[i].ban);
		printf("%s\t%d\t%d\n", data[i].ban, data[i].num, data[i].weight);
	}
	printf("�ּ� ü�� : %d\n",a);
	printf("�ִ� ü�� : %d",b);
		
}
