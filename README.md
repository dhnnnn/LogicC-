# 📐 Aplikasi Perhitungan Sederhana (C++)

Program ini merupakan aplikasi sederhana berbasis C++ yang memungkinkan pengguna untuk memilih satu dari tiga menu perhitungan melalui input di terminal.

## 📋 Menu Aplikasi

1. Menghitung Luas Segitiga
Menggunakan rumus:
```
luas = 0.5 × alas × tinggi
```

2. PMenghitung Volume Tabung
Menggunakan rumus:
```
volume = π × r² × tinggi
(π diasumsikan 3.14)
```

3. Menghitung Usia
Berdasarkan input tahun lahir, lalu menghitung usia relatif terhadap tahun 2023:
```
usia = 2023 - tahun_lahir
```

## 💻 Bahasa Pemrograman

- C++ (Standard I/O)
- Menggunakan tipe data float dan struktur kontrol if untuk pemilihan menu.

## 🛠️ Cara Menjalankan
1. Clone repositori
```
```
2. Compile menggunakan compiler C++, seperti g++:
```
g++ aplikasi.cpp -o aplikasi
```
3. Jalankan program:
```
./aplikasi
```

## 🧪 Contoh Output
```
MENU APLIKASI
1. Menghitung Luas Segitiga
2. Menghitung Volume Tabung
3. Menghitung Usia

Masukan Menu = 1
Menghitung Luas Segitiga
Masukan alas = 10
Masukan Tinggi = 5
Luas Segitiga 25
```

## 📁 Struktur File

## 📌 Catatan
- Program masih menggunakan tahun tetap (2023) untuk menghitung usia.
- Tidak ada validasi input, sehingga pengguna harus memastikan hanya memasukkan angka sesuai petunjuk.
- Nilai π didefinisikan sebagai 3.14 (bukan dari M_PI di <cmath>).
