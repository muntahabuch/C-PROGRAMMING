# include <stdio.h>
int main()
{
    FILE* fptr;
    fptr =fopen("c:\\users\\desktop\\tata.docx" ,"r");
    fprintf( fptr,"hello world");
    fclose(fptr);
}
