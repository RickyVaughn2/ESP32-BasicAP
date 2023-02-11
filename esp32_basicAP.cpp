#include <WiFi.h>

void setup() {
  // Initialize Serial for debugging
  Serial.begin(9600);

  // Set device to Access Point mode
  WiFi.mode(WIFI_AP);

  // Configure access point settings
  WiFi.softAP("MyESP32AP", "mypassword");

  // Print IP address of access point
  Serial.print("Access Point IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // Do nothing in the loop
}
