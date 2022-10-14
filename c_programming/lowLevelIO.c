#pragma warn -w
#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h> // open function
#include <unistd.h> // close function


int main()
{
char buffer[512], source[128], target[128];
int in, out, bytes;
printf("\nEnter Source file name\n");
scanf("%s",source);
puts(source);
in=open(source,O_RDONLY);
if(in==-1)
{
    printf("\nCannot open Source file\n");
    exit(1);
}
printf("\nEnter target file name");
scanf("%s",target);
out=open(target,O_CREAT|O_WRONLY,S_IWRITE);
if(out==-1)
{
    printf("Target file is not found");
    close(in);
    exit(2);
}
while(1)
{
    bytes=read(in,buffer,512); //bytes gives the number of total bytes read
    if(bytes>0)
    {
        write(out,buffer,bytes); //here bytes specifies the number of bytes to be written
    }
    else
    {
        break;
    }
    close(in);
    close(out);
    exit(0);
}


}