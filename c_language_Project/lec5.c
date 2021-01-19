#include<stdio.h>

void select_sort();
void bubble_sort();
void insert_sort();
void rank();

int main()
{
	//select_sort();
	//bubble_sort();
	//insert_sort();
	rank();
}


//���� ���� : ù ��° �ڷḦ ���������� ���Ͽ� ���� ���� ���� ù ��°�� ����
// �� ��° �ڷ���� ������ �ڷ���� �� ��� ���. 
void select_sort()
{
	int num[10], i, j, k, l, tmp=0;
	
	printf("10���� ���ڸ� �Է��Ͻÿ� : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(j=0; j<10; j++)
	{
		for(k=j+1; k<10; k++)
		{
			if(num[j]>num[k])
			{
				tmp = num[j];
				num[j]= num[k];
				num[k]= tmp;
			}
		}
	}
	
	for(l=0; l<10; l++)
	{
		printf("%d ", num[l]);
	}
	 
}

// ���� ���� : ���� ������ �� ���Ҹ� �˻��Ͽ� �����ϴ� �˰���
// �������İ� ����, 1ȸ�� ���� �� ���� ū �ڷᰡ �� �ڷ� �̵� 
void bubble_sort()
{
	int num[10], i, j, k, l, tmp=0;
	
	printf("10���� ���ڸ� �Է��Ͻÿ� : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	} 
	
	for(j=0; j<10; j++)
	{
		for(k=0; k<10-j-1; k++)
		{
			if(num[k]>num[k+1])
			{
				tmp = num[k];
				num[k] = num[k+1];
				num[k+1]=tmp;
			}
		}
	}
	
	for(l=0; l<10; l++)
	{
		printf("%d ", num[l]);
	}
	
}

//���� ���� 
void insert_sort()
{
	int num[10], key, i, j, k, l, cnt=1;
	
	printf("10���� ���ڸ� �Է��Ͻÿ� : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(j=1; j<10; j++)
	{
		for(k=j-1; k>=0; k--)
		{
			printf("%d. %d�� %d?\n",cnt,num[j],num[k]);
			cnt++;
			if(num[k+1]<num[k]) // num = 5 4 3 2 1 / 45321
			{
				key = num[k+1];
				num[k+1]= num[k];
				num[k] = key;
			}
			else
			{
				
			}
		}
		printf("----------------------------------\n");
	}
	
	for(l=0; l<10; l++)
	{
		printf("%d ", num[l]);
	}
}

//���� ���ϱ�. 
void rank()
{
	int score[5],ran[5],i,j,k,cnt=1,l;
	
	printf("5���� ������ �Է��Ͻÿ� : ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&score[i]);
	}
	
	for(j=0; j<5; j++)
	{
		for(k=0;k<5; k++)
		{
			if(score[j]<score[k])
			{
				cnt++;
			}
		}
		ran[j]=cnt;
		cnt=1;
	} 
		
	for(l=0; l<5; l++)
	{
		printf("%d ", ran[l]);
	}
}































