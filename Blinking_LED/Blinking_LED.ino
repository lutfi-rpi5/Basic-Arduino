int led = 13; // Inisialisasi pinout LEd Internal Arduino di pin 13

void setup() {

  pinMode(led, OUTPUT); // mendefinisikan led yang bernilai 13 sebagai OUTPUT

}

void loop() {

  digitalWrite(led, HIGH);  // menghidupkan LED
  delay(1000);              // delay 1 detik
  digitalWrite(led, LOW);   // mematikan LED
  delay(2000);              // delay 2 detik
  
}
