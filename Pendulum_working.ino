#define HALL_EFFECT 6
#define RELAY 3

int LEDPIN = 13;

int hallValue = 0;

void setup() {
  pinMode(HALL_EFFECT, INPUT);
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, LOW);
  Serial.begin(9600);
  {
  pinMode(LEDPIN, OUTPUT);
} 
}

void loop() {
  hallValue = digitalRead(HALL_EFFECT);
  Serial.println(hallValue);

  if(hallValue == LOW){
    delay(50); //delay for wait till past center
    digitalWrite(RELAY, HIGH);
    digitalWrite(LEDPIN, HIGH);
    delay(500); //delay to keep pendulem on
    digitalWrite(RELAY, LOW);
    digitalWrite(LEDPIN,LOW);
    //delay(500); //delay to turn hall effect off
    delay(14000); //delay to turn hall effect off, and keep off for a long time because we want the pendulum to precess (delays about 5 passes)
  }
  //digitalWrite(RELAY, HIGH);
}
