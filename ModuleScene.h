#include "Module.h"
#include "Globals.h"

struct SDL_Texture;

class ModuleScene : public Module {
public:
	ModuleScene();
	~ModuleScene();

	bool Init();
	bool Start();
	update_status Update();
	bool CleanUp();

private:
	SDL_Texture* texture = nullptr;
};