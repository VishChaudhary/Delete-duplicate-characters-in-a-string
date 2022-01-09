#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StringChange(char StringOrig[], char StringMod[])
{
	int i, j, k;
	int size = strlen(StringOrig);		

	strcpy(StringMod,StringOrig);	
	for (i = 0; i < size; i++)			
	{
		for (j = i+1; j < size;j++)			
		{
			if (StringMod[i] == StringMod[j])		
			{
				for (k = j; k < size; k++)
				{
					StringMod[k] = StringMod[k+1];		
				}
			}
		}
	}
	
	printf("\nOriginal string: %s\n", StringOrig);		
	printf("\nModified string: %s\n\n", StringMod);		
}

int main(void)
{
	char StringOrig[] = "ffsscchshscccsw";
	char StringMod[100];

	StringChange(StringOrig, StringMod);	

	return 0;
}

