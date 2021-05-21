#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct
{
int vie;

SDL_Surface *imageperso;
SDL_Surface *score;
SDL_Surface *chrono;
SDL_Rect positionperso;
SDL_Rect positionperso2;
// num image 
}personnage;
personnage pers;

void init_perso(personnage *pers,SDL_Surface *ecran,SDL_Rect positionScore,SDL_Rect poschrono);
void move_perso(char direction,personnage *pers);
//int vie_perso(personnage pers);



