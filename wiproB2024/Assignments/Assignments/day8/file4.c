#include<stdio.h>
#include<string.h>
void removeChars(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    int hash[256]={0};

    for(int i=0;i<len1;i++){
        hash[(int)str1[i]]=1;
    }

    int currentIndex=0;
    for(int i=0;i<len2;i++){
        if(hash[(int)str2[i]]==0){
            str2[currentIndex++]=str2[i];
        }
    }
    str2[currentIndex]='\0';
}

int main()
{
    char str1[100],str2[100];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);

    removeChars(str1,str2);

    printf("Output: %s\n",str2);
    return 0;
}