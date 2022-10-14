#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *names[6], n[50]; 
int len, i; 
char *p; 
scanf ("%s", n); 
len = strlen (n); 
p = (char *) malloc (len + 1); /* +1 for accommodating \0 */ 
strcpy (p, n); names[0] = p; 
}
