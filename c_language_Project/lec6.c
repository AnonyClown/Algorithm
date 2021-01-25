#include<stdio.h>
void matrix_5();
void star();
void riul();
void diamond();
void hourglass();
void righttriangle();

int main()
{
	//matrix_5();
	//star();
	//riul();
	//diamond();
	//hourglass();
	righttriangle();

}

//5행 5열 이중 배열문 작성 
void matrix_5()
{
	int i,j,num[5][5],cnt=1;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			num[i][j]=cnt;
			cnt++;
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
}

//5행 5열 이중배열 직각 삼각형 모양 출력하기
void star()
{
	int num[5][5],cnt=1,i,j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<=i; j++)
		{
			num[i][j]=cnt;
			cnt++;
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
}

// 배열 ㄹ 순서로 출력하기. 
void riul()
{
	int num[5][5],cnt=1,i,j,k,l=0,a,b;
	
	while(1)
	{
		for(i=0; i<5; i++)
		{
			if(l==1)
			{
				for(k=4; k>=0; k--)
				{
					num[i][k]=cnt;
					cnt++;
				}
				l=0;
			}
			
			else
			{
				for(j=0; j<5; j++)
				{
					num[i][j]=cnt;
					cnt++;
				}
				l=1;
			}
			
		}
		
		break;

	}
	
	for(a=0; a<5; a++)
	{
		for(b=0; b<5; b++)
		{
			printf("%d ",num[a][b]);
		}
		printf("\n");
	}

}


void diamond()
{
	int num[5][5]={0,}, i, j, s, e, cnt=0,a,b;
	s=2;
	e=2;
	
	for(i=0; i<5; i++)
	{
		for(j=s; j<=e; j++)
		{
			num[i][j]=j+1;
		}
		cnt++;

		if(cnt>2)
		{
			s++;
			e--;
		}
		else
		{
			e++;
			s--;
		}
		// [0][2]

	}
	

	for(a=0; a<5; a++)
	{
		for(b=0; b<5; b++)
		{
			printf("%d ",num[a][b]);
		}
		printf("\n");
	}
}

void hourglass()
{
	int num[5][5]={0,}, i, j, s, e, cnt=0,a,b,tmp=1;
	s=0;
	e=4;
	
	for(i=0; i<5; i++)
	{
		for(j=s; j<=e; j++)
		{
			num[i][j]=tmp;
			tmp++;
		}
		cnt++;

		if(cnt>2)
		{
			e++;
			s--;
		}
		else
		{
			s++;
			e--;
		}
		// [0][2]

	}
	

	for(a=0; a<5; a++)
	{
		for(b=0; b<5; b++)
		{
			printf("%d ",num[a][b]);
		}
		printf("\n");
	}
}


void righttriangle()
{
	int num[7][7]={0, };
	int i,j,a,b;
	int e,cnt=1,tmp=0;
	
	e=6;
	
	for(i=0; i<7; i++)
	{
		for(j=0; j<=e; j++)
		{
			num[i][j] = cnt;
			cnt++;
		}
		tmp++;
		
		if(tmp<4)
		{
			e--;
		}
		else
		{
			e++;
		}
	}
	
	for(a=0; a<7; a++)
	{
		for(b=0; b<7; b++)
		{
			printf("%d ",num[a][b]);
		}
		printf("\n");
	}
}






































