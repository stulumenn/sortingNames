#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define maxSize 10
int main(){

    int size;
    printf("Enter size\n");
    scanf("%d", &size);

	char string[size][maxSize];
	char t [size];

	printf("Enter names.\n");

	for(int i=0; i<size; i++){
		scanf(" %s", string[i]);
	}

	for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (strcmp(string[j - 1], string[j]) > 0)
            {
                strcpy(t, string[j - 1]);
                strcpy(string[j - 1], string[j]);
                strcpy(string[j], t);
            }
        }
    }
    printf("After sorting:\n");
    for(int i=0; i<size; i++){
    	printf("%s\n",string[i]);
    }
    return 0;
}