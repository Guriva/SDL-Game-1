#include "Globals.h"
#include "Application.h"
#include "ModuleInput.h"
#include "ModuleWindow.h"

ModuleInput::ModuleInput()
{}

// Destructor
ModuleInput::~ModuleInput()
{}

// Called before render is available
bool ModuleInput::Init()
{
	LOG("Init SDL input event system");
	bool ret = true;
	SDL_Init(SDL_INIT_AUDIO);

	if(SDL_InitSubSystem(SDL_INIT_EVENTS) < 0)
	{
		LOG("SDL_EVENTS could not initialize! SDL_Error: %s\n", SDL_GetError());
		ret = false;
	}

	return ret;
}

update_status ModuleInput::PreUpdate() {
	update_status ret = UPDATE_CONTINUE;

	SDL_PumpEvents();
	keyboard = SDL_GetKeyboardState(NULL);
	SDL_PollEvent(&event);

	return ret;

}

// Called every draw update
update_status ModuleInput::Update()
{
	update_status ret = UPDATE_CONTINUE;

	if (keyboard[SDL_SCANCODE_ESCAPE] || (event.type == SDL_QUIT))
	{
		ret = UPDATE_STOP;
	}

	return ret;
}

// Called before quitting
bool ModuleInput::CleanUp()
{
	LOG("Quitting SDL input event subsystem");
	SDL_QuitSubSystem(SDL_INIT_EVENTS);
	return true;
}