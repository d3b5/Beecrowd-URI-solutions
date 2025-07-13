#include<stdio.h>
int main()
{
    int v[4];
    for(int i=0; i<4; i++) scanf("%d", &v[i]);
    for(int i=0; i<3; i++) 
    {
        for(int j=i+1; j<4; j++) 
        {
            if(v[i]>v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    if(v[0]+ v[1] > v[2]) printf("S\n");
    else if(v[0]+ v[2] > v[3])  printf("S\n");
    else if(v[1]+ v[2] > v[3])  printf("S\n");
    else  printf("N\n");
    return 0;
}