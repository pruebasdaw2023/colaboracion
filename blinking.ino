int led = 15


void setup() {
	pinMode(led, OUTPUT);

}


void loop() {

	digitalWriter(led, HIGH);
	delay(3000);
	digitalWriter(led, LOW);
	delay(3000);

}