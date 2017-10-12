#include "Globals.h"
#include "Application.h"
#include "ModuleScene.h"
#include "ModuleTextures.h"

ModuleScene::ModuleScene() {

}

ModuleScene::~ModuleScene() {

}

bool ModuleScene::Init() {
	texture = App->textures->Load("C:/Users/danielmt3/Downloads/SDL Game 1 - Master/Game/sprites.png");
	return false;
}

update_status ModuleScene::Update() {
	return UPDATE_CONTINUE;
}

bool ModuleScene::CleanUp() {
	delete(texture);
	return true;
}