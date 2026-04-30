#include <iostream>      // library buat input output (cin, cout)
using namespace std;     // biar gak perlu nulis std:: terus-terusan

// ini dia class-nya, namanya "contoh"
// class itu kayak cetakan/blueprint buat bikin objek
class contoh {
    
    private:
        int nilai;   // atribut "nilai" disembunyiin di private
                     // artinya cuma bisa diakses dari dalam class ini aja
                     // orang luar (main) ga bisa langsung sentuh variabel ini

    public:   // bagian yang bisa diakses dari luar class

        // ======= INI CONSTRUCTOR =======
        // constructor itu fungsi spesial yang otomatis dipanggil
        // pas kita bikin objek baru
        // namanya HARUS sama persis kayak nama class-nya ? "contoh"
        // dan ga punya return type (beda sama fungsi biasa)
        contoh (int n) {
            nilai = n;   // nilai yang dimasukin waktu bikin objek
                         // langsung disimpen ke atribut "nilai"
        }

        // ini getter buat ngambil nilai dari luar class
        // karena "nilai" private, kita butuh fungsi ini
        // buat ngintip isinya
        int getNum() {
            return nilai;   // kembalikan isi variabel nilai
        }

}; // jangan lupa titik koma setelah tutup kurung kurawal class!

int main() {

    // bikin objek bernama "obj" dari class "contoh"
    // langsung kasih nilai 10 lewat constructor
    // jadi constructor otomatis jalan dan nilai = 10
    contoh obj(10);

    // panggil getter getNum() buat nampilin nilai
    // karena "nilai" private, kita ga bisa obj.nilai
    // kita harus lewat obj.getNum()
    cout << "nilai yang diinput: " << obj.getNum() << endl;

    return 0;
}
