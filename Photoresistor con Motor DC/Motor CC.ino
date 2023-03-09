int pin = 2;

#define sensor_pin 14

void setup(){
  pinMode(pin, OUTPUT);
  pinMode(sensor_pin, INPUT);

  Serial.begin(115200);
}

void loop(){
  digitalWrite(pin, digitalRead(sensor_pin));

}