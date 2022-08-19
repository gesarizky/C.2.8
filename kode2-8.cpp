/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int A;	// Variabel A adalah variabel global 
           // karena dideklarasikan di luar fungsi

// Membuat fungsi test()
void test() {
  // Mengisikan (assign) nilai ke dalam variabel A
  A = 20;	 
  cout<<"Nilai A di dalam fungsi test(): "<<A<<endl;
}

// Membuat fungsi main() atau fungsi utama
int main() {
  // Mengisikan (assign) nilai ke dalam variabel A
  A = 10;	 
  cout<<"Nilai A di dalam fungsi main(): "<<A<<endl;

  // Memanggil fungsi test()
  test();

  return 0;
}
