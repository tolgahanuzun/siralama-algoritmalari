#ifndef _İNSERT_
#define _İNSERT_
/* Büyük projelerde include ettiğiniz dosyalar birbirleriyle çakışaması için gerekli bir paremetredir.
Detaylar için internette araştırma yapınız.
*/

//Sokuşturma algoritması olarak tanımlanır.

//Neredeyse sıralı bir veri kümeniz varsa çok çok kısa sürede işlemi gerçekleştirecektir.


void insertion_sort (int dizi[], int elemanSayisi) {
    int i, j, temp;
//değişkenleri oluşturduk.
    for (i = 1; i < elemanSayisi; i++) {
//dizinin 2. elemanında itibaren başlıyoruz. Dikkat!
        temp = dizi[i];
//2. elen değeri temp'de saklanır.
        for (j = i; j > 0 && temp < dizi[j - 1]; j--) {
//dizi taranır.            
            dizi[j] = dizi[j - 1];
        }
        dizi[j] = temp;
    }
}

#endif