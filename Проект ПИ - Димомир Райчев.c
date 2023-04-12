#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float B[4][4];
	int i,j;
	
	printf("Da se sustavi programa za obrabotka na masiva B[4,4] sustaven ot realni chisla sus stoinosti v intervala [0; 99.9].\n");
	printf("Programata da izvurshi slednite deistviq:\n");
	printf("1. Otpechatvane na uslovieto na zadachata.\n");
	printf("2. Otpenachatvane na imenata na avtora na programata.\n");
	printf("3. Vuvejdane na vhodni danni.\n");
	printf("4. Otpechatvane na vhodni danni.\n");
	printf("5. Da se razmenqt mestata na elementite na masiva B po otnoshenie na glavniq diagonal,\n");
	printf("kato elementite ot gornata polovina povdignati na kvadrat se prehvurlqt v dolnata, a elementite ot dolnata - v gornata.\n");
	printf("6. Da se otpechatat poluchenite rezultati po vreme i sled obrabotkata.\n");
	
	printf("\nAuthor: Dimomir Nikolaev Raichev. \n");
	
	printf("\nEnter elements of the array between [0; 99.9] \n");

	do
	{
	
		for (i = 0; i < 4; i++)
		{
			for(j = 0; j < 4; j++)
			{
				printf("Enter data in [%d] [%d]",i, j);
				scanf("%f", &B[i][j]);
			}
		}
	} while(i < 0 && i > 99.9 && j < 0 && j > 99.9);
		
		
		printf("\nThe matrix is:\n ");
		for(i = 0 ; i < 4 ; i++) 
		{
        printf(" [");
	        for(j = 0 ; j < 4 ; j++)
			{
	            printf("%.2f; ", B[i][j]);
	        }
	        printf("]\n");
    	}
    	
    	for (i = 0; i < 4; i++) 
		{
	        for (j = 0; j < 4; j++) 
			{
	            if (i < j) 
				{
	                B[i][j] = pow(B[i][j], 2);
	            }
	            else if (i > j) 
				{
	                B[i][j] = pow(B[i][j], 2);
	                float temp = B[i][j];
	                B[i][j] = B[j][i];
	                B[j][i] = temp;
	            }
	        }
    	}
    	
    	printf("\nThe matrix after the swap is :\n ");
		for(i = 0 ; i < 4 ; i++) 
		{
        printf(" [");
	        for(j = 0 ; j < 4 ; j++)
			{
	            printf("%.2f; ", B[i][j]);
	        }
	        printf("]\n");
    	}
    	
	system("pause");
	return 0;
}
