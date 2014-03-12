#include<stdio.h>
#include<string.h>

int main()
{
char values[100]; 
	
	char newstr[100];
	gets (values);
	
	
	int len = strlen(values);
	int i,k;
	int j=0;
	
	for (i = 0; i < len; i++)
	{
		if (values[i] == ' ')
		{	
			values[i] = '\0';
			for (k = i+1; k < len; k++)
			{
				newstr[j] = values[k];
				
				++j;
			}
			
			
		}
	}
	j++;
	newstr[j] = '\0';

	char *s1 = values;
	char *s2 = newstr;

	char *s3 = strstr(s1, s2);
	if (s3) { printf("%ld", s3 - s1); }
		else { printf("-1"); }

    return 0;
}