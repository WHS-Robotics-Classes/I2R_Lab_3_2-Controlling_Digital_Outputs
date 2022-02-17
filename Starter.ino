/* For this assignment you will do the following:
The green light blinks on for 200 ms and off 200 ms two times.
There is a one second pause.
The blue light does the same thing as the green just did.
There is a three second pause.
Both lights alternate blinking off and on for 650 ms each. (They continue this forever)

This video illustrated what we are going for: https://www.youtube.com/watch?v=1TTnCqdSPqc
*/

void setup()
{
    // set up output pins
    pinMode( , OUTPUT);
    pinMode(8, );
    
    // blink green LED on and off twice
        digitalWrite(, HIGH);
        delay();
        digitalWrite(, LOW);
        delay();
    
    // wait one second
    delay ();
    
    // blink blue LED on and off twice
        digitalWrite(, HIGH);
        delay();
        digitalWrite(, LOW);
        delay(); 
    
    // wait three seconds
    delay ();
}

void loop()
{
    // blink both LEDs on and off alternatively

    delay(650);

    delay(650);
}
