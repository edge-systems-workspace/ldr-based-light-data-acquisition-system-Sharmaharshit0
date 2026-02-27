#include <Arduino.h>
int ldrPin = A0;      // LDR connected to Analog pin A0
int ldrValue = 0;
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define LDR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading

void setup() {
    Serial.begin(9600);
    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Print system initialization message
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);
}

void loop() {
    ldrValue = analogRead(ldrPin);
    // TODO 5:
    // Read analog value from LDR

    // TODO 6:


    Serial.print("LDR Value: ");
    Serial.println(ldrValue);
    delay(500);
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
