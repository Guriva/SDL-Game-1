#include "Module.h"
#include "Globals.h"
#include "SDL/include/SDL.h"

class ModuleScene : public Module {
public:
	ModuleScene();
	~ModuleScene();

	bool Init();
	update_status Update();
	bool CleanUp();

public:
	SDL_Texture* texture = nullptr;
};