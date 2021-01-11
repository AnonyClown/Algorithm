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


// 소수 판별하는 함수 
void dec()
{
	int num;
	int i,cnt=0;
	
	printf("숫자를 입력하세요 : ");
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
		printf("%d는 소수입니다.\n",num);
	}
	else
	{
		printf("%d는 소수가 아닙니다. \n",num);
	}	
}

// 소수의 합 구하는 함수
void dec1()
{
	int num, i, j, sum=0, cnt=0;
	
	printf("숫자를 입력하세요: ");
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
	
	printf("%d 이하의 숫자 중 소수의 합은 : %d",num, sum);
 } 
 
 // 소수의 개수 구하기
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
	 
	 printf("\n소수의 개수는 %d", sum);
	 
 	
 } 
 
 
 // 두 수를 입력 받아 최대 공약수, 최소 공배수 계산
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
 
 // 약수 구하는 함수 
 void measure()
 {
 	int num,i,res[100],cnt=0;
 	printf("숫자를 입력하세요 : ");
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
 
 
 // 소인수분해 함수 
 void factorization()
 {
 	int num, i, j, res[100], cnt=0;
	printf("숫자를 입력하세오 : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0) // 약수 검사 
		{
			for(j=1; j<=i; j++) // 소수 검사 
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
