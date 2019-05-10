        //AMADOU ARIFA Arifa Mamane

    //Pset's Functions
#include <cs50.h>
#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
    //Converting a fraction formated up to eighths
int duration(string fraction)
{
    int numer = atoi(&fraction[0]);
    int denom = atoi(&fraction[2]);
    int frac = (8/denom) * numer;
    return frac;
}
    // Calculating the frequency (in Hz) of the note
int frequency(string note)
{

    char letter;
    char accidental = 0;
    float octave = 0.0;

    if (strlen(note) == 3)
    {
        letter = note[0];
        accidental = note[1];
        octave = atoi(&note[2]);
    }
    if (strlen(note) == 2)
    {
        letter = note[0];
        octave = atoi(&note[1]);
    }
    int octcount = 0;
    float hz = 0.0;
    if (octave == 4)
    {
        hz = 440.00;
    }
         //Calculate if octave is > 4 -- 440 x 2 for each number more than 4; / 2 for each counter less than 4
        // Gets octave and letter, calculate to get setps from A4, do not calculate pow of 2 to 440.

    else if (octave > 4)
    {
        octcount = (octave - 4);
        hz = 440 * pow(2, octcount);
    }
    else if (octave < 4)
    {
        octcount = 4 - octave;
        hz = 440 / pow(2, octcount);
         // printf("Hertz is %.2f\n", hz);
        // printf("octave is less than 4\n");
    }

        // for each note lets take octave hz x 2 x/12 to get hz and return hz
    float hertz = 0.0;
    float numerator = 0.0;
    float themath = pow(2.0, (numerator/12));

    switch (letter)
    {

        case 'C':
         // code to be executed if n is equal to C;
        {
            float power = pow(2, (9.0/12));
            hertz = hz / power;
            break;
        }
        case 'D':
        // code to be executed if n is equal to D;
        {
            float power = pow(2, (7.0/12));
            hertz = hz / power;
            break;
        }
        case 'E':
        // code to be executed if n is equal to E;
        {
            float power = pow(2, (5.0/12));
            hertz = hz / power;
            break;
        }
        case 'F':
        // code to be executed if n is equal to F;
        {
            float power = pow(2, (4.0/12));
            hertz = hz / power;
            break;
        }
        case 'G':
        // code to be executed if n is equal to G;
        {
            float power = pow(2, (2.0/12));
            hertz = hz / power;
            break;
        }
        case 'A':
        // code to be executed if n is equal to A;
            {
                numerator = 12.0;
                hertz = hz * themath;
                break;
            }
        case 'B':
        // code to be executed if n is equal to B;
        {
            float power = pow(2, (2.0/12));
            hertz = hz * power;
            break;
        }
    }
    switch (accidental)
    {
        case '#':
        // code to be executed if n is equal to #;
            {
                float power = pow(2, (1.0/12));
                hertz = hertz * power;
                // printf("A octcount after = %.2d, hertzz = %.2f\n", octcount, hertz);
                // printf("A case A hertz = %.2f\n", hz);
                break;
            }
        case 'b':
        // code to be executed if n is equal to b;
        {
            float power = pow(2, (1.0/12));
            hertz = (hertz / power);
            // printf("B octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }
        default:
        // code to be executed if n is equal to constant2;
        {
            break;
        }
    }
    int finalhertz = round(hertz);
    return finalhertz;
}

// Determining whether a string represents a rest
bool is_rest(string s)
{
    if  (strcmp(s, "") == 0)
    //if (strcmp (s, second string) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}