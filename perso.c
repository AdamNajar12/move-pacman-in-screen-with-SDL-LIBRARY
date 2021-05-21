

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#include "perso.h" 
	 
	


void init_perso(personnage *pers,SDL_Surface *ecran,SDL_Rect positionScore,SDL_Rect poschrono){
	pers->imageperso=IMG_Load("Pacman.png"); 
	pers->positionperso.x=150;
	pers->positionperso.y=150;
 	 pers->positionperso2.x=-50;
           pers->positionperso2.y=0;
// Load police
TTF_Font *fontTest;

fontTest= TTF_OpenFont("arial.ttf",44);

SDL_Color colorScore ={255,255,255};

pers->score=TTF_RenderText_Blended(fontTest,"Score",colorScore);

positionScore.y=0;
positionScore.x=0;
char timetext[20];
sprintf(timetext,"%d",SDL_GetTicks());
pers->chrono=TTF_RenderText_Blended(fontTest,timetext,colorScore);
poschrono.y=0;
poschrono.x=150;











pers->vie=3; 
	


	}

// display function: blit (main) + render score ,render vie+ blit score + blit vie 


void move_perso(char direction,personnage *pers){
	
	if(direction=='d'){
	          
	          pers->positionperso.x+=15; 

} 
	 else 
	     if(direction=='g'){ 
	            pers->positionperso.x-=15; }
	 
	          else 
	     if(direction=='h'){ 
	            pers->positionperso.y-=15; }
	            else 
	     if(direction=='b'){ 
	            pers->positionperso.y+=15; }
	       
	}




	


