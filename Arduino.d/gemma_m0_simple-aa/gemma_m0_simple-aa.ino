/* Arduino main setup and loop */
void setup() {
    Serial.begin(38400);
    Serial.println("Simple program begins now.");
}

void loop() {  // runs forever
    for (volatile int i = 987654; i > 0; i--) {
        // no operation here - time-waster for a delay
    }
    Serial.println("looping ...");
}
