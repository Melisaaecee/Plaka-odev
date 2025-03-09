#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (){
	int x,kod;
	char veri[100];
	int bulunan=0;
	char sehir[50];
    

	FILE *dosya=fopen("plakakodu.txt","r");
	if(dosya == NULL){
		printf("dosya oluşturulmadı");
	}
	else {
		printf("dosya olusturuldu\n");
	}
	

 	printf("plaka kodu giriniz:");
	scanf("%d",&x);

	
	 while (fgets(veri, sizeof(veri), dosya) != NULL) {
	
        sscanf(veri, "%d %s",&kod,sehir);
            if (x == kod) {
                printf("%s Dogu Karadeniz Bolgesindedir.\n", sehir);
                bulunan = 1;
                break;
            }
           
        }
         if (!bulunan) {
        printf("Hatali kod girdiniz .\n");
    }
       
     
	
        fclose(dosya);

	return 0;
	
    }
	




				
   

