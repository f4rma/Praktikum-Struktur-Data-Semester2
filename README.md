# [![UNP](https://unp.ac.id/nfs-assets/all/images/logo_unp_white.png)](https://unp.ac.id/)
# Universitas Negeri Padang (UNP)

# Biodata Diri
<table>
<tr>
<td>
<b><pre>
<h3>
Nama                : Raditya Putra Farma
NIM                 : 23343050
Program Studi       : Informatika
Mata Kuliah         : Praktikum Struktur Data
Kode Kelas          : INF1.62.2014
Dosen Pengampu      : Randi Proska Sandra, M.Sc
</h3>
</pre></b>
</td>
</tr>
</table>

<h2 id="navigator">Pemahaman Materi</h2>
<table>
<tr>
<td>
<pre>
<list>
  <li><a href="#js1">Job Sheet 1 - Pengenalan Struktur Data</a></li>
  <li><a href="#js2">Job Sheet 2 - Array, Pointer, Structure</a></li>
  <li><a href="#js3">Job Sheet 3 - Single Linked List</a></li>
  <li><a href="#js4">Job Sheet 4 - Doubly Linked List</a></li>
  <li><a href="#js5">Job Sheet 5 - Double and Circular Linked List</a></li>
  <li><a href="#js6">Job Sheet 6 - Stack</a></li>
  <li><a href="#js7">Job Sheet 7 - Queue</a></li>
  <li><a href="#js8">Job Sheet 8 - Bubble and Insertion Sort</a></li>
  <li><a href="#js9">Job Sheet 9 - Selection and Merge Sort</a></li>
  <li><a href="#js10">Job Sheet 10 - Shell and Quick Sort</a></li>
  <li><a href="#js11">Job Sheet 11 - Linear and Binary Search</a></li>
  <li><a href="#js12">Job Sheet 12 - Tree</a></li>
  <li><a href="#js13">Job Sheet 13 - Graphs</a></li>
</list>
</pre>
</td>
</tr>
</table>

<h1>📋Laporan Praktikum Algoritma Pemrograman📋</h1>

<h2 id="js1">Job Sheet 1 - Pengenalan Struktur Data</h2>

<p> ✦ <b>Struktur Data</b> : cara penyimpanan, penyusunan dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien. Struktur data biasa dipakai untuk mengelompokan beberapa  informasi yang terkait menjadi sebuah kesatuan.</p>
<p>Struktur Data meliputi terbagi dua yaitu;</p>
<p> 1). Struktur data sederhana seperti Array dan Record, dan 
<p> 2). Struktur data majemuk, yang terdiri dari;
<ul>
  <li> Linier, berupa Stack, Queue, sertaList dan Multilist.</li>
  <li> Non Linier, berupa Pohon Biner dan Graph.</li>
</ul>

<p> ✦ <b>Tipe Data</b>> : jenis atau macam data di dalam suatu variabel dalam bahasa pemrograman. Jenis jenis tipe data disimpan dalam bentuk kode angka baik berupa kode ASCII dan kode lainnya.</p>

<p> ✦ <b>Objek Data</b> : mengacu pada kumpulan elemen, penyimpanan data yang unik ke dalam satu jenis objek yang utuh.</p>

<p> Dalam teknik pemrograman, struktur data berarti tata letak data yang berisi kolom-kolom data. Lebar kolom untuk data dapat berubah dan bervariasi. Ada kolom yang lebarnya berubah secara dinamis sesuai masukan dari pengguna, dan juga ada kolom yang lebarnya tetap. 
<hr><hr>

<h2 id="js2">Job Sheet 2 - Array, Pointer, Structure</h2>

<p> ✦ <b>Array</b> : suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses langsung (acak) .</p>

<p> ✦ <b>Pointer</b> : sebuah variabel yang mempunyai isi berupa sebuah alamat atau lokasi memori. Dideklarasikan menggunakan simbol asterisk (*) didepan variabel yang dideklarasikan pada tipe data tertentu. Suatu pointer tidak berisi nilai data seperti halnya variabel biasa. </p>
<p>Tiga Perintah akses pointer :</p>
<ul>
<li>Cukup gunakan nama variabel untuk mendapatkan isi atau nilai dari variabel pointer .</li>
<li>Tambahkan simbol AND (&) didepan variabel untuk mendapatkan alamat memori pointer (address of).</li>
<li>Tambahkan simbol asterisk (*) didepan variabel untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer (value pointed by)</li>
</ul>

<p> ✦ <b>Structure (Struct)</b> : Kumpulan variable (berisi variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah struct maka perlu untuk menentukan tipe-tipe data apa saja di dalamnya.</p>
<p>Terdapat dua tipe operator yang digunakan untuk mengakses sebuah struct, yaitu:</p>
<ul>
<li>'.' - Member operator.</li>
<li>'->' - Operator yang digunakan untuk pointer.</li>
</ul>

<p> ✦ <b>ADT (Abstract Data Type) atau Tipe Data Bentukan</b> : Koleksi data dan operasi yang dapat digunakan untuk memanipulasi data, tipe data tertentu yang didefinisikan oleh pemrogram untuk kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan.</p>

<p>Dalam  bahasa C terdapat tipe data numerik dan karakter (seperti int, float, char dan lain-lain). Selain itu juga terdapat tipe data enumerasi dan structure.</p>
<hr><hr>

<h2 id="js3">Job Sheet 3 - Single Linked List</h2>

<p> ✦ <b>Simpul/Nodes</b> : berisi alamat dan kumpulan data. Dalam sebuah simpul/node keduanya dibungkus menjadi sebuah objek berupa struct </p>

<p> ✦ <b>Alokasi Memory</b> : Memberi fasilitas untuk membuat ukuran buffer dan array secara dinamik, yang berarti ruang dalam memori akan dialokasikan ketika program dieksekusi (run time), sehingga memungkinkan user untuk membuat tipe data dan struktur dengan ukuran dan panjang berapapun yang disesuaikan dengan kebutuhan di dalam program. </p>

<p> ✦ <b>Perintah sizeof()</b> digunakan untuk;</p>
<ul>
  <li>mendapatkan ukuran dari berbagai tipe data, variabel ataupun struktur.</li>
  <li>Return value : ukuran dari obyek yang bersangkutan dalam byte.</li>
  <li>Parameter dari sizeof() : sebuah obyek atau sebuah tipe data </li>
</ul>

<p> ✦ <b>Perintah malloc()</b> digunakan untuk mengembalikan penunjuk kosong ke ruang yang dialokasikan, atau NULL jika memori yang tersedia tidak mencukupi.</p>

<p> ✦ <b>Linked List</b> : merupakan sebuah data yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa menyimpan data yang mana isinya bisa char, int, string atau tipe data lainnya.</p>
<p> ✦ <b>Single Linked list</b> : merupakan suatu linked list yang hanya memiliki satu variabel pointer saja. Dimana pointer tersebut menunjuk ke node selanjutnya.</p>
<hr><hr>

<h2 id="js4">Job Sheet 4 - Doubly Linked List</h2>

<p> ✦ <b>Doubly Link List(DLL)</b> : berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal. Memiliki head dan tail. Memiliki dua arah data yakni next dan previous </p>
<p> Sebuah linked list dikatakan kosong apabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama.</p>
<p> ✦ Kelebihan dibanding single link list, yakni</p>
<ul>
  <li>Double Link List dapat berjalan dalam 2 arah ke depan dan belakang,</li>
  <li>Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus,</li>
  <li>Dapat melakukan proses insert() simpul lebih efisien.</li>
</ul>
<p> ✦ Kelemahan Doubly Link List, yakni</p>
<ul>
  <li>Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer,</li>
  <li>Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.</li>
</ul>
<hr><hr>

<h2 id="js5">Job Sheet 5 - Double and Circular Linked List</h2>

<p> ✦ <b>Double Linked List</b> : Elemen-elemen dihubungkan dengan dua pointer dalam satu node, menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev) atau (back).</p>

<p> setiap node memiliki 3 field, yaitu 1 field pointer yang menunjuk pointer berikutnya (next), 1 field menunjuk pointer sebelumnya (prev), serta sebuah field yang berisi data untuk node tersebut</p>
<p>Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL, sedangkan untuk menunjukkan tail dari double linked list, maka pointer next dari elemen terakhir yang menunjuk NULL.</p>

<p> ✦ <b>Circular Linked List</b> : merupakan linked list yang tidak memiliki tail.  Pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL. Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir. </p>
<hr><hr>

<h2 id="js6">Job Sheet 6 - Stack</h2>

<p> ✦ <b>Stack</b> : sebuah kumpulan data dimana data tersebut diletakkan di atas data yang lain. Menggunakan aturan LIFO (Last In First Out) yang berarti elemen 
terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil.</p>

<p> ♢ <b>Push</b> digunakan untuk menambahkan elemen atau data baru dalam tumpukan. Elemen baru tersebut pasti akan menjadi elemen yang paling atas dalam tumpukan setiap kali ditambahkan.</p>

<p> ♢ <b>Pop</b> digunakan untuk menghapus elemen yang berada pada posisi paling atas dari stack.</p>

<p> ♢ <b>Peek</b> digunakan untuk mengecek elemen atau data paling atas tanpa menghapusnya dari stack.</p>

<p> ♢ <b>isFull</b> digunakan untuk memeriksa apakah kondisi stack sudah penuh. Dengan cara menambah satu (increment) nilai TOP of STACK setiap ada penambahan elemen stack 
selama stack masih belum penuh, kemudian Isikan nilai baru ke stack berdasarkan indeks TOP of STACK setelah ditambah satu (increment). </p>

<p> ♢ <b>isEmpty</b> digunakan untuk memeriksa apakah stack masih dalam kondisi kosong. Dengan cara memeriksa TOP of STACK. Jika TOP masih = -1 maka berarti stack masih kosong. </p>

<p> ♢ <b>Clear</b> digunakan untuk mengosongkan stack.</p>
<hr><hr>

<h2 id="js7">Job Sheet 7 - Queue</h2>

<p> ✦ <b>Queue (Antrian)</b> : suatu bentuk khusus dari List Linier dengan operasi penyisipan (insertion) hanya diperbolehkan pada salah satu sisi, yang disebut sisi belakang (REAR), dan operasi penghapusan (deletion) hanya diperbolehkan pada sisi yang lainnya.</p>
<p>Prinsip dasar dari struktur data ini adalah “First In, First Out” (FIFO) yang berarti elemen data yang pertama dimasukkan ke dalam antrean akan menjadi yang pertama pula untuk dikeluarkan.</p>

<p>Fungsi utama Queue ialah mengatur dan mengelola antrean tugas atau operasi secara efisien.</p>
<p>Dalam sistem komputasi, ia digunakan untuk menangani tugas-tugas seperti penjadwalan proses, antrean pesan, dan manajemen sumber daya.</p>
<p>Urutan pertama (data yang akan dikeluarkan) disebut Front atau Head. Sebaliknya, data pada urutan terakhir (data yang baru saja ditambahkan) disebut Back, Rear, atau Tail.</p>
<p> ♢ <b>Enqueue</b> merupakan proses untuk menambahkan data pada antrean.</p>
<p> ♢ <b>Dequeue</b> merupakan proses untuk menghapus data dari antrean.</p>

<h2 id="js8">Job Sheet 8 - Bubble and Insertion Sort</h2>

<p> ✦ <b>Sorting (Pengurutan)</b> : merupakan proses pengurutan data yang sebelumnya disusun secara acak sehingga tersusun secara teratur menurut aturan tertentu.</p>
<p>Teknik Sorting yang umum digunakan : buble sort, insertion sort, selection sort, quicksort, mergesort, heapsort, dan binary sort</p>

<p> ♢ <b>Buble Sort</b> : metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut. Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.</p>
<p> ♢ <b>Insertion Sort</b> : merupakan sebuah teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Algoritma insertion sort seperti proses pengurutan kartu yang berada di tangan kita .</p>
<hr><hr>

<h2 id="js9">Job Sheet 9 - Selection and Merge Sort</h2>

<p> ✦ <b>Selection Sort </b> : merupakan sebuah algoritma yang digunakan untuk mencari dna memilih element/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data. </p>
<p>Cara kerja Slecetion Sort: </p>
<ol type="1">
  <li>Tentukan elemen pertama dari urutan menjadi elemen terkecil masukkan sebagai elemen “minimum”.</li>
  <li>Bandingkan mnimum dengan urutan elemen kedua. Jika elemen kedua lebih kcil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus samapai dengan elemen yang terakhir.  </li>
  <li>Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data </li>
  <li>pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari list. langkah 1-3 dilakukan berulang kali samapi keseluruhan elemen digantikan pada posisi yang 
terurut. </li>
</ol>

<p> ✦ <b>Merge Sort </b> : merupakan pengurutan gabungan terus-menerus memotong daftar menjadi beberapa subdaftar hingga masing-masing hanya memiliki satu item, lalu menggabungkan subdaftar tersebut ke dalam daftar yang diurutkan. </p>
<p>Divide-and-conquer memecahkan sub-masalah secara rekursif; setiap submasalah harus lebih kecil dari masalah aslinya, dan masing-masing harus mempunyai kasus dasar. Algoritme bagi-dan-taklukkan memiliki tiga bagian:: </p>
<ol type="1">
  <li>Bagilah masalah menjadi beberapa bagian kecil dari masalah yang sama</li>
  <li>Taklukkan submasalah dengan menyelesaikannya secara rekursif. Selesaikan submasalah sebagai kasus dasar jika submasalah tersebut cukup kecil.</li>
  <li>Untuk menemukan solusi dari masalah awal, gabungkan solusi dari submasalah.</li>
</ol>
<hr><hr>

<h2 id="js10">Job Sheet 10 - Shell and Quick Sort</h2>

<p> ✦ <b>Shell Sort</b> : merupakan sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. Pada prinsipnya sama dengan Insertion sort pada pokok bahasan sebelumnya.</p>
<p>Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan 
 dilakukan.</p>
<p>Cara kerja Shell Sort: </p>
<ol type="1">
  <li>Urutkan array yang ada  </li>
  <li>Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan rumus N/2 = 4, akan dibandingkan dan ditukar jika belum sesuai urutan. </li>
  <li>Pada pengulangan kedua rumus formula interval yang digunakan N/4 = 8/4 = 2, Elemen ke 2 dan ke 4 dibandingkan sesuai rumus interval = 2, elemen ke 0 dan 2 juga dibandingkan. </li>
  <li>Proses yang sama berlaku untuk elemen yang tersisa. </li>
  <li>Pada akhirnya samapai pada fase akhir di saat interval N/8  = 8/8 = 1, elemen dengan interval 1 diurutkan </li>
</ol>

<p> ✦ <b>Quick Sort</b> : Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot.</p>
<p>Proses utama dalam quickSort adalah partisi() . Target dari partisi adalah untuk menempatkan pivot (elemen apa pun dapat dipilih menjadi pivot) pada posisi yang benar dalam susunan yang diurutkan dan meletakkan semua elemen yang lebih kecil di sebelah kiri pivot, dan semua elemen yang lebih besar di sebelah kanan pivot .</p>
<p>Partisi dilakukan secara rekursif pada setiap sisi pivot setelah pivot ditempatkan pada posisi yang benar dan akhirnya mengurutkan array.</p>



