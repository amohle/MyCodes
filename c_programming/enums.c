#include<stdio.h>

char* genderPrint(int gender);
int main()
{
    enum gender{
        male=100,female=200
    };
    typedef enum gender gender;
    gender gender_ashu=male;
    gender gender_shitu=female;
//printing in strings
printf("%s\n",genderPrint(gender_ashu)); // will print male
printf("%s\n",genderPrint(gender_shitu));//will print female
}
char* genderPrint(int gender)
{
    switch(gender)
    {
        case 100:
        return "male";
        case 200:
        return "female";
        default:
        break;
    }
    return NULL;

} 