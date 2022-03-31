#include <iostream>
#include <chrono>

using namespace std;



struct ArryList
{
	int* bas;
	void olustur();
	void ekle(int, int);
	void guncelle(int, int);
	void sil(int);
	void yazdir();
	void bosalt();
	int sayac;
};

int main() {

	int iteration = 1000; //bu bizi dizilere vereceğimiz index

	ArryList* arryList = new ArryList();
	//arryList->olustur();

	for (int i = 0; i < iteration; i++)
	{
		//	arryList->ekle(i, i);
	}

	auto begin2 = std::chrono::high_resolution_clock::now();

	//arryList->ekle(10, 500);

	auto end2 = std::chrono::high_resolution_clock::now();

	auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2);//süreyi alıyoruz

	cout << "Baglantili liste ile gerceklemede araya ekleme suresi =>" << elapsed.count() << "mikro - saniye" << endl;


	return 0;
}
/* tanımlı olmayan fonksiyonları kullandıgında exe bulunamadı hatası veriyor
*
*/

