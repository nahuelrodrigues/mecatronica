
int val = 0;

void setup() {
  Serial.begin(9600);
  //esto es para que solo sense entre 0 y 1V
  analogReference(INTERNAL);
}

void loop() {
  val = analogRead(A0);
  Serial.print("sensor: ");
  Serial.println(val);

  delay(250);
}
