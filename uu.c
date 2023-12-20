#include <stdio.h>

int main()
{
  	char str[100], word[100];
  	int i, j, Flag,count=0;

  	printf("\n Please Enter any String :  ");
  	gets(str);

	printf("\n Please Enter the Word that you want to Search for :  ");
  	gets(word);

  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == word[0])
		{
			for(j = 0; word[j] != '\0'; j++)
			{
				if(str[i + j] != word[j])
				{
					break;
				}
			}
			count++;
		}

	}
	if(count == 0)
  	{
  		printf("\n Sorry!! We haven't found the Word '%s' ", word);
	}
	else
	{
		printf("\n We found '%s' %d no. of times ", word,count);
	}

  	return 0;
}
