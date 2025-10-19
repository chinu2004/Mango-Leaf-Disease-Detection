#define greenLED 2
#define redLED 3
#define buzzer 4
#define IN1 5     // Motor control pin

bool commandReceived = false;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(IN1, OUTPUT);
  
  Serial.begin(115200);
}

void loop() {
  // 🔹 Blink green LED until command received
  if (!commandReceived) {
    digitalWrite(greenLED, HIGH);
    delay(500);
    digitalWrite(greenLED, LOW);
    delay(500);
  } 

  // 🔹 Wait for command from ESP32-CAM
  if (Serial.available() > 0) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "WEBBER_ALERT") {
      commandReceived = true;
      startSequence();
    }
  }
}

void startSequence() {
  // Stop green LED
  digitalWrite(greenLED, LOW);

  // 🔴 Red LED and buzzer blink 3 times (1s ON, 1s OFF)
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    delay(700);

  }

  // 🌀 Start motor (ON)
  digitalWrite(IN1, HIGH);
}
