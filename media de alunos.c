#include <stdio.h>
int main ()
{
	
	int cont=0,alta, baixa, media;

	printf("escreva uma nota");
	scanf("%i",&media);
	baixa=media;
	alta=media;
	while(cont<=10)
	{
		cont+=1;
		if(media>alta)
		{
			alta=media;
		}
		if(media<baixa)
		{
			baixa=media;
		}
		printf("escreva uma nota");
		scanf("%i",&media);
	}
	printf("%i\n",alta);
	printf("%i",baixa);	
}

