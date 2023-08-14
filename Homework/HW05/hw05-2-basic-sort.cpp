/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Test case:\n");
    printf("Input[1] :\n");
    scanf("%d",&a);
    printf("Input[2] :\n");
    scanf("%d",&b);
    printf("Input[3] :\n");
    scanf("%d",&c);
if (c > b && c > a){
if(b > a){
    printf("Output:\n %d %d %d",c ,b ,a);
}}else if(b > a && b > c)
{if(a > c){
    printf("Output:\n %d %d %d",b ,a ,c);
}}
}