        //AMADOU ARIFA Arifa Mamane

// Helper functions for music
#include <cs50.h>

// Converts a fraction to eighths
int duration(string fraction);

// Calculates frequency (in Hz) of a note formatted,
// where the 'first' is any of A through G and the 'second' is any of 0 through 8,
// or formatted as '1st, 2nd, 3rd', where '1st' is any of A through G, 'second' is # or b,
// and 'third' is any of 0 through 8
int frequency(string note);

// To determinewhether a string represents a rest
bool is_rest(string s);
