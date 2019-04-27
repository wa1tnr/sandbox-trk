/* Sat Apr 27 18:10:05 UTC 2019 */

/* demo of setup() and loop() for Arduino */

/* reference target: Adafruit Gemma M0 */


/* gpio setup/initialization */

#define LED 13
#define BLINK_TIME_MS 800
#define BLINK_OFF_TIME_MS 2200

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
void blink() { // empty: top down, bottom up, middle out programming style. ;)
    digitalWrite(LED, 1);
    delay(BLINK_TIME_MS);
    digitalWrite(LED, 0);
    delay(BLINK_OFF_TIME_MS);
}

void loop() {  // runs forever
    for (volatile int i = 987654; i > 0; i--) {
        // no operation here - time-waster for a delay
    }
    Serial.println("looping ...");
    blink(); // empty
}
