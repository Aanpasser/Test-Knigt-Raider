//Eerste test met een loop constructie.
//17-3-2018
//
//

int led_uit[] = {2, 3, 4, 5, 6, 7, 8, 9};// Hier worde de led's 2 t/m 8 als gedeclareeerd.
int teller = 0;

int waarde_pot = 0;// variable waarde_pot instellen

void setup() {
  // We zetten hier alle led's als een output in de range van 0 tot 8
  for (teller = 0; teller < 9; teller++) {
    pinMode(led_uit[teller], OUTPUT);
  } //pinMode (variable[nummer],output)

  Serial.begin(9600);//Stelde baudrate van de resiele poort in
  delay(500);//Pauze van een halve seconde
}


void loop() {
  waarde_pot = analogRead (0); // lees de waarde van (analoge) poort 0 uit
  Serial.println (waarde_pot);//Zet de waarde van de potmeter op het scherm
  // hier wordt de waarde vergeleken zodat deze niet boven of onder een waarde kan komen
  if (waarde_pot < 10)(waarde_pot = 5); //lager las 10 dan waordt de waarde 10
  if (waarde_pot > 100) (waarde_pot = 75);// hoger als 100 dan wordt de waarde 75

  

  for (teller = 0; teller < 8; teller++) {// Hier wordt de var "teller" opgehoogt ++
    digitalWrite(led_uit[teller], HIGH);
    delay(waarde_pot);
    digitalWrite(led_uit[teller], LOW);
    delay(waarde_pot);
  }

  for (teller = 8; teller >= 0; teller--) {// Hier wordt de var "teller" verlaagt --

    digitalWrite(led_uit[teller], HIGH);
    delay(waarde_pot);
    digitalWrite(led_uit[teller], LOW);
    delay(waarde_pot);
    //Serial.println (teller); }
  }
}
