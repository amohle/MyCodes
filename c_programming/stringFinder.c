/*Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(Tshe standard library function strpbrk does the same job but returns a pointer to the
location.)*/
#include<stdio.h>
int any(char *s1,char *s2);
int main()
{
     char s1[]="xxxxshutosh";
     char s2[]="Ashu";
     int result=any(s1,s2);
printf("\nResult=%d\n",result);
}
int any(char *s1,char *s2)
{
    int i=0;
while(s1[i]!='\0')
{
    i++;
    int j=0;
    while(s2[j]!='\0')
    {
        if(s1[i]==s2[j])
        {
            printf("\nMatch found: %c at position %d",s1[i],i+1);
            return i;
    
    }

j++;
}}
return -1;
}