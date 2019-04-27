/* Sat Apr 27 18:41:59 UTC 2019 */

/* False Edits - endgame already known
   An attempt is made to structure the
   commits along program development
   lines, but this is false, as the
   endgame is already on disk, in a
   secondary file. ;) */

/* demo of setup() and loop() for Arduino */

/* reference target: Adafruit Gemma M0 */


/* gpio setup/initialization */

#define LED 13
#define BLINK_TIME_MS 88
#define BLINK_OFF_TIME_MS 660

/* initialize gpio to drive onboard LED, D13 */
void gpio_init() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, 0);
}

/* LED blink */
void blink() {
    digitalWrite(LED, 1); // turn LED on
    delay(BLINK_TIME_MS);
    digitalWrite(LED, 0); // turn it off
    delay(BLINK_OFF_TIME_MS);
}

/* Arduino main setup and loop */

void setup() {
    Serial.begin(38400);

    // TODO: a waitfor style delay goes here,
    // so we catch the very first message
    // printed to the Serial Monitor

    Serial.println("Simple program begins now.");
    gpio_init();
}

void loop() {  // runs forever
    for (volatile int i = 987654; i > 0; i--) {
        // no operation here - time-waster for a delay
    }
    Serial.println("looping ...");
    blink(); // comment this out to speed up this loop a lot!
}
