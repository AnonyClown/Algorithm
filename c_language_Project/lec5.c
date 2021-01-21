#include<stdio.h>
#define MAX_SIZE 8
int sorted[MAX_SIZE];

int stack[MAX_SIZE];
int top=-1; 

void select_sort();
void bubble_sort();
void insert_sort();
void rank();
void divide_search();

void mergesort(int list[],int left, int right);
void merge(int list[], int left, int mid, int right);

void Stack();
int push(int num);
int pop();

int main()
{
	//select_sort();
	//bubble_sort();
	//insert_sort();
	//rank();
	//divide_search();

	//int i;
	//int list[8] = {1, 2, 3 ,4, 5, 6, 7, 8};
	//mergesort(list, 0, 7);
	
	/*for(i=0; i<8; i++)
	{
		printf("%d ", list[i]);
	}*/
	Stack();
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

//�̺� �˻� 
void divide_search()
{
	int num[10]={1,2,3,4,5,6,7,8,9,10}, i,j,h,l,m;
	
	scanf("%d",&j);
	
	l=0;
	h=9;
	
	while(1)
	{
		if(l<=h)
		{
			m=(l+h)/2;
			
			if(j==num[m])
			{
				printf("%d %d",j,m+1);
				break;
			}
			
			if(j<num[m])
			{
				h=m-1;
			}
			else
			
			{
				l=m+1;
			}
		}
		
		else
		{
			printf("%d not found",j);
			break;
		}
	}
	
}

//merge sort : ����Ʈ�� ������ �Լ� 
void mergesort(int list[], int left, int right)
{
	int mid,i=0,j=0,k=0;
	
	if(left<right)
	{
		mid = (left+right)/2;
			
		mergesort(list, left,mid);

			
		mergesort(list, mid+1, right);
	
		
		merge(list,left,mid,right);
	
	}
	 
}
//merge sort: ����Ʈ�� �ٽ� ��ġ�� �Լ� 
void merge(int list[], int left, int mid, int right)
{
	int i,j,k,l;
	i=left;
	j=mid+1;
	k=left;
	
	while(i<=mid && j<=right) // list= [1234 5678]
	{
		if(list[i]<=list[j])
		{
			sorted[k++] = list[i++]; //sorted[0~3]���� �� �Է� 
		}
		else
		{
			sorted[k++] = list[j++];
		}
	}

	if(i>mid)
	{
		for(l=j; l<=right; l++)
		{
			sorted[k++] = list[l];
		}
	}
	else
	{
    	for(l=i; l<=mid; l++)
      	{
      		sorted[k++] = list[l];
		}
  	}

  	// �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
  	for(l=left; l<=right; l++)
	{
  	  list[l] = sorted[l];
	}

}

//�����̶� �� �� �������� �ڷḦ �ְ� �� �� �ִ� LIFO ������ �ڷ� ���� 
// ���� �ֱٿ� ���ÿ� �߰��� �׸��� ���� ���� ���ŵ� �׸�
//  
void Stack()
{
	int l; 
	while(1)
	{
		int i,j,k;
		printf("push(1) or pop(2) : ");
		scanf("%d", &i);
		
		if(i==1)
		{
			printf("������ ���ڸ� �ۼ��Ͻÿ� : ");
			scanf("%d",&j);
			k=push(j);
			if(k==-1)
			{
				break;
			}
			
		}
		else if(i==2)
		{
			k=pop();
			if(k==-1)
			{
				break;
			}
			else
			{
				printf("������ �ڷ�� %d �Դϴ�.\n",k);
			}
		}
		else
		{
			break;
		}
	 }
	 
	 if(top<0)
	 {
	 	printf("���ÿ� �ڷᰡ �����ϴ�. ");
	 }
	 else
	 {
	 	printf("���ÿ� �ڷ�� ������ �����ϴ�. \n");
	 	for(l=top; l>=0; l--)
	 	{
	 		printf("%d ", stack[l]);
		 }
	}
	 
	 	  
}

int push(int num)
{
	top++;
	if(top>MAX_SIZE)
	{
		printf("overflow");
		top--;
		return -1;
	}
	
	stack[top] = num;
	return 0;
}

int pop()
{
	int r;
	if(top<0)
	{
		printf("underflow");
		return -1;
	}
	
	r=stack[top];
	top--;
	return r;
}






















