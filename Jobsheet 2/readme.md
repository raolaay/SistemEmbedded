# JOBSHEET 2: PROTOKOL KOMUNIKASI DAN SENSOR
## A. ABSTRAK
<p align="justify"> Praktikum ini bertujuan untuk memberikan pemahaman mengenai cara kerja protokol komunikasi pada ESP32, seperti UART, I2C, OneWire, dan SPI. Dari pemahaman tersebut dapat menerapkan pengetahuan itu dalam mengakses berbagai jenis sensor. Selain itu, dapat memahami bagaimana cara menciptakan perangkat IoT yang praktis dengan memanfaatkan memanfaatkan transducer sensor dan actuator. </p>

Adapun sub-job pada jobsheet ini yaitu:
  1. <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202/ESP32%20Capacitive%20Touch%20Sensor.md">ESP32 Capacitiev Touch Sensor</a>
  2. <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202/Mengakses%20Sensor%20DHT11.md"> Mengakses Sensor DHT 11 Single Wire/Bus</a>
  3. <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202/Mengakses%20Sensor%20RFID.md">Mengakses Sensor RFID</a>
  
## B. ALAT DAN BAHAN 
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT 11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)

### Metode
1. UART (Universal Asynchronous Receiver Transmitter): Protokol komunikasi serial yang umum digunakan untuk mentransfer data antara perangkat secara asinkron.
2. SPI (Serial Peripheral Interface): Protokol data serial sinkron yang digunakan untuk komunikasi cepat antara mikrokontroler dan perangkat periferal, seperti sensor atau modul eksternal.
3. I2C (Inter-Integrated Circuit): Protokol komunikasi serial yang menggunakan dua jalur (SDA dan SCL) untuk mentransfer data antara perangkat pada kecepatan tinggi.
4. Sensor Data (DHT11, RFID): Menggunakan sensor DHT11 untuk membaca data suhu dan kelembaban, serta modul RFID untuk membaca informasi dari kartu RFID.
5. Kontrol IoT: Menghubungkan ESP32 ke internet dan melakukan kontrol perangkat secara remote.

## C. KESIMPULAN
1. ESP32 Capacitive Touch Sensor, program ini menggunakan sensor sentuh pada ESP32 untuk mengontrol LED berdasarkan sentuhan pengguna. Membaca nilai sensor sentuh, dan jika disentuh, LED menyala dan pesan ditampilkan di Serial Monitor. Jika tidak disentuh, LED dimatikan.
2. Mengakses Sensor DHT 11 (Single Wire / BUS), program ini membaca suhu dari sensor DHT11 dan memberikan respons visual dan suara berdasarkan nilai suhu. Jika suhu melebihi 30 derajat Celsius, LED menyala dan buzzer berbunyi. Jika tidak, LED berkedip lima kali.
3. Mengakses Sensor RFID (SPI Communication), program ini menggunakan modul RFID MFRC522 untuk mengakses kartu RFID.
