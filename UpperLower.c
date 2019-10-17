# include <stdio.h>
int main()
{

    char str[100];
    char output[100];
    int lower[26];
    int upper[26];
    char *ptr;
    char *out;
    ptr=str;
    out=output;
    scanf("%s", str);
    int i;
    for (i = 0; i < 26; i++)
    {
        lower[i] = 'a' + i;
    }
    int j=0;
    for ( j = 0; j < 26; j++)
    {
        upper[j] = 'A' + j;
    }

    int index=0;
    int counter=0;
    while(*ptr!='\0')
    {
        counter++;
        int val=*ptr+0;
        if(val>90)
        {
            int k;
            for(k=0; k<26; k++)
            {
                if(lower[k]==val)
                {
                    char o=upper[k];

                    output[index]=o;
                    index++;
                    break;
                }
            }
        }
        else
        {
            int l;
            for(l=0; l<26; l++)
            {
                if(upper[l]==val)
                {
                    char o=lower[l];
                    output[index]=o;
                    index++;
                    break;
                }
            }

        }
        ptr++;
    }
    while(*out!='\0' && counter!=0)
    {
        printf("%c",*out);
        out++;
        counter--;
    }
    printf("\n");
    return 0;
}
