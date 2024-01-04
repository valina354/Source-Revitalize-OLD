// baseentity.h

#ifndef BASEENTITY_H
#define BASEENTITY_H

#include "cbase.h"  // Include any necessary headers here

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

class CBaseEntity
{
public:
	float GetSoundDurationWithSpeedOfSound(const char *soundname, char const *actormodel);
	void EmitSoundWithReverb(const char *soundname, float reverbLevel);

	// Add other member functions and variables as needed

private:
	// Add private member functions and variables as needed
};

#endif // BASEENTITY_H
