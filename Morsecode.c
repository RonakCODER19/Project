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
                if(code == 'a' || code == 'A')
                {
                fprintf(n,".-",code);
                }
                
                 if(code == 'b' || code == 'B')
                {
                fprintf(n,"-...",code);
                }

                 if(code == 'c' || code == 'C')
                {
                fprintf(n,"-.-.",code);
                }
                 if(code == 'd' || code == 'D')
                {
                fprintf(n,"-..",code);
                }
                 if(code == 'e' || code == 'E')
                {
                fprintf(n,".",code);
                }
                 if(code == 'f' || code == 'F')
                {
                fprintf(n,"..-.",code);
                }
                 if(code == 'g' || code == 'G')
                {
                fprintf(n,"--.",code);
                }
                 if(code == 'h' || code == 'H')
                {
                fprintf(n,"....",code);
                }
                 if(code == 'i' || code == 'I')
                {
                fprintf(n,"..",code);
                }
                 if(code == 'j' || code == 'J')
                {
                fprintf(n,".---",code);
                }
                 if(code == 'k' || code == 'K')
                {
                fprintf(n,"-.-",code);
                }
                 if(code == 'l' || code == 'L')
                {
                fprintf(n,".-..",code);
                }
                 if(code == 'm' || code == 'M')
                {
                fprintf(n,"--",code);
                }
                 if(code == 'n' || code == 'N')
                {
                fprintf(n,"-.",code);
                }
                 if(code == 'o' || code == 'O')
                {
                fprintf(n,"---",code);
                }
                 if(code == 'p' || code == 'P')
                {
                fprintf(n,".--.",code);
                }
                 if(code == 'q' || code == 'Q')
                {
                fprintf(n,"--.-",code);
                }
                 if(code == 'r' || code == 'R')
                {
                fprintf(n,".-.",code);
                }
                 if(code == 's' || code == 'S')
                {
                fprintf(n,"...",code);
                }
                 if(code == 't' || code == 'T')
                {
                fprintf(n,"-",code);
                }
                 if(code == 'u' || code == 'U')
                {
                fprintf(n,"..-",code);
                }
                 if(code == 'v' || code == 'V')
                {
                fprintf(n,"...-",code);
                }
                 if(code == 'w' || code == 'W')
                {
                fprintf(n,".--",code);
                }
                 if(code == 'x' || code == 'X')
                {
                fprintf(n,"-..-",code);
                }
                 if(code == 'y' || code == 'Y')
                {
                fprintf(n,"-.--",code);
                }
                 if(code == 'z' || code == 'Z')
                {
                fprintf(n,"--..",code);
                }
                
            fprintf(n," ");
                code =fgetc(p);
            }

        }

            
    }
    fclose(n);
    fclose(p);
}