#include "Globals.h"
#include "Application.h"
#include "ModuleScene.h"
#include "ModuleRender.h"
#include "ModuleTextures.h"
#include "SDL/include/SDL.h"

ModuleScene::ModuleScene() {

}

ModuleScene::~ModuleScene() {

}

bool ModuleScene::Init() {
	bool ret = true;
	return ret;
}

bool ModuleScene::Start() {

	bool ret = true;
	texture = App->textures->Load("../Game/sprites.png");

	if (texture == nullptr) {
		LOG("Couldn't load the texture(s)");
		ret = false;
	}
	return ret;
}

update_status ModuleScene::Update() {
	SDL_RenderCopy(App->renderer->renderer, texture, NULL, NULL);
	return UPDATE_CONTINUE;
}

bool ModuleScene::CleanUp() {
	return true;
}