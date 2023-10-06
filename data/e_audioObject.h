#ifndef E_AUDIOOBJECT_H
#define E_AUDIOOBJECT_H

#include <engine_includes.h>
typedef uint64_t EHandler;
typedef struct{
    void* object;
    void** sounds;
    void* g_delayNode;
    uint32_t num_sounds;
    float volume;
    float pitch;
    float pan;
}AudioObject;

void AudioObjectInit(AudioObject* ao);
void AudioObjectLoadFile(AudioObject* ao, const char* path);
void AudioObjectJustPlaySound(AudioObject* ao, const char* path);