/*
 * Program Name: Speaker Music
 * Author: Ignacio Rubio 
 * Date: 27 November 2017
 * Description: Plays music using a speaker.
 */
#include "pitches.h"

const int kPinSpeaker = 9;

#define NUM_NOTES 15

const int notes[NUM_NOTES] = // a 0 represents rest
{
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_D4, NOTE_C4, 0
};

const int beats[NUM_NOTES] = {1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4};
const int beat_length = 300;

void setup() {
  pinMode(kPinSpeaker, OUTPUT);
}

void loop() {
  for (int i = 0; i < NUM_NOTES; i++) {
    if (notes[i] == 0) {
      delay(beats[i] * beat_length); //rest
    }
    else {
      ourTone(notes[i], beats[i] * beat_length);
    }
    // pause between notes
    noTone(kPinSpeaker);
    delay(beat_length / 2);
  }

  noTone(kPinSpeaker);
  delay(2000);
}

void ourTone(int freq, int duration) {
  tone(kPinSpeaker, freq, duration);
  delay(duration);
}
