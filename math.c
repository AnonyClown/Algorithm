#include<stdio.h>

void dec();
void dec1();
void dec2();
void gcf_lcm();
void measure();
void factorization();


int main()
{
	//dec();
	//dec1();
	//dec2();
	//gcf_lcm();
	//measure();
	factorization();

}


// �Ҽ� �Ǻ��ϴ� �Լ� 
void dec()
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
void dec1()
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
 void dec2()
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
 
 
 
 ///////////////////
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
