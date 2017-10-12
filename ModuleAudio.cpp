#include "Globals.h"
#include "Application.h"
#include "ModuleAudio.h"

ModuleAudio::ModuleAudio()
{}

// Destructor
ModuleAudio::~ModuleAudio()
{}

bool ModuleAudio::Init() {
	bool ret = true;

	if (Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 1024) == -1) {
		LOG("Failed to initialize mixer API");
		ret = false;
	}

	return ret;
}

bool ModuleAudio::Start() {
	bool ret = true;
	audio1 = Mix_LoadMUS("../Game/GSMainTheme.mp3");

	if (audio1 == nullptr) {
		LOG("Failed to load music");
	}

	//Play music is done here for testing purposes. The correct usage could be when a key is pressed, or when an event in the game starts.
	if (Mix_PlayMusic(audio1,-1) == -1) {
		LOG("Audio1 couldn't be played");
	}

	return ret;
}

update_status ModuleAudio::Update() {
	return UPDATE_CONTINUE;
}

bool ModuleAudio::CleanUp() {
	LOG("Freeing Audio mixer API and library");
	Mix_CloseAudio();

	return true;
}