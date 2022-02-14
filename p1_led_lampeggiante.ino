// Blink Accende il led esterno 7 per un secondo, poi lo spegne per un secondo, e via cosi.

// la funzione setup parte una volta quando premi reset o dai energia alla scheda
void setup() {
  // inizializza il pin digitale 7 come output.
  pinMode(7, OUTPUT);
}
// la funzione loop function si attiva girando continuamente senza sosta
void loop() {
  digitalWrite(7, HIGH);   // accende il led (HIGH massimo voltaggio)
  delay(1000);                       // attende un secondo
  digitalWrite(7, LOW);    // spegne il led dando voltaggio LOW (pari a 0)
  delay(1000);                       // attende un secondo
}
