int x=0,y=0;
void setup() {
Serial.begin(9600);

}
void loop() {
x=random(1,7);
y=random(1,7);
Serial.print(x);
Serial.print("  ");
Serial.println(y);
delay(2000);
}
