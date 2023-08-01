#ifndef __MIDI_OBJECTS_H__
#define __MIDI_OBJECTS_H__
#include <Control_Surface.h>

using namespace MIDI_Notes;
USBMIDI_Interface midi;
DigitalCCSender sender;
Bank<8> bank;

Bankable::ManyAddresses::NoteButton<8> notebuttons[] 
{
    {
        bank,
        1, // pin
        {
            { 
                {note(E, 2), CHANNEL_1},
                {note(E, 2), CHANNEL_2},
                {note(E, 2), CHANNEL_3},
                {note(E, 2), CHANNEL_4},
                {note(E, 3), CHANNEL_1},
                {note(E, 3), CHANNEL_2},
                {note(E, 3), CHANNEL_3},
                {note(E, 3), CHANNEL_4}
            },
                
            }
    },

    {
        bank,
        2, // pin
        {
            { 
            {note(F, 2), CHANNEL_1},
            {note(F, 2), CHANNEL_2},
            {note(F, 2), CHANNEL_3},
            {note(F, 2), CHANNEL_4},
            {note(C, 3), CHANNEL_1},
            {note(C, 3), CHANNEL_2},
            {note(C, 3), CHANNEL_3},
            {note(C, 3), CHANNEL_4}
            }
        }
    },
    {
        bank,
        3, // pin
        {
            { 
                {note(Gb, 2), CHANNEL_1},
                {note(Gb, 2), CHANNEL_2},
                {note(Gb, 2), CHANNEL_3},
                {note(Gb, 2), CHANNEL_4},
                {note(Ab, 2), CHANNEL_1},
                {note(Ab, 2), CHANNEL_2},
                {note(Ab, 2), CHANNEL_3},
                {note(Ab, 2), CHANNEL_4}
            }
        }
    },
    {
        bank,
        4, // pin
        {
            { 
                {note(G, 2), CHANNEL_1},
                {note(G, 2), CHANNEL_2},
                {note(G, 2), CHANNEL_3},
                {note(G, 2), CHANNEL_4},
                {note(E, 2), CHANNEL_1},
                {note(E, 2), CHANNEL_2},
                {note(E, 2), CHANNEL_3},
                {note(E, 2), CHANNEL_4}
            }
        }
    },
                {
        bank,
        5, // pin
        {
            { 
                {note(Ab, 2), CHANNEL_1},
                {note(Ab, 2), CHANNEL_2},
                {note(Ab, 2), CHANNEL_3},
                {note(Ab, 2), CHANNEL_4},
                {note(F, 3), CHANNEL_1},
                {note(F, 3), CHANNEL_2},
                {note(F, 3), CHANNEL_3},
                {note(F, 3), CHANNEL_4}
            },
                
            }
    },

    {
        bank,
        6, // pin
        {
            { 
            {note(A, 2), CHANNEL_1},
            {note(A, 2), CHANNEL_2},
            {note(A, 2), CHANNEL_3},
            {note(A, 2), CHANNEL_4},
            {note(Db, 3), CHANNEL_1},
            {note(Db, 3), CHANNEL_2},
            {note(Db, 3), CHANNEL_3},
            {note(Db, 3), CHANNEL_4}
            }
        }
    },
    {
        bank,
        7, // pin
        {
            { 
                {note(Bb, 2), CHANNEL_1},
                {note(Bb, 2), CHANNEL_2},
                {note(Bb, 2), CHANNEL_3},
                {note(Bb, 2), CHANNEL_4},
                {note(A, 2), CHANNEL_1},
                {note(A, 2), CHANNEL_2},
                {note(A, 2), CHANNEL_3},
                {note(A, 2), CHANNEL_4}
            }
        }
    },
    {
        bank,
        8, // pin
        {
            { 
                {note(B, 2), CHANNEL_1},
                {note(B, 2), CHANNEL_2},
                {note(B, 2), CHANNEL_3},
                {note(B, 2), CHANNEL_4},
                {note(F, 2), CHANNEL_1},
                {note(F, 2), CHANNEL_2},
                {note(F, 2), CHANNEL_3},
                {note(F, 2), CHANNEL_4}
            }
        }
    },
                {
        bank,
        9, // pin
        {
            { 
                {note(C, 3), CHANNEL_1},
                {note(C, 3), CHANNEL_2},
                {note(C, 3), CHANNEL_3},
                {note(C, 3), CHANNEL_4},
                {note(Gb, 3), CHANNEL_1},
                {note(Gb, 3), CHANNEL_2},
                {note(Gb, 3), CHANNEL_3},
                {note(Gb, 3), CHANNEL_4}
            },
                
            }
    },

    {
        bank,
        10, // pin
        {
            { 
            {note(Db, 3), CHANNEL_1},
            {note(Db, 3), CHANNEL_2},
            {note(Db, 3), CHANNEL_3},
            {note(Db, 3), CHANNEL_4},
            {note(D, 3), CHANNEL_1},
            {note(D, 3), CHANNEL_2},
            {note(D, 3), CHANNEL_3},
            {note(D, 3), CHANNEL_4}
            }
        }
    },
    {
        bank,
        11, // pin
        {
            { 
                {note(D, 3), CHANNEL_1},
                {note(D, 3), CHANNEL_2},
                {note(D, 3), CHANNEL_3},
                {note(D, 3), CHANNEL_4},
                {note(Bb, 2), CHANNEL_1},
                {note(Bb, 2), CHANNEL_2},
                {note(Bb, 2), CHANNEL_3},
                {note(Bb, 2), CHANNEL_4}
            }
        }
    },
    {
        bank,
        12, // pin
        {
            { 
                {note(Eb, 3), CHANNEL_1},
                {note(Eb, 3), CHANNEL_2},
                {note(Eb, 3), CHANNEL_3},
                {note(Eb, 3), CHANNEL_4},
                {note(Gb, 2), CHANNEL_1},
                {note(Gb, 2), CHANNEL_2},
                {note(Gb, 2), CHANNEL_3},
                {note(Gb, 2), CHANNEL_4}
            }
        }
    },
                {
        bank,
        13, // pin
        {
            { 
                {note(E, 3), CHANNEL_1},
                {note(E, 3), CHANNEL_2},
                {note(E, 3), CHANNEL_3},
                {note(E, 3), CHANNEL_4},
                {note(G, 3), CHANNEL_1},
                {note(G, 3), CHANNEL_2},
                {note(G, 3), CHANNEL_3},
                {note(G, 3), CHANNEL_4}
            },
                
            }
    },

    {
        bank,
        14, // pin
        {
            { 
            {note(F, 3), CHANNEL_1},
            {note(F, 3), CHANNEL_2},
            {note(F, 3), CHANNEL_3},
            {note(F, 3), CHANNEL_4},
            {note(Eb, 3), CHANNEL_1},
            {note(Eb, 3), CHANNEL_2},
            {note(Eb, 3), CHANNEL_3},
            {note(Eb, 3), CHANNEL_4}
            }
        }
    },
    {
        bank,
        15, // pin
        {
            { 
                {note(Gb, 3), CHANNEL_1},
                {note(Gb, 3), CHANNEL_2},
                {note(Gb, 3), CHANNEL_3},
                {note(Gb, 3), CHANNEL_4},
                {note(B, 2), CHANNEL_1},
                {note(B, 2), CHANNEL_2},
                {note(B, 2), CHANNEL_3},
                {note(B, 2), CHANNEL_4}
            }
        }
    },
    {
        bank,
        16, // pin
        {
            { 
                {note(G, 3), CHANNEL_1},
                {note(G, 3), CHANNEL_2},
                {note(G, 3), CHANNEL_3},
                {note(G, 3), CHANNEL_4},
                {note(G, 2), CHANNEL_1},
                {note(G, 2), CHANNEL_2},
                {note(G, 2), CHANNEL_3},
                {note(G, 2), CHANNEL_4}
            }
        }
    }
    
};


#endif