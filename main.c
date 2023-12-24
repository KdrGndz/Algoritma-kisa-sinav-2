#include <stdio.h>
#include <stdlib.h>

// Bu struct a��k artt�rma �gesini temsil ediyor.
typedef struct {
    double mevcut_teklif;// Double t�r�nde mevcut teklif de�i�kenini tan�mlad�k.
	char oge_adi[50];// Char t�r�nde �ge ad� de�i�kenini tan�mlad�k.
}acik_artirma_ogesi;

// Burada a��k art�rma ��elerini depolayan diziyi tan�ml�yoruz. Diziyi 10 m��teri i�in ayarlad�k.
acik_artirma_ogesi acik_artirma_ogeleri[10]; 

// Bu fonksiyon a��k artt�rmay� ba�lat�yor.
void baslangic() {
	int i;// For d�ng�s� i�in i de�i�kenini tan�mlad�k.
    for ( i = 0; i < 10; i++) {
        sprintf(acik_artirma_ogeleri[i].oge_adi, "%d. Musteri", i + 1);// Buradaki sprintf komutu yan yana g�z�kmesini sa�l�yor.
        acik_artirma_ogeleri[i].mevcut_teklif = 0.0;
    }
}

// Bu fonksiyon a��k artt�rmadaki teklifi de�erlendiriyor.
void teklif_ver(int oge_dizini, double teklif_tutari) { // Burada teklif ver fonksiyonu i�erisinde, integer t�r�nde �ge dizini ve double t�r�nde teklif tutar�n� tan�ml�yoruz.
    if (oge_dizini >= 0 && oge_dizini < 10) { // Burada �ge dizini i�in ko�ul sa�l�yoruz.
        if (teklif_tutari > acik_artirma_ogeleri[oge_dizini].mevcut_teklif) { 
            acik_artirma_ogeleri[oge_dizini].mevcut_teklif = teklif_tutari;
            printf("Teklifiniz kabul edildi. Yeni teklif: %.1f $\n", teklif_tutari);
        } else {
            printf("Teklif, mevcut tekliften d���k. Yeni teklif veriniz.\n");
        }
    } else {
        printf("Ge�ersiz oge indeksi. Teklif verilemedi.\n");
    }
}

// Bu fonksiyon a��k artt�rmay� sonland�r�yor.
void son() {
	int i;// For d�ng�s� i�in i de�i�kenini tan�mlad�k.
    printf("Acik artirma sona erdi. Iste kazanan teklifler:\n\n");
    for ( i = 0; i < 10; i++) {// For d�ng�s� i�in i de�i�kenini tan�mlad�k.
        printf("%s: %.1f $ verdi\n", acik_artirma_ogeleri[i].oge_adi, acik_artirma_ogeleri[i].mevcut_teklif);
    }
}

int main() {
	
	int para=50000;
	int kisi=10;
	
	printf("******ACIK ARTTIRMA UYGULAMASI******\n\n");
	printf("Baslangic teklifi 1000 $\n\n");
	
    baslangic();// Burada ba�lang�� adl� fonksiyonu yazd�r�yoruz.

    // Bizim vermi� oldu�umuz teklif de�erleri
    teklif_ver(0 , 1500.0);
    teklif_ver(1 , 1800.0);
    teklif_ver(2 , 3000.0);
    teklif_ver(3 , 5000.0);
    teklif_ver(4 , 7500.0);
    teklif_ver(5 , 10000.0);
    teklif_ver(6 , 15000.0);
    teklif_ver(7 , 24000.0);
    teklif_ver(8 , 30000.0);
    teklif_ver(9 , 50000.0);
    
    printf("\n");
    
	son();// Burada son adl� fonksiyonu yazd�r�yoruz.
	
	printf("\n");
    
printf("TEBRIKLER!! Acik arttirmayi %d. Musteri kazandi. Vermis oldugu fiyat: %d $",kisi,para);

    return 0;
}

