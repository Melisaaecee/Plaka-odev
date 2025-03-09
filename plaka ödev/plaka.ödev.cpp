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
		printf("dosya oluþturulmadý");
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
	




				
   

/*while( x==8 || x==61 || x==69 || x==28 || x==29 || x==52 || x==53 ){
		plaka(x);
	}
	printf("Hatali kod girdiniz\n");
	printf(" tekrardan plaka kodu giriniz:");
	scanf("%d",&x);
	plaka(x);
		char veri1[20]={"Artvin-8"};
	char veri2[20]={"Trabzon-61"};
    char veri3[20]={"Bayburt-69"};
	char veri4[20]={"Gumushane-29"};
	char veri5[20]={"Rize-53"};
	char veri6[20]={"Ordu-52"};
	char veri7[20]={"Giresun-28"};
		fprintf(dosya,veri1);
	fprintf(dosya,veri2);
	fprintf(dosya,veri3);
	fprintf(dosya,veri4);			
	fprintf(dosya,veri5);
	fprintf(dosya,veri6);
	fprintf(dosya,veri7);
	*/
	
	
/*	if( x==8 || x==61 || x==69 || x==28 || x==29 || x==52 || x==53 ){
	 plaka(x);
	}
	else { 	 while(x){
	printf("Hatali kod girdiniz\n");
	printf(" tekrardan plaka kodu giriniz:");
	scanf("%d",&x);
	plaka(x);
	 }
	}
	
	/*switch(x){
			case 8:printf("Artvin Dogu Karadeniz bolgesinde yer alir."); break;
			case 61:printf("Trabzon Dogu Karadeniz bolgesinde yer alir.");break;
			case 69:printf("Bayburt Dogu Karadeniz bolgesinde yer alir.");break;
			case 29:printf("Gumushane Dogu Karadeniz bolgesinde yer alir.");break;
			case 52:printf("Ordu Dogu Karadeniz bolgesinde yer alir.");break;
			case 53:printf("Rize Dogu Karadeniz bolgesinde yer alir.");break;
			case 28:printf("Giresun Dogu Karadeniz bolgesinde yer alir.");break;
										
		}*/
	
