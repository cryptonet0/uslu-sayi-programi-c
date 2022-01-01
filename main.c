#include <stdio.h>
#include <math.h> 
#include <locale.h>

void usalma(int sayi1, int sayi2)
{
	setlocale(LC_ALL, "Turkish");
    int sonuc;
    sonuc = pow(sayi1,sayi2);
    
    printf("Isleminin sonucu = %d",sonuc);
    
    printf("\n");
    
    printf("Çikmak için bir tusa basin...");
      getch();
      exit(1);
    
}
 
main()
{
    int sayi1,sayi2;
    
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    usalma(sayi1,sayi2); 
    
}

