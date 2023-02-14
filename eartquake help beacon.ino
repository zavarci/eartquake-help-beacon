int buzzerPin = 0; // Define the buzzer pin
int ledPin = 1; // Define the LED pin
String input = ""; // Define a string to hold the input

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  
}

void loop() {
  // Define the Morse code message
  char* message = " sos I here sos";
  
  // Loop through each character in the message
  for (int i = 0; i < strlen(message); i++) {
    char c = message[i];
    // Convert the character to Morse code
    switch (c) {
      case 'a':
        dot(); dash();
        break;
      case 'b':
        dash(); dot(); dot(); dot();
        break;
      case 'e':
        dot();
        break;
      case 'f':
        dot(); dot(); dash(); dot();
        break;
      case 'h':
        dot(); dot(); dot(); dot();
        break;
      case 'o':
        dash(); dash(); dash();
        break;
      case 'r':
        dot(); dash(); dot();
        break;
      case 's':
        dot(); dot(); dot();
        break;
      case 'z':
        dash(); dash(); dot(); dot();
        break;
       case '0':
          dash(); dash(); dash(); dash(); dash();
          break;
       case '1':
          dot(); dash(); dash(); dash(); dash();
          break;
       case '2':
          dot(); dot(); dash(); dash(); dash();
          break;
        case '3':
          dot(); dot(); dot(); dash(); dash();
          break;
        case '4':
          dot(); dot(); dot(); dot(); dash();
          break;
        case '5':
          dot(); dot(); dot(); dot(); dot();
          break;
        case '6':
          dash(); dot(); dot(); dot(); dot();
          break;
        case '7':
          dash(); dash(); dot(); dot(); dot();
          break;
        case '8':
          dash(); dash(); dash(); dot(); dot();
          break;
        case '9':
          dash(); dash(); dash(); dash(); dot();
          break;  
      case ' ':
        delay(400); // Add a pause between words
        break;
              
    }
    // Add a pause between characters
    delay(100);
  }
  // Add a pause between sentences
  delay(30000);
}

// Helper functions for dot and dash
void dot() {
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
}

void dash() {
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(300);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(100);
}