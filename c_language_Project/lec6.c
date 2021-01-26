#include<stdio.h>
void matrix_5();
void star();
void riul();
void diamond();
void hourglass();
void righttriangle();
void lsosceles_triangle();
void degree_rotation();
void snail();
void diagonal();

int main()
{
	//matrix_5();
	//star();
	//riul();
	//diamond();
	//hourglass();
	//righttriangle();
	//lsosceles_triangle();
	//degree_rotation();
	//snail();
	diagonal();

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


void lsosceles_triangle()
{
	int col, row; //가로 세로 배열처럼 표현 
	int i, j, y, z; //for문 조건 변수들
	int k, L, e; // l : 처음 행의 위치, e : 마지막 행의 위치 
	
	scanf("%d", &col);
	row=col*2-1;
	int a[row][col];
	
	for(i=0; i<row; i++)
	{
		for(j=0;j<col; j++)
		{
			a[i][j]=0;
		}
	}
		
	k=0;
	for(j=0; j<=col-1; j++) //j는 열의 순서대로 진행함. 
	{
		L=col-(j+1);
		e=(j-1) +col;
		
		for(i=L; i<=e; i++)
		{
			k++;
			a[i][j]=k;
		}
	}
	
	for(y=0; y<row; y++)
	{
		for(z=0; z<col; z++)
		{
			printf("%3d",a[y][z]);
		}
		printf("\n");
	}
	
}

void degree_rotation()
{
	int i,j,k,x,y;
	int a[5][5] = {0,}, b[5][5]={0,};
	
	k=0;
	for(i=4; i>=0; i--)
	{
		for(j=i; j<=4; j++)
		{
			k++;
			a[i][j]=k;
		}
	}
	
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			b[j][4-i] = a[i][j];
		}
	}
	
	for(x=0; x<5; x++)
	{
		for(y=0 ;y<5; y++)
		{
			printf("%3d",a[x][y]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(x=0; x<5; x++)
	{
		for(y=0 ;y<5; y++)
		{
			printf("%3d",b[x][y]);
		}
		printf("\n");
	}
	
	
}

void snail()
{
	int k,c,i,j,f,n,x,y;
	int a[5][5]= {0};
	
	k=0;
	c=1;
	i=0;
	j=-1;
	
	f=5;
	while(1)
	{
		for(n=1; n<=f; n++)
		{
			k++;
			j+=c;
			a[i][j]=k;
		}
		
		f--;
		if(f<=0)
		{
			break;
		}
		
		for(n=1; n<=f; n++)
		{
			k++;
			i+=c;
			a[i][j]=k;
		}
		c*=-1;
	}
	for(x=0; x<5; x++)
	{
		for(y=0; y<5; y++)
		{
			printf("%3d",a[x][y]);
		}
		printf("\n");
	}
	
	

}

void diagonal()
{
	int a[5][5]={0};
	int i,j,k,x,y;
	int L=0;
	
	for(i=0; i<=8; i++)
	{
		for(j=0; j<=4; j++)
		{
			k=i-j;
			if(k<0)
			{
				continue;
			}
			if(k>4)
			{
				continue;
			}
			
			L++;
			a[j][k]=L;
		}
	}
	
	for(x=0; x<5; x++)
	{
		for(y=0; y<5; y++)
		{
			printf("%3d",a[x][y]);
		}
		printf("\n");
	}
	
}






















