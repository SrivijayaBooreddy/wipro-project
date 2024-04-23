/*read the content from the records of Employee and 
store in structure variable
*/

#include <stdio.h>

//define the employee structure
struct Employee{
    int emp_id;
    char name[50];
    float salary;
    char gender;
    int mobile_no;
};

int main()
{
    //create an array of Employee structures
    struct Employee employees[10];

    //open the file for reading
    FILE *file= fopen("employee_records.txt","r");
    if(file != NULL){
        //read employee records from the file
        for(int i=0;i<10;++i){
            fscanf(file,"%*d%d%s%f%c%d",&employees[i].emp_id,&employees[i].name,&employees[i].salary,&employees[i].gender,&employees[i].mobile_no);
        }
        fclose(file);
        printf("Employee records read from employee_records.txt and stored in structure.\n");
    }else{
        printf("Error opening file for reading.\n");
    }
    return 0;
}