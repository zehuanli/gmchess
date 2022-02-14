/*
 * Sound.cc
 * Copyright (C) 2009 lerosua <lerosua@gmail.com>
 * Copyright (C) 2018 Boyuan Yang <073plan@gmail.com>
 * 
 */

#include "Sound.h"
#include <string>
#include <vector>
#include <glib.h>

using namespace std;


void
CSound::play (SOUND_EVENTS event)
{
	const char *filename;
	switch (event)
	{
		case SND_MOVE:
			filename = SOUND_DIR"move.wav";
			break;
		case SND_CHOOSE:
			filename = SOUND_DIR"choose.wav";
			break;
		case SND_CHECK:
			filename = SOUND_DIR"check.wav";
			break;
		case SND_EAT:
			filename = SOUND_DIR"eat.wav";
			break;
		case SND_WIN:
			filename = SOUND_DIR"win.wav";
			break;
		case SND_LOSS:
			filename = SOUND_DIR"loss.wav";
			break;
		case SND_10:
			filename = SOUND_DIR"10.wav";
			break;
		case SND_9:
			filename = SOUND_DIR"9.wav";
			break;
		case SND_8:
			filename = SOUND_DIR"8.wav";
			break;
		case SND_7:
			filename = SOUND_DIR"7.wav";
			break;
		case SND_6:
			filename = SOUND_DIR"6.wav";
			break;
		case SND_5:
			filename = SOUND_DIR"5.wav";
			break;
		case SND_4:
			filename = SOUND_DIR"4.wav";
			break;
		case SND_3:
			filename = SOUND_DIR"3.wav";
			break;
		case SND_2:
			filename = SOUND_DIR"2.wav";
			break;
		case SND_1:
			filename = SOUND_DIR"1.wav";
			break;
		case SND_0:
			filename = SOUND_DIR"0.wav";
			break;
		default:
			filename = SOUND_DIR"";
			break;
	}
	play_file(filename);
}

void CSound::play_file(const char* filename)
{
	gchar* argv[3];

/* storing the program name in std::string */
#ifdef __APPLE__
    const std::string const_pname = "afplay";
#else
    const std::string const_pname = "aplay";
#endif
    std::vector<gchar> pname(const_pname.begin(), const_pname.end());
    pname.push_back('\0');
    argv[0] = &*pname.begin(); // retrieve non-const gchar *

	argv[1] = (gchar *)filename;
	argv[2] = NULL;
	GError* err;
	GSpawnFlags flas = (GSpawnFlags)(G_SPAWN_SEARCH_PATH |
		       	G_SPAWN_STDOUT_TO_DEV_NULL |
		       	G_SPAWN_STDERR_TO_DEV_NULL);
	g_spawn_async(NULL,
			argv,
			NULL,
			flas,
			NULL,
			NULL,
			NULL,
			&err);

}
