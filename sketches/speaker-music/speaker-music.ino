/*
 * Program Name: Speaker Music
 * Author: Ignacio Rubio 
 * Date: 27 November 2017
 * Description: Plays music using a speaker.
 */

#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

const int kPinSpeaker = 9;

void setup() {
  pinMode(kPinSpeaker, OUTPUT);
}

const int delayTime = 500;

void loop() {
  tone(kPinSpeaker, NOTE_C4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_D4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_E4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_F4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_G4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_A4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_B4, delayTime);
  delay(delayTime);
  tone(kPinSpeaker, NOTE_C5, delayTime);
  delay(delayTime);

  noTone(kPinSpeaker);
  delay(2000);
}
