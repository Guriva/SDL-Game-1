#pragma once

class Application;

class Module
{
public:

	Module()
	{
	}

	virtual bool Init() 
	{
		return true; 
	}

	virtual bool Start()
	{
		return true;
	}

	//Modulo Input
	virtual update_status PreUpdate() {
		return UPDATE_CONTINUE;
	}

	//Modulo Logica
	virtual update_status Update()
	{
		return UPDATE_CONTINUE;
	}

	//Modulo Render
	virtual update_status PostUpdate() {
		return UPDATE_CONTINUE;
	}

	virtual bool CleanUp() 
	{ 
		return true; 
	}
};