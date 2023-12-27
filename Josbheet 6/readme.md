# JOBSHEET 6: TRANSMISI DATA MENGGUNAKAN MESSAGE QUEUING TELEMETRY TRANSPORT (MQTT) PROTOCOL

## ABSTRAK
<p align="justify">Message Queuing Telemetry Trasnsport (MQTT) adalah protokol komunikasi
yang berjalan di atas stack TCP/IP, didesain untuk komunikasi Machine-toMachine (M2M), bersifat open sources dan lightweight, mempunyai protocol overhead yang rendah (minimum 2 bytes) sehingga berefek pada konsumsi daya
yang kecil dan mampu bekerja pada latency yang tinggi serta bandwidth yang
kecil (Ullas et al., 2014).</p>
<p align="justify">MQTT bekerja di atas TCP/IP stack di level application layer pada standar
sistem OSI (Pal, Ghosh and Bhattacharya, 2017). Protokol ini menerapkan teknik
kompresi data dan data reduction untuk melakukan efisiensi energi (Ali, Shah and
Arshad, 2016)</p>
<p align="justify">Jobsheet ini bertujuan untuk memahami alur kerja, kegunaan dan manfaat protokol
MQTT serta mengimplementasikan protokol MQTT pada sistem IoT untuk monitoring dan kendali.</p>

Adapun sub-job pada jobsheet ini yaitu:
  1. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/A.%20Koneksi%20MQTT%20Broker">Koneksi MQTT Broker</a>
  2. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/B.%20Menerima%20Data%20JSON%20Melalui%20Protokol%20MQTT">Menerima Data JSON Melalui Protokol MQTT</a>
  3. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/C.%20Mengirim%20Dummy%20Data%20untuk%20Simulasi%20IO%20Menggunakan%20Hardware">Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware</a>
 
## Alat dan Bahan
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer
5) Sensor DHT11
6) LED
7) Multimeter
8) Resistor 1K Ohm
