#include<stdio.h>

void main()
{    

    printf("this is a morsecodetool\n");
    printf("covert normal text in to morsecode\n");
    printf("the code are put in the tmorsecode.txt file\n");
    FILE *p,*n;

    char code;

    p = fopen("morse.txt","w");
    {
        printf("Enter any text :");
        code = getchar();

        while(code!=EOF)
        {
            fputc(code,p);
            code=getchar();
        }
    }
    fclose(p);
        
    p = fopen("morse.txt","r");
    {
        n =fopen("tmorse.txt","w");
        {
            code = fgetc(p);

            while(code!=EOF)
            {
                if(code == 97 || code == 65)
                {
                fprintf(n,".-",code);
                printf(".-");
                }
                
                 if(code == 98 || code == 66)
                {
                fprintf(n,"-...",code);
                printf("-...");
                }

                 if(code == 99 || code == 67)
                {
                fprintf(n,"-.-.",code);
                printf("-.-.");
                }
                 if(code == 100 || code == 68)
                {
                fprintf(n,"-..",code);
                printf("-..");
                }
                 if(code == 101 || code == 69)
                {
                fprintf(n,".",code);
                printf(".");
                }
                 if(code == 102 || code == 70)
                {
                fprintf(n,"..-.",code);
                printf("..-.");
                }
                 if(code == 103 || code == 71)
                {
                fprintf(n,"--.",code);
                printf("--.");
                }
                 if(code == 104 || code == 72)
                {
                fprintf(n,"....",code);
                printf("....");
                }
                 if(code == 105 || code == 73)
                {
                fprintf(n,"..",code);
                printf("..");
                }
                 if(code == 106 || code == 74)
                {
                fprintf(n,".---",code);
                printf(".---");
                }
                 if(code == 107 || code == 75)
                {
                fprintf(n,"-.-",code);
                printf("-.-");
                }
                 if(code == 108 || code == 76)
                {
                fprintf(n,".-..",code);
                printf(".-..");
                }
                 if(code == 109 || code == 77)
                {
                fprintf(n,"--",code);
                printf("--");
                }
                 if(code == 110 || code == 78)
                {
                fprintf(n,"-.",code);
                printf("-.");
                }
                 if(code == 111 || code == 79)
                {
                fprintf(n,"---",code);
                printf("---");
                }
                 if(code == 112 || code == 80)
                {
                fprintf(n,".--.",code);
                printf(".--.");
                }
                 if(code == 113 || code == 81)
                {
                fprintf(n,"--.-",code);
                printf("--.-");
                }
                 if(code == 114 || code == 82)
                {
                fprintf(n,".-.",code);
                printf(".-.");
                }
                 if(code == 115 || code == 83)
                {
                fprintf(n,"...",code);
                printf("...");
                }
                 if(code == 116 || code == 84)
                {
                fprintf(n,"-",code);
                printf("-");
                }
                 if(code == 117 || code == 85)
                {
                fprintf(n,"..-",code);
                printf("..-");
                }
                 if(code == 118 || code == 86)
                {
                fprintf(n,"...-",code);
                printf("...-");
                }
                 if(code == 119 || code == 87)
                {
                fprintf(n,".--",code);
                printf(".--");
                }
                 if(code == 120 || code == 88)
                {
                fprintf(n,"-..-",code);
                printf("-..-");
                }
                 if(code == 121 || code == 89)
                {
                fprintf(n,"-.--",code);
                printf("-.--");
                }
                 if(code == 122 || code == 90)
                {
                fprintf(n,"--..",code);
                printf("--..");
                }
                
            fprintf(n," ");
            printf(" ");
                code =fgetc(p);
            }

        }

            
    }
    fclose(n);
    fclose(p);
}