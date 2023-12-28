# JOBSHEET 2.1 : JARINGAN SENSOR NIRKABEL MENGGUNAKAN ESP-NOW

## ABSTRAK
<p align="justify">ESP-NOW adalah protokol yang dikembangkan oleh Espressif, yang memungkinkan banyak
perangkat untuk berkomunikasi satu sama lain tanpa menggunakan Wi-Fi. Protokol ini mirip
dengan konektivitas nirkabel 2.4GHz berdaya rendah. Pendifinisian alamat (MAC Address)
pada masing-masing ESP32 diperlukan pada awal konfigurasi. Setelah konfigurasi alamat
selesai dilakukan, jaringan peer-to-peer akan terbentuk dan perangkat tidak perlu melakukan
handshaking kembali ketika akan berkomunikasi. Hal ini memunjukkan bahwa setelah
perangkat ESP32 saling terpasang satu sama lain, koneksi akan tetap ada. Dengan kata lain,
jika tiba-tiba salah satu ESP32 kehilangan daya atau diatur ulang, ketika restart, secara
otomatis akan terhubung ke pasangan ESP32 yang telah terdefinisi alamatnya untuk
melanjutkan komunikasi.
</p>
<p align="justify">ESP-NOW mempunyai 2 tipe jaringan, yaitu One-Way Communication dan Two-Way
Communication. One-Way Communication terbagi menjadi Point-to-Point, One-to-Many
Communication dan Many-to-One Communication. Sementara Two-Way Communication
terbagi menjadi Point-to-Point dan Mesh Communication.</p>
<p align="justify">Adapun tujuan dari jobsheet ini adalah untuk memahami konsep topologi jaringan sensor nirkabel berbasis ESP-NOW, melakukan konfigurasi berbagai topologi ESP-NOW, dan menganalisis dan menentukan topologi ESP-NOW,sesuai dengan
studi kasus proyek. </p>

Pada jobsheet ini dibagi menjadi beberapa sub-job yaitu:
  1. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Jobsheet%202.1/A.%20Mendapatkan_MAC_Address">Memperoleh MAC Address ESP32 Receiver</a>
  2. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Jobsheet%202.1/B.%20ESP-NOW%20One-Way%20Point-to-Point%20Communication">ESP-NOW One-Way Point-to-Point Communication</a>
  3. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Jobsheet%202.1/C.%20One-Way%2C%20One-to-Many%20Communication">One-Way, One-to-Many Communication</a>
  4. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Jobsheet%202.1/D.%20One-Way%2C%20Many-to-One%20Communication">One-Way, Many-to-One Communication</a>
  5. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Jobsheet%202.1/E.%20Two-Way%20Communication">Two-Way Communication</a>

## ALAT DAN BAHAN
1) ESP32
2) Breadboard
3) Kabel jumper
4) Resistor 10K Ohm
