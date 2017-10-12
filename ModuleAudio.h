#include "Module.h"
#include "Globals.h"
#include "SDL/include/SDL_mixer.h"

class ModuleAudio : public Module
{
public:

	ModuleAudio();
	~ModuleAudio();

	bool Init();
	bool Start();
	update_status Update();
	bool CleanUp();

private:
	Mix_Music* audio1 = nullptr;
};