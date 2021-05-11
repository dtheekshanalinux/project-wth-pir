void setup(){
    pinMode(8, INPUT); // pir sensor
    pinMode(13, OUTPUT); // led light

}
void loop(){
    int val = digitalRead(8);
    if (val == 1){
        digitalWrite(13, HIGH);
    }
    else {
        digitalWrite(13, LOW);
    }
}
