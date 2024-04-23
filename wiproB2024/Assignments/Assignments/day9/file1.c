/* Capture Employee 10 records in the structure and store
it in a file
*/

#include <stdio.h>
//define employee structure
struct Employee{
    int emp_id;
    char name[50];
    float salary;
    char gender;
    int mobile_no;
};

int main(){
    //create an array of employee structures
    struct Employee employees[10];

    //capture 10 employee records
    for(int i=0;i<10;i++){
        printf("Enter Employee %d ID:",i+1);
        scanf("%d",&employees[i].emp_id);
        printf("Enter Employee %d Name:",i+1);
        scanf("%s",&employees[i].name);
        printf("Enter Employee %d salary:",i+1);
        scanf("%f",&employees[i].salary);
        printf("Enter Employee %d gender(M/F):",i+1);
        scanf("%c",&employees[i].gender);
        printf("Enter Employee %d mobile_no:",i+1);
        scanf("%d",&employees[i].mobile_no);
    }
    //write employee records to a file
    FILE *file=fopen("employee_records.txt","w");
    if(file!= Null){
        for(int i=0;i<10;++i){
            fprintf(file,"%02d %05d %s %.2f %c %05d\n",i+1,employees[i].emp_id,employees[i].name,employees[i].salary,employees[i].gender,employees[i].mobile_no);
        }
        fclose(file);
        printf("Employee records saved to employee_records.txt\n");
    }else{
        printf("Error opening file for writing.\n");
    }
    return 0;
}

