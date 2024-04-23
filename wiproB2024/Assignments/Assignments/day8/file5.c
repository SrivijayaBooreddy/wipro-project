#include <stdio.h>
#include <string.h>


void alternateMerge(char *str1,char *str2){
    int len1=strlen(str1);
    int len2=strlen(str2);
    int len=len1+len2;
    char merged[len];

    int index=0;
    for(int i=0;i<len1||i<len2;i++){
        if(i<len1){
            merged[index++]=str1[i];
        }
        if(i<len2){
            merged[index++]=str2[i];
        }
    }
    merged[index]='\0';
    printf("Output: %s\n",merged);
}

int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);

    alternateMerge(str1,str2);
    return 0;
}