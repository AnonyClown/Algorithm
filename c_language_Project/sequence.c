#include<stdio.h>

void sequence();
void sequence1();
void sequence2();
void sequence3();
void sequence4();
void sequence5();

int main()
{
	//sequence();
	//sequence1();
	//sequence2();
	//sequence3();
	//sequence4();
	sequence5();
	
}


//1~100���� ���ϱ� �Լ� 
void sequence()
{
	int i=1,j=0;
	for(i=1; i<=100; i++)
	{
		j+=i;
	}
	printf("sum = %d", j);

}


//1~100���� Ȧ���� �� ���ϰ� ¦���� �� ���� �Լ�
void sequence1()
{
	int i=1, j=0;
	for(i=1; i<=100; i++)
	{
		if(i%2==0)
		{
			j-=i;
		}
		else
		{
			j+=i;
		}
		
	}
	printf("sum = %d",j);	
}

// �м� ����
void sequence2()
{
	int i=0;
	double j=0;
	
	for(i=1; i<100; i++)
	{
		if(i%2==0)
		{
			j += (double)i/(i+1);
			printf("1. %.2lf\n",j);
		}
		else
		{
			j -= (double)i/(i+1);
			printf("2. %.2lf\n",j);
		}
		
	}
	
	printf("sum = %.2lf", j);
}


// �� ������ �����ϴ� ���� ������ ������ �����ϴ� ����
void sequence3()
{
	int i,j=1,cnt=0;
	for(i=0; i<=19; i++)
	{
		printf("%d + %d = %d\n",j,i,j+i); 
		j+=i; // �� ���ϱ� 
		cnt+=j; // �� ���ϱ�
		printf("result=%d\n",cnt);
		printf("------------------------\n");
	}
	printf("sum = %d\n",cnt);
	
} 


// 1~10 ���丮���� �հ踦 ���Ͻÿ�. 
void sequence4()
{
	int i,j,tmp=1,cnt;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<i; j++){
			tmp = tmp*(j+1);
		}
		cnt+=tmp;
		tmp=1;
	}
	printf("res = %d", cnt);
}

// �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���Ͻÿ�. 
void sequence5()
{
	int i,j=1,k=1,cnt,res;
	for(i=1; i<=10; i++)
	{
		//j,k,cnt ������ 1~3��° ��
		cnt = j+k;
		res = cnt+k;
		
		printf("%d %d ",j,k);
		
		j=cnt;
		k=res;
				
	}
	printf("%d %d\n",j,k);
	printf("res = %d", res);
}












 
