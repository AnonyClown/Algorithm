#include<stdio.h>

void max_min_num();
void number5();
void find_number();
void ones_complement();
void greycode();
void addbit();

int main()
{
	
	//max_min_num();
	//number5();
	//find_number();
	//ones_complement();
	//greycode();
	addbit();
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

// 5�� ����� ������ ���� ���Ͽ���. 
void number5()
{
	int i,cnt=0,hap=0;
	
	for(i=1; i<=100; i++)
	{
		if(i%5==0)
		{
			cnt++;
			hap+=i;
		}
	}
	
	printf("5�� ����� ������ : %d\n", cnt);
	printf("5�� ��� ���� : %d\n", hap);
	
}

//10���� 1�ڸ� ���� ������ �Է� �޾� �迭�� ������ �� ����� �ڷ��� 7�� ���� ����� �ڷḦ ã�� �������� �ۼ��ض�.
// �� �ڷ�� 1�ڸ� �����̰� �ٻ簪�� 2���� ��쿡�� ���߿� ã�� ���� ����Ѵ�. 
void find_number()
{
	int num[10],tmp[10];
	int i,j,res,cnt;
	
	printf("1~9 ���� ���ڸ� �Է��Ͻÿ� : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
		tmp[i]=7-num[i];
	}
	res=tmp[0];
	
	for(j=0; j<9; j++)
	{
		
		if(tmp[j]>tmp[j+1] && tmp[j]>=0 && tmp[j+1]>=0)
		{
			res=tmp[j+1];
			cnt=j+1;
		}
	}
	
	printf("���ڴ� : %d, �ٻ簪�� : %d, ������ : %d",num[cnt],res,cnt);
	

}

void ones_complement()
{
	int num[5],one_num[5], two_num[6]={0,};
	int i, j, k=6, cnt=0;
	
	printf("������ 5�ڸ��� �Է��Ͻÿ� : ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}
	
	while(1)
	{
		if(num[cnt]==0)
		{
			one_num[cnt]=1;
			two_num[cnt+1]=1;
		}
		else
		{
			one_num[cnt]=0;
			two_num[cnt+1]=0;
		}
		cnt++;
		if(cnt==5)
		{
			break;
		}
	}
	

	printf("�Է��� �������� 1�� ������ : ");
	for(j=0; j<5; j++)
	{
		printf("%d",one_num[j]);
	}
	
	printf("\n");
	
	
	printf("�Է��� �������� 2�� ������ : ");
	for(j=0; j<6; j++)
	{
		printf("%d",two_num[j]);
	}
	
	printf("\n");
	
	
	
	printf("12�Է��� �������� 2�� ������ : ");
	while(k--)
	{
	
		if(two_num[k]+1>1)
		{
			two_num[k]=0;
			if(two_num[k-1]==0)
			{
				two_num[k-1]=1;
			}
			else
			{
				two_num[k-1]=0;
			}
			
			
		}
		
		if(k==1)
		{
			break;
		}
	}
	
	for(j=0; j<6; j++)
	{
		printf("%d",two_num[j]);
	}
}

//�׷��� �ڵ� ��ȯ�ϱ� 
void greycode()
{
	int num[4],grey[4],i,j,k,msb=0;
	printf("2������ 4�ڸ��� �Է��Ͻÿ� : ");
	
	for(i=0; i<4; i++)
	{
		scanf("%d",&num[i]);
	}
	grey[0]=num[0];
	
	for(j=0; j<4; j++)
	{
		if(j>0)
		{
			if( num[j-1]!=num[j])
			{
				grey[j]=1;			
			}

			else
			{
				grey[j]=0;					
			}
			
		}
	}
	
	printf("��ȯ�� �׷����ڵ�� : "); 
	for(k=0; k<4; k++)
	{
		printf("%d",grey[k]);
	}
	
}

//������ ���ϱ� �Լ�
void addbit()
{
	int x[8],y[8],z[8],c=0,i,j,k,l,msb;
	
	printf("������ x(8�ڸ�)�� �Է��Ͻÿ� : ");
	for(i=0; i<8; i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf("������ y(8�ڸ�)�� �Է��Ͻÿ� : ");
	for(l=0; l<8; l++)
	{
		scanf("%d",&y[l]);
	}
	
	for(j=7; j>=0; j--) //0010 0011
	{
		if(c==1)
		{
			z[j]=x[j]+y[j]+c;
			
			if(z[j]>1) // 2 or 3
			{
				
				if(z[j]%2==0)
				{
					z[j]=0;
					if(j==0)
					{
						msb=1;
					}
					c=1;
				}
				else
				{
					z[j]=1;
					if(j==0)
					{
						msb=1;
					}
					c=1;
				}
			}
			else
			{
				c=0;
			}
			
		}
		
		else
		{
			if(x[j]+y[j]==2)
			{
				c=1;
				z[j]=0;
			}
		
			else
			{
				z[j]=x[j]+y[j];
				c=0;
			}
		}
	}
	
	printf("������ : ");
	for(k=0; k<8; k++)
	{
		printf("%d",z[k]);
	}
} 


















