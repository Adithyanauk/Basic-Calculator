#include<stdio.h>
#include<math.h>
#include<unistd.h>
float num,result;
char operater;

float calculater(float num,char operater)
{
	switch(operater)
	{
		case'+':
			result+=num;
			printf("answer=%f\n",result);
			break;
			
		case'-':
			result-=num;
			printf("answer=%f\n",result);
			break;
			
		case'*':
			result=result*num;
			printf("answer=%f\n",result);
			break;
			
		case'/':
			if(num!=0)
			{
				result=result/num;
				printf("answer=%f\n",result);
				break;
			}
			else
			printf("number divided by zero not posible!!\n");
			break;
			
		case'^':
			result=pow(result,num);
			printf("answer=%f\n",result);
			break;
			
		case'~':
			result=sqrt(num);
			printf("answer=%f\n",result);
			break;
			
		case'=':
			printf("Total=%.2f",result);
			break;
	}
}

int main()
{
	system("color 03");
	float a,result=0.0;
	char operater=' ';
	result=0;
	printf("                                 SIMPLE CALCULATOR\n");
	printf("ENTER THE OPERATOR AND NUMBER\n");
	do
	{
	printf("____________________________________________________________________________________________________\n");
    printf("operater=");
	scanf(" %c",&operater);
	if(operater=='=')
	{
		break;
	}
	printf("number=");
	scanf("%f",&a);
	calculater(a,operater);

	}while(operater != '=');
	
	return 0;
}


















































