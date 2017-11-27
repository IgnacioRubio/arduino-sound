/*
 * Program Name: Speaker
 * Author: Ignacio Rubio 
 * Date: 27 November 2017
 * Description: Plays a simple note using a speaker.
 */

const int kPinSpeaker = 9;
const int k_timeDelay = 1136; // 1 / (2*400) = microseconds

void setup() {
  pinMode(kPinSpeaker, OUTPUT);
}

void loop() {
  digitalWrite(kPinSpeaker, HIGH);
  delayMicroseconds(k_timeDelay);
  digitalWrite(kPinSpeaker, LOW);
  delayMicroseconds(k_timeDelay);
}
