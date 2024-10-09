#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

// Define a mapping of RFID tag UIDs to product names
const byte knownTag1[] = {0x22, 0xC0, 0x8A, 0x55};  // Example UID for product ABC
const byte knownTag2[] = {0x61, 0x1A, 0xAD, 0x10};  // Example UID for product XYZ

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
 
}

void loop() {
  // Look for new cards
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
   

    // Compare UID with known UIDs
    if (compareUID(mfrc522.uid.uidByte, knownTag1, mfrc522.uid.size)) {
      Serial.print("3m Engine oil,");
      Serial.println("50");  // Print product name for tag 1
       // Indicate time is being sent
      delay(10);
    } else if (compareUID(mfrc522.uid.uidByte, knownTag2, mfrc522.uid.size)) {
      Serial.print("Clutch clamp spring,"); 
      Serial.println("100"); // Print product name for tag 2
       // Indicate time is being sent
      delay(10);
    } else {
      Serial.println("Unknown Tag");  // Unknown tag
    }

    Serial.println(); // Add a blank line for clarity
  }
  delay(1000);  
}

// Function to compare two arrays of bytes (UIDs)
bool compareUID(byte* uid1, const byte* uid2, byte size) {
  for (byte i = 0; i < size; i++) {
    if (uid1[i] != uid2[i]) {
      return false;
    }
  }
  return true;
}
