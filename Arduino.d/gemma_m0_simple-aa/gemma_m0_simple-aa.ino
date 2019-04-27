/* 27 April 18:04 UTC */

/* gpio setup/initialization */

#define LED 13

void gpio_init() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, 0);
}

/* Arduino main setup and loop */

void setup() {
    Serial.begin(38400);
    Serial.println("Simple program begins now.");
    // setup D13 for OUTPUT
    gpio_init();

}

/* LED blink */
void blink() { } // empty: top down, bottom up, middle out programming style. ;)

void loop() {  // runs forever
    for (volatile int i = 987654; i > 0; i--) {
        // no operation here - time-waster for a delay
    }
    Serial.println("looping ...");
    blink(); // empty
}
