#include<stdio.h>

void decimal();
void decimal1();
void decimal2();
void gcf_lcm();
void measure();
void factorization();
void conversion_base();
void conversion_base1();

int main()
{
	//dec();
	//dec1();
	//dec2();
	//gcf_lcm();
	//measure();
	//factorization();
	//conversion_base();
	conversion_base1();

}


// �Ҽ� �Ǻ��ϴ� �Լ� 
void decimal()
{
	int num;
	int i,cnt=0;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d",&num);
	 
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			cnt++;
		}
	}
	
	if(cnt==2)
	{
		printf("%d�� �Ҽ��Դϴ�.\n",num);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�. \n",num);
	}	
}

// �Ҽ��� �� ���ϴ� �Լ�
void decimal1()
{
	int num, i, j, sum=0, cnt=0;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		
		if(cnt==2)
		{
			sum+=i;
		}
		
		cnt=0;
	}
	
	printf("%d ������ ���� �� �Ҽ��� ���� : %d",num, sum);
 } 
 
 // �Ҽ��� ���� ���ϱ�
 void decimal2()
 {
 	int num[99];
 	int i,j,sum=0,cnt=0,k=2;
 	
 	for(i=0; i<99; i++)
 	{
 		num[i]=k;
 		k++;
 		
 		for(j=1; j<k; j++)
 		{
 			if(num[i]%j==0)
 			{
 				cnt++;
 				
			 }
		 }
		 
		 if(cnt==2)
		 {
		 	sum++;
		 	printf("%d ",num[i]);
		 }
		 
		 cnt=0;
	 }
	 
	 printf("\n�Ҽ��� ������ %d", sum);
	 
 	
 } 
 
 
 // �� ���� �Է� �޾� �ִ� �����, �ּ� ����� ���
void gcf_lcm()
{
	int a, b, big, small, mok, nmg, gcm, lcm;
	scanf("%d %d", &a,&b);
	if(a>=b)
	{
		big=a;
		small=b;
	 }
	 else
	 {
	 	big=b;
	 	small=a;
	  } 
	  
	  while(1)
	  {
	  	//mok=big/small;
	  	//nmg=big-mok*small;
	  	nmg=big%small; 
	  	if(nmg==0)
	  	{
	  		gcm=small;
	  		lcm=a*b/gcm;
	  		printf("%d %d",gcm,lcm);
	  		break;
		  }
		  big = small;
		  small = nmg;
	  }
	
} 
 
 // ��� ���ϴ� �Լ� 
 void measure()
 {
 	int num,i,res[100],cnt=0;
 	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num); 
 	
 	for(i=1; i<=num; i++)
 	{
 		if(num%i == 0)
 		{
 			res[cnt]=i;
 			printf("%d ",res[cnt]);
 			cnt++;
		 }
	 }
 }
 
 
 // ���μ����� �Լ� 
 void factorization()
 {
 	int num, i, j, res[100], cnt=0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0) // ��� �˻� 
		{
			for(j=1; j<=i; j++) // �Ҽ� �˻� 
			{
				if(i%j==0)
				{
					cnt++;
				}
			}
			
		}
		if(cnt==2)
		{
			printf("%d ", i);
				
		}
		cnt=0; 
	}
	
 	
 }
 
 //���� ��ȯ - 10������ 2������ ��ȯ�ϱ� 
 void conversion_base()
 {
 	int num, mok, nmg, res[100], cnt=0, i;
	
	printf("1000������ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d",&num);
	
	
	while(1)
	{
		mok = num/2; //16,8,4,2,1,
		nmg = num%2; //0,0,0,0,0
		num = mok;
		
		if(mok==0)
		{
			break;
		}
		
		else
		{
			res[cnt]=nmg;
			cnt++;
			
			if(mok==1)
			{
				res[cnt] = mok;
			}
		}
	}
	
	for(i=0; i<=cnt;)
	{
		printf("%d",res[cnt]);
		cnt--;
	}
	
	 	
 }
 
 //���� ��ȯ - 10������ 2����,8����, 16������  ��ȯ�ϱ� 
 void conversion_base1()
 {
 	int num, b, c, d, e, f;
 	char a[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	printf("1000������ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d %d",&b, &c);
	
	d=1;
	while(d <= c)
	{
		d *= b;
	}
	
	while(1)
	{
		if(d>1)
		{
			 d/=b;
		}
		e = c/d;
		f=c-e*d;
		printf("%c",a[e]);
		
		if(d != 1)
		{
			c=f;
		}
		else
		{
			break;
		}
	}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
