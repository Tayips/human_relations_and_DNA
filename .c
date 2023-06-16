#include <stdio.h>
#include <string.h>

int main() {
    char dna1[] = "ATCGGCTA";   // İlk DNA dizisi
    char dna2[] = "CTAGGCTC";   // İkinci DNA dizisi
    
    int length1 = strlen(dna1);  // İlk DNA dizisinin uzunluğu
    int length2 = strlen(dna2);  // İkinci DNA dizisinin uzunluğu
    
    int similarity = 0;  // Benzerlik sayacı
    
    // DNA dizilerini karşılaştır
    for (int i = 0; i < length1; i++) {
        if (dna1[i] == dna2[i]) {
            similarity++;
        }
    }
    
    // Benzerlik yüzdesini hesapla
    float similarityPercentage = (float)similarity / length1 * 100;
    
    // Sonucu ekrana yazdır
    printf("DNA benzerlik oranı: %.2f%%\n", similarityPercentage);
    
    return 0;
}
