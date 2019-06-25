#define HALL_EFFECT 6
#define RELAY 3

int hallValue = 0;

void setup() {
  pinMode(HALL_EFFECT, INPUT);
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, LOW);
  Serial.begin(9600);
}

void loop() {
  hallValue = digitalRead(HALL_EFFECT);
  Serial.println(hallValue);

  if(hallValue == LOW){
    delay(50); //delay for wait till past center
    digitalWrite(RELAY, HIGH);
    delay(500); //delay to keep pendulem on
    digitalWrite(RELAY, LOW);
    delay(500); //delay to turn hall effect off
  }
  //digitalWrite(RELAY, HIGH);
}
