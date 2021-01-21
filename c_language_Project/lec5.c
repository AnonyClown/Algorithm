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

//이분 검색 
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

//merge sort : 리스트를 나누는 함수 
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
//merge sort: 리스트를 다시 합치는 함수 
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
			sorted[k++] = list[i++]; //sorted[0~3]까지 값 입력 
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

  	// 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
  	for(l=left; l<=right; l++)
	{
  	  list[l] = sorted[l];
	}

}

//스택이란 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 LIFO 형식의 자료 구조 
// 가장 최근에 스택에 추가한 항목이 가장 먼저 제거될 항목
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
			printf("삽입할 숫자를 작성하시오 : ");
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
				printf("제거한 자료는 %d 입니다.\n",k);
			}
		}
		else
		{
			break;
		}
	 }
	 
	 if(top<0)
	 {
	 	printf("스택에 자료가 없습니다. ");
	 }
	 else
	 {
	 	printf("스택에 자료는 다음과 같습니다. \n");
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






















