// Name: RITIK
// Task: 2.1P
int s = 11;
int x;
int led = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(900);
}

void dash() {
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(900);
}
void loop() {
  x = digitalRead(s);
  Serial.println(x);
  // put your main code here, to run repeatedly:
  //My name: RITIK
  //Morse Code: .-. .. - .. -.-
  if (x == 1) {
    //led blink for 'R'
    dot();
    dash();
    dot();
    delay(1500);

    //led blink for 'I'
    dot();
    dot();
    delay(1500);

    //led blink for 'T'
    dash();
    delay(1500);

    //led blink for 'I'
    dot();
    dot();
    delay(1500);

    //led blink for 'K'
    dash();
    dot();
    dash();
    delay(200000);
  }
}
