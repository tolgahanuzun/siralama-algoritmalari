#ifndef _SORTİNG_
#define _SORTİNG_

void bubble_sort(int dizi[], int elemanSayisi)
{
    int temp;
    int i, j;

    for (i=1; i<elemanSayisi; i++)      
    {
        for (j=0; j<elemanSayisi-i; j++)   
        {
            if(dizi[j] > dizi[j+1])
            {
                temp = dizi [j];
                dizi [j] = dizi [j+1];
                dizi [j+1] = temp;                     
             }
        }
    }
}

void selection_sort(int dizi[], int elemanSayisi)
{
   int  i, j;
   int temp, min;
 
   for (i = 0; i < elemanSayisi - 1; i++) {
      min = i;
      for (j = i + 1; j < elemanSayisi; j++)
         if (dizi[min] > dizi[j])
            min = j;
      temp = dizi[min];
      dizi[min] = dizi[i];
      dizi[i] = temp;
   }
}

void insertion_sort (int dizi[], int elemanSayisi) {
    int i, j, temp;
    
    for (i = 1; i < elemanSayisi; i++) {
        temp = dizi[i];

        for (j = i; j > 0 && temp < dizi[j - 1]; j--) {    
            dizi[j] = dizi[j - 1];
        }
        dizi[j] = temp;
    }
}


#endif