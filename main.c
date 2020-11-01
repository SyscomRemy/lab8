#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "max.h"
#include "min.h"
#include "variance.h"
int main ()
{
	int tab[7]={13,12,5,1,19,13,17};
	int maxi=1;
	int mini=100;
	float var;
	max(tab,7,&maxi);
	min(tab,7,&mini);
	variance(tab,7,&var);
	printf("Le minimum est : %d\n",mini);
	printf("Le maximum est : %d\n",maxi);
	printf("La variance est : %f\n",var);
	printf("La variance arrondie au supérieur est : %f\n",ceil(var));
	printf("La variance arrondie à l'inférieur est : %f\n",floor(var));
	return 0;
}
