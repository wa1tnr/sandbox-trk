/* 27 April 17:41 UTC */

/* Arduino main setup and loop */
void setup() {
    Serial.begin(38400);
    Serial.println("Simple program begins now.");
    // setup D13 for OUTPUT
}

void blink() { } // empty: top down, bottom up, middle out programming style. ;)

void loop() {  // runs forever
    for (volatile int i = 987654; i > 0; i--) {
        // no operation here - time-waster for a delay
    }
    Serial.println("looping ...");
    blink(); // empty
}
