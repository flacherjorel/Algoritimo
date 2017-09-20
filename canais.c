#include <stdio.h>
int main ()
{

int canal, c2=0, c4=0, c6=0, c7=0, c12=0, c0=0, cont=1;
do
{
	printf("digite um canal");
	scanf("%i",&canal);
	if(canal==2)
	{
		c2=c2+1;
	
	}
	else
	{
		if(canal==4)
		{

			c4=c4+1;
		}
		else
		{
			if(canal==6)
			{
				c6=c6+1;
			}
			else
			{
				if(canal==7)
				{
					c7=c7+1;
				}
				else
				{
					if(canal==12)
					{
						c12+=1;
					}
					else
						{
							if(canal==0)
							{
								c0=c0+1;							
							}
							else
							{
								cont-=1;
								printf("canal invalido\n");
							}
						}						
					
				}
			}
		}
	}
	cont+=1;

	

}while(cont<=10);
printf("%i quantidade canal 2",c2);printf("	porcentagem %i\n",(c2*100)/10);
printf("%i quantidade canal 4",c4);printf("	porcentagem %i\n",(c4*100)/10);
printf("%i quantidade canal 6",c6);printf("	porcentagem %i\n",(c6*100)/10);
printf("%i quantidade canal 7",c7);printf("	porcentagem %i\n",(c7*100)/10);
printf("%i quantidade canal 12",c12);printf("	porcentagem %i\n",(c12*100)/10);
printf("%i quantidade canal 0",c0);printf("	porcentagem %i\n",(c0*100)/10);
}
