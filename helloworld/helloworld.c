#include <stdio.h>
#define max 25
int main()
{
    int a[max];

    FILE *input,*output;
    input=fopen("input.txt","r");
    if(input==NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }
    int i=0;
    int j=0;
    while(!feof(input))
    {
        fscanf(input,"%c",&a[i]);
        i++;
    }
    for(j=0;j<i;j++)
    {
     printf("%c",a[j]);
    }

    output=fopen("output.txt","w");
       for(j=0;j<i;j++)
       {

       fprintf(output,"%c",a[j]);

       }

    fclose(output);
    return 0;
}
