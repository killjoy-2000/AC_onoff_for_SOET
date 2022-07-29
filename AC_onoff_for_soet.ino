#define pir1 D7
#define pir2 D8

int p1_val, p2_val;

void setup() {

  Serial.begin(115200);
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);

  // put your setup code here, to run once:
}

void loop() {
  p1_val = digitalRead(pir1);
  p2_val = digitalRead(pir2);

  Serial.print(p1_val);
  Serial.println(p2_val);

  // put your main code here, to run repeatedly:
}