#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    char a[100];
    char b[100];
    int c;
    int bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0;
    
    while(t--) {
        scanf("%s %s %d", &a, &b, &c);
        if(strcmp(b,"bonecos")==0) bonecos += c;
        else if(strcmp(b,"arquitetos") == 0) arquitetos += c;
        else if(strcmp(b,"musicos") == 0) musicos += c;
        else desenhistas += c;
    }
    
    int total = (bonecos / 8) + (arquitetos / 4) + (musicos / 6) + (desenhistas / 12);
    printf("%d\n",total);
    return 0;
}
