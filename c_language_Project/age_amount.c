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
	
	printf("반 번호를 무게를 입력하세요. \n모두 입력하면 0 0 0을 입력하세요\n");
	flag=0;
	i=-1;
	k=-1;
	
	do{
		k++;
		scanf("%s %d %d", data[k].ban, &data[k].num, &data[k].weight);
		
	} while(data[k].num != 0);
	
	printf("반\t번호\t체중\t\n");
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
	printf("최소 체중 : %d\n",a);
	printf("최대 체중 : %d",b);
		
}
