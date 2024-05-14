#include <Arduino.h>
#include <unity.h>

#define LED_PIN PC13

void test_led_builtin_pin_number(void) {
    TEST_ASSERT_EQUAL(PC13, LED_PIN);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
    RUN_TEST(test_led_builtin_pin_number);
    UNITY_END(); // stop unit testing
}

void loop() {
}
