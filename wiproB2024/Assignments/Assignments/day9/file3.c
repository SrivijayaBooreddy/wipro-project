/*read the contents of the file in reverse order and 
print it on the another file
*/


#include <stdio.h>

int main()
{
    FILE *input_file=fopen("employee_records.txt","r");
    FILE *output_file=fopen("reversed_employee_records.txt","w");

    if(input_file==NULL||output_file==NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    //Read lines from input_file and store them in an array
    char lines[100][100];
    int num_lines=0;

    while(fgets(lines[num_lines],sizeof(lines[num_lines]),input_file)!=NULL)
    {
        num_lines++;
    }
    //write reversed lines to output_file
    for(int i=num_lines-1;i>=0;i--){
        fprintf(output_file,"%s",lines[i]);
    }
    fclose(input_file);
    fclose(output_file);

    printf("Content of employee_records.txt reversed and saved to reversed_employee_records.txt.\n");
    return 0;
}