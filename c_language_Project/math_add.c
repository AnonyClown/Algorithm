#include<stdio.h>

void max_min_num();

int main()
{
	
	max_min_num();

}

//�ִ밪 �ּҰ� ���ϱ�. 
void max_min_num()
{
	int num[10];
	int i, max, min;
	
	printf("���� 10���� �Է��Ͻÿ� : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	
	max = num[0];
	min = num[0];
	
	for(i=0; i<9; i++)
	{
		if(min>num[i+1])
		{
			min = num[i+1];
		}
		else if(max<num[i+1])
		{
			max = num[i+1];
		}
		
		
	}
	
	printf("max = %d, min = %d ",max,min);
	
}
