#define sensorTrig 2
#define sensorEcho 3

void setup() {
    Serial.begin(115200);

    pinMode(sensorTrig, OUTPUT);
    pinMode(sensorEcho, INPUT);
};

void loop() {
    digitalWrite(sensorTrig, HIGH);
    delayMicroseconds(10);
    digitalWrite(sensorTrig, LOW);

    int result = pulseIn(sensorEcho, HIGH);

    // resultado em CM
    int resultCm = result / 58;
    Serial.println(resultCm);
};