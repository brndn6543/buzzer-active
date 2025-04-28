#include <Arduino.h>

// Pin of buzzer.
int buzzer = 12;

void setup() {
    // Initialize buzzer pin as an output.
    pinMode(buzzer, OUTPUT);
}

void loop() {
    int soundDuration = 500;

    for (int i = 0; i < 20 ; i++) {
        // Gradually shortens the interval of the sound.
        if (i < 5) {
            soundDuration = 500;
        } else if (i < 10) {
            soundDuration = 300;
        } else if (i < 15) {
            soundDuration = 100;
        }

        digitalWrite(buzzer, HIGH);  // Activate the buzzer.
        delay(soundDuration);                // Wait for the sound duration.
        digitalWrite(buzzer, LOW);   // Deactivate the buzzer.
        delay(soundDuration);                // Wait for sound duration.
    }

    digitalWrite(buzzer, HIGH);  // Activate the buzzer.
    delay(5000);                     // Play sound for 5 seconds.
}