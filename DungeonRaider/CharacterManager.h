#ifndef CHARACTERMANAGER_H
#define CHARACTERMANAGER_H


#include "Character.h"
#include "Animation.h"
#include "AnimState.h"
#include "AnimStateComponent.h"
#include "GameState.h"

class CharacterManager
{
	/*
	Class CharacterManager
	
	This class handles rendering and updating of a huge array of Characters. 
	This class is also a huge hack for now.
	
	Only 1 instance of this class should exist at a time.
	*/
private:
	std::vector<Character> characters;

	Attributes skeletonAttributes;
	Character* skeletonPrototype;
	AnimStateController skeletonAnimController;

	TextureLibrary skeletonTextures;
public:
	CharacterManager()
	{
		//default constructor

		//initialize/define prototypes
		
		skeletonAttributes.canBreatheUnderwater = true;
		skeletonAttributes.isPoisonImmune = true;
		skeletonAttributes.maxHealth = 100;
		skeletonAttributes.maxJumpSpeed = 0.0;
		skeletonAttributes.maxMoveSpeed = 2.0;
		skeletonAttributes.maxQuickMoveSpeed = 3.0;

		skeletonTextures.loadTexture("skeleton_idle", "Textures/skeleton_idle.png");
		Animation skeletonIdle(sf::IntRect(0, 0, 320, 320));
		AnimState skeletonIdleState("idle", skeletonIdle);

		skeletonAnimController.addPossibleState(skeletonIdleState);
		skeletonAnimController.setDefaultState("idle");

		AnimStateComponent skeletonAnimator(skeletonTextures.getTexture("skeleton_idle"), &skeletonAnimController); //copied by value into prototype, so no need for heap allocation

		skeletonPrototype = new Character(&skeletonAttributes);
	}
	~CharacterManager()
	{
		//destructor
		characters.clear();
		delete skeletonPrototype;
		skeletonPrototype = 0;
	}

	void instantiateSkeleton();
	void pushCharacter(Character newCharacter);
	void update(float frameTime); //update all Characters in the current frame
	void draw(sf::RenderWindow& window); //draw all Characters in the current frame
	int getNumCharacters() { return characters.size(); }
};





#endif