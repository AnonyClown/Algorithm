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


//선택 정렬 : 첫 번째 자료를 마지막까지 비교하여 가장 작은 값을 첫 번째에 놓고
// 두 번째 자료부터 마지막 자료까지 위 방식 사용. 
void select_sort()
{
	int num[10], i, j, k, l, tmp=0;
	
	printf("10개의 숫자를 입력하시오 : ");
	
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

// 버블 정렬 : 서로 인접한 두 원소를 검사하여 정렬하는 알골리즘
// 선택정렬과 유사, 1회전 수행 시 가장 큰 자료가 맨 뒤로 이동 
void bubble_sort()
{
	int num[10], i, j, k, l, tmp=0;
	
	printf("10개의 숫자를 입력하시오 : ");
	
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

//삽입 정렬 
void insert_sort()
{
	int num[10], key, i, j, k, l, cnt=1;
	
	printf("10개의 숫자를 입력하시오 : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(j=1; j<10; j++)
	{
		for(k=j-1; k>=0; k--)
		{
			printf("%d. %d와 %d?\n",cnt,num[j],num[k]);
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

//순위 구하기. 
void rank()
{
	int score[5],ran[5],i,j,k,cnt=1,l;
	
	printf("5개의 점수를 입력하시오 : ");
	
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































