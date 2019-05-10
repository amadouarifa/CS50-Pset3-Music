            AMADOU ARIFA Arifa Mamane

#include <cs50.h>
#include <stdio.h>
#include <inttypes.h>

// Representation of a note
typedef struct note
{
    int frequency;
    int duration;
}
note;

// Representation of a song
struct song
{
    string filename;
    note **notes;
    size_t capacity;
    size_t size;
    int duration;
};
typedef struct song *song;

// Adding a note to a song for a given duration (in eighths)
bool note_write(song s, int frequency, int duration);

// Adding a rest to a song for a given duration (in eighths)
bool rest_write(song s, int duration);

// Saving a song to my disk
bool song_close(song s);

// Creating a new song
song song_open(string filename);
