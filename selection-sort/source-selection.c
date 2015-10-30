#ifndef _SELECT_
#define _SELECT_
/* Büyük projelerde include ettiğiniz dosyalar birbirleriyle çakışaması için gerekli bir paremetredir.
Detaylar için internette araştırma yapınız.
*/


/* Algoritmanın amacı; en küçükten başlar ve 1. elemanın yerini belirler. Yani 1. sıraya en küçük sayı geleceğini düşünelim.
Tüm dizi taranır ve en küçük sayı bulunarak buraya konulur. İterasyon devam eder.

Bu algoritma daha çok belirli bir hiyerarşiye göre sıralanmış sayılarda hızlı çalışmaktadır. Karmaşık sayı kümelerinde yavaş çalışacaktır.
*/
void selection_sort(int dizi[], int elemanSayisi)
{
   int   i, j, temp, min;
// Gerekli değişkenleri tanımladık.
   for (i = 0; i < elemanSayisi - 1; i++) {
// Eleman sayısı kadar döneceğimizi karar verdil. ( 10 elemanlı dizi için 10 kez çalışan for döngüsü)     
      min = i;
//Bulunduğu pozisyonu i'de saklar      
      for (j = i + 1; j < elemanSayisi; j++)
//Bulunduğu pozisyondan sonraki ihtimalleri tarama işlemi için kullanılır.         
         if (dizi[min] > dizi[j])
//Bulunduğu pozisyondaki sayı ile bir sonraki pozisyondaki sayıyı karşılaştırır.             
            min = j;
//Eğer sayı küçükse aşağıdaki iterasyon swap işlemi yapacaktır.
      temp = dizi[min];
      dizi[min] = dizi[i];
      dizi[i] = temp;
   }
}


#endif