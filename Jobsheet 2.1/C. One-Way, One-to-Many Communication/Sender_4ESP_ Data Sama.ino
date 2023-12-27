#include <esp_now.h>
#include <WiFi.h>
// REPLACE WITH YOUR ESP RECEIVER'S MAC ADDRESS
uint8_t broadcastAddress1[] = {0x08, 0x3A, 0xF2, 0xB7, 0xC6, 0x80};
uint8_t broadcastAddress2[] = {0xB0, 0xB2, 0x1C, 0x97, 0x48, 0xF8};
uint8_t broadcastAddress3[] = {0xC8, 0xF0, 0x9E, 0xF5, 0x3B, 0xAC};
typedef struct test_struct {
 int x;
 int y;
} test_struct;
test_struct test;
esp_now_peer_info_t peerInfo;
// callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
 char macStr[18];
 Serial.print("Packet to: ");
 // Copies the sender mac address to a string
 snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
 mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4],
mac_addr[5]);
 Serial.print(macStr);
 Serial.print(" send status:\t");
 Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}
void setup() {
 Serial.begin(115200);
 WiFi.mode(WIFI_STA);
 if (esp_now_init() != ESP_OK) {
 Serial.println("Error initializing ESP-NOW");
 return;
 }

 esp_now_register_send_cb(OnDataSent);

 // register peer
 peerInfo.channel = 0;
 peerInfo.encrypt = false;
 // register first peer
 memcpy(peerInfo.peer_addr, broadcastAddress1, 6);
 if (esp_now_add_peer(&peerInfo) != ESP_OK){
 Serial.println("Failed to add peer");
 return;
 }
 // register second peer
 memcpy(peerInfo.peer_addr, broadcastAddress2, 6);
 if (esp_now_add_peer(&peerInfo) != ESP_OK){
 Serial.println("Failed to add peer");
 return;
 }
 /// register third peer
 memcpy(peerInfo.peer_addr, broadcastAddress3, 6);
 if (esp_now_add_peer(&peerInfo) != ESP_OK){
 Serial.println("Failed to add peer");
 return;
 }
}
void loop() {
 test.x = random(0,20);
 test.y = random(0,20);
 esp_err_t result = esp_now_send(0, (uint8_t *) &test, sizeof(test_struct));

 if (result == ESP_OK) {
 Serial.println("Sent with success");
 }
 else {
 Serial.println("Error sending the data");
 }
 delay(2000);
}
