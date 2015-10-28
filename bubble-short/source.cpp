#ifndef _BUBBLE_
#define _BUBBLE_
/* Büyük projelerde include ettiğiniz dosyalar birbirleriyle çakışaması için gerekli bir paremetredir.
Detaylar için internette araştırma yapınız.
*/

void bubbleSort(int dizi[], int elemanSayisi)
//Dışarıdan bir dizi ve dizinin eleman sayısını alıyoruz.
{
//Geçici olarak verileri tutmak için değişken oluşturuyoruz.
     int temp;
     int i, j;
//For'ların sayaç değişkenlerini oluşturuyoruz.

     for (i=1; i<elemanSayisi; i++)
//Bu for,kaç defa baştan sona diziyi dolaşacağına karar veriyor.        
     {
         for (j=0; j<elemanSayisi-i; j++)
//Bu ise her seferinde tüm dizi üzerinde gezinti yaparak 2 eleman arasında swap yapıyor.            
         {
             if(dizi[j] > dizi[j+1])
             {
//Swap yapma işlemi
                        temp = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = temp;
//Swap yapma işlemi                        
             }
         }
     }
}

#endif