#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, int x, int y) {

	objectTexture = TextureManager::LoadTexture(texturesheet);

	xpos = x;
	ypos = y;

}

void GameObject::Update() {
	
	xpos++;
	ypos++;

	srcRect.h = 512;
	srcRect.w = 512;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = 64;
	destRect.h = 64;

}

void GameObject::Render() {

	SDL_RenderCopy(Game::renderer, objectTexture, &srcRect, &destRect);

}