#include <iostream>
using namespace std;
int main()
{
  // Değişkenlerin tanımlanması
  int yil = 0, sa_nu = 500000, ga_nu = 900000;
  while (sa_nu <= ga_nu) 
  {
    // Nüfusların yeniden hesaplanması
   sa_nu = (int)(sa_nu + (sa_nu * 2.5 / 100));
   ga_nu = (int)(ga_nu + (ga_nu * 1.4 / 100));
   
   // “yil” sayacının artırılması
   yil++; 
  }

  // Sonuçların ekrana yazdırılması
  cout << yil << " yil sonra Sanliurfa nufusu " << sa_nu << " olacak "; 
}
