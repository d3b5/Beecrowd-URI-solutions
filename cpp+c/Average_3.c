#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,avg,retake;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    avg = ((n1*2)+(n2*3)+(n3*4)+n4)/10.0;
    
    printf("Media: %.1lf\n",avg);
    if(avg >=7.0) printf("Aluno aprovado.\n");
    else if(avg<5) printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &retake);
        printf("Nota do exame: %.1lf\n",retake);        
        avg = (avg+retake)/2;

        if(avg >=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",avg);
    }
    return 0;
}