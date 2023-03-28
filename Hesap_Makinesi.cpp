#include <iostream>

using namespace std;

int main()
{
   int sayi1, sayi2;
   cout << "HESAP MAKINESI" << endl;
   cout << "iki tane deger giriniz" << endl;
   cin >> sayi1 >> sayi2;

   int toplam = sayi1 + sayi2;
   int fark = sayi1 - sayi2;
   int carpim = sayi1 * sayi2;
   int bolum = sayi1 / sayi2;

   cout << sayi1 << "+" << sayi2 << "=" << toplam << endl;
   cout << sayi1 << "-" << sayi2 << "=" << fark << endl;
   cout << sayi1 << "x" << sayi2 << "=" << carpim << endl;
   cout << sayi1 << "/" << sayi2 << "=" << bolum << endl;
    return 0;

}
