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

	for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (strcmp(string[i], string[j]) > 0)
            {
                strcpy(t, string[i]);
                strcpy(string[i], string[j]);
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