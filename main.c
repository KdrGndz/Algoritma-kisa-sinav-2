#include <stdio.h>
#include <stdlib.h>

// Bu struct açýk arttýrma ögesini temsil ediyor.
typedef struct {
    double mevcut_teklif;// Double türünde mevcut teklif deðiþkenini tanýmladýk.
	char oge_adi[50];// Char türünde öge adý deðiþkenini tanýmladýk.
}acik_artirma_ogesi;

// Burada açýk artýrma öðelerini depolayan diziyi tanýmlýyoruz. Diziyi 10 müþteri için ayarladýk.
acik_artirma_ogesi acik_artirma_ogeleri[10]; 

// Bu fonksiyon açýk arttýrmayý baþlatýyor.
void baslangic() {
	int i;// For döngüsü için i deðiþkenini tanýmladýk.
    for ( i = 0; i < 10; i++) {
        sprintf(acik_artirma_ogeleri[i].oge_adi, "%d. Musteri", i + 1);// Buradaki sprintf komutu yan yana gözükmesini saðlýyor.
        acik_artirma_ogeleri[i].mevcut_teklif = 0.0;
    }
}

// Bu fonksiyon açýk arttýrmadaki teklifi deðerlendiriyor.
void teklif_ver(int oge_dizini, double teklif_tutari) { // Burada teklif ver fonksiyonu içerisinde, integer türünde öge dizini ve double türünde teklif tutarýný tanýmlýyoruz.
    if (oge_dizini >= 0 && oge_dizini < 10) { // Burada öge dizini için koþul saðlýyoruz.
        if (teklif_tutari > acik_artirma_ogeleri[oge_dizini].mevcut_teklif) { 
            acik_artirma_ogeleri[oge_dizini].mevcut_teklif = teklif_tutari;
            printf("Teklifiniz kabul edildi. Yeni teklif: %.1f $\n", teklif_tutari);
        } else {
            printf("Teklif, mevcut tekliften düþük. Yeni teklif veriniz.\n");
        }
    } else {
        printf("Geçersiz oge indeksi. Teklif verilemedi.\n");
    }
}

// Bu fonksiyon açýk arttýrmayý sonlandýrýyor.
void son() {
	int i;// For döngüsü için i deðiþkenini tanýmladýk.
    printf("Acik artirma sona erdi. Iste kazanan teklifler:\n\n");
    for ( i = 0; i < 10; i++) {// For döngüsü için i deðiþkenini tanýmladýk.
        printf("%s: %.1f $ verdi\n", acik_artirma_ogeleri[i].oge_adi, acik_artirma_ogeleri[i].mevcut_teklif);
    }
}

int main() {
	
	int para=50000;
	int kisi=10;
	
	printf("******ACIK ARTTIRMA UYGULAMASI******\n\n");
	printf("Baslangic teklifi 1000 $\n\n");
	
    baslangic();// Burada baþlangýç adlý fonksiyonu yazdýrýyoruz.

    // Bizim vermiþ olduðumuz teklif deðerleri
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
    
	son();// Burada son adlý fonksiyonu yazdýrýyoruz.
	
	printf("\n");
    
printf("TEBRIKLER!! Acik arttirmayi %d. Musteri kazandi. Vermis oldugu fiyat: %d $",kisi,para);

    return 0;
}

