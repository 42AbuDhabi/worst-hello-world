#include<stdio.h>
int main()
{
    int forty, two;


    for(forty=1; forty<=10; forty++)
    {
        for(two=1; two<=55; two++)
        {
            if(two==1 ||two==4 ||two==2&&forty==5 ||two==3&&forty==5)
                printf("%c",72);
            else if (
               forty==5&&two==7
             ||forty==5&&two==8
             ||forty==5&&two==9
             ||forty==5&&two==10
             ||forty==6&&two==7
             ||forty==6&&two==10
             ||forty==7&&two==7
             ||forty==7&&two==8
             ||forty==7&&two==9
             ||forty==7&&two==10
             ||forty==8&&two==7
             ||forty==9&&two==7
             ||forty==10&&two==7
             ||forty==10&&two==8
             ||forty==10&&two==9
             ||forty==10&&two==10)
                printf("%c",101);
            else if(two==13)
                printf("%c",108);
            else if(two==16)
                printf("%c",108);
            else if (
               forty==5&&two==19
             ||forty==5&&two==20
             ||forty==5&&two==21
             ||forty==5&&two==22
             ||forty==6&&two==22
             ||forty==6&&two==19
             ||forty==7&&two==19
             ||forty==7&&two==22
             ||forty==8&&two==19
             ||forty==8&&two==22
             ||forty==9&&two==19
             ||forty==9&&two==22
             ||forty==10&&two==19
             ||forty==10&&two==20
             ||forty==10&&two==21
             ||forty==10&&two==22)
                printf("%c",111);
            else if(
               two==28
             ||two==34
             ||forty==5&&two==31
             ||forty==6&&two==31
             ||forty==7&&two==31
             ||forty==8&&two==31
             ||forty==9&&two==31
             ||forty==10&&two==29
             ||forty==10&&two==30
             ||forty==10&&two==31
             ||forty==10&&two==32
             ||forty==10&&two==33)
                printf("%c",87);
            else if (
               forty==5&&two==37
             ||forty==5&&two==38
             ||forty==5&&two==39
             ||forty==5&&two==40
             ||forty==6&&two==37
             ||forty==6&&two==40
             ||forty==7&&two==37
             ||forty==7&&two==40
             ||forty==8&&two==37
             ||forty==8&&two==40
             ||forty==9&&two==37
             ||forty==9&&two==40
             ||forty==10&&two==37
             ||forty==10&&two==38
             ||forty==10&&two==39
             ||forty==10&&two==40)
                printf("%c",111);
            else if (
               forty==5&&two==43
             ||forty==5&&two==44
             ||forty==5&&two==45
             ||forty==5&&two==46
             ||forty==6&&two==43
             ||forty==7&&two==43
             ||forty==8&&two==43
             ||forty==9&&two==43
             ||forty==10&&two==43)
                printf("%c",114);
            else if(two==49)
                printf("%c",108);
            else if (
               two==55
             ||forty==5&&two==52
             ||forty==5&&two==53
             ||forty==5&&two==54
             ||forty==6&&two==52
             ||forty==7&&two==52
             ||forty==8&&two==52
             ||forty==9&&two==52
             ||forty==10&&two==52
             ||forty==10&&two==53
             ||forty==10&&two==54)
                printf("%c",100);
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;

}