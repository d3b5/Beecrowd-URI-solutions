#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char a[1001];
    char b[1001];
    scanf("%d", &t);//test case koto bar

    for(int j=1; j<=t; j++)
    {
        scanf("%s %s", &a, &b);
        int a_size = strlen(a);
        int b_size = strlen(b);
        if(a_size < b_size)
        {
            printf("nao encaixa\n");
            continue; // jodi dhor a er size chot hoy taile auto amra porer test case e chole jabo tai break dei nai continue disi. break dile full loop e vangi jaito
        }
        int flag = 1; //1 mane true, 0 mane false
        //suru te ami dhore nisi je b string mane choto string er sob gula array element milbe a/boro string er last er soman songkok element er sathe
        //jmn abc123 and 123 ekane boro string er last er 3 ta, b er soman.  
        for(int i=0; i<b_size; i++)
        {
            if(a[a_size-1-i] != b[b_size-1-i])
            {
                flag = 0;
                break; //jei muhurte deksi je ekta character match kore nai oi momentei ami jansi je match hobe na, tai loop break;
            }
        }
        if(flag == 1)printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}