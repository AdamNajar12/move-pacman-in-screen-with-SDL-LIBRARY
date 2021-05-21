#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "perso.h" 
 
	 
	int main ( int argc, char *argv[] ){
	SDL_Surface *ecran=NULL; 
	 char direction; 
	personnage pers; 
	
SDL_Init(SDL_INIT_VIDEO);
TTF_Init();	
int continuer=1;
	SDL_Event evenement; 
	
	ecran=SDL_SetVideoMode(600,600,32,SDL_HWSURFACE); 
	
//creer et stocker des couleurs
Uint32 red,green,blue, couleurCapeDuPersonnage;
couleurCapeDuPersonnage=SDL_MapRGB(ecran->format,0,0,128);
red=SDL_MapRGB(ecran->format,255,0,0);

green=SDL_MapRGB(ecran->format,0,255,0);
blue=SDL_MapRGB(ecran->format,0,0,255);
SDL_FillRect(ecran,NULL,couleurCapeDuPersonnage);
SDL_Flip(ecran);
SDL_Rect poschrono;
SDL_Rect positionscore;
//le personnage


init_perso(&pers,ecran,positionscore,poschrono);

	


	
while(continuer){


if(SDL_PollEvent(&evenement))
{

if(evenement.type==SDL_QUIT)
{break;}	

if(evenement.type==SDL_KEYDOWN){
	    if(evenement.key.keysym.sym==SDLK_LEFT){
	         direction='g';
	          move_perso(direction,&pers);  

	       } 
	  else 
	    if (evenement.key.keysym.sym==SDLK_RIGHT){
	          direction='d'; 
	           move_perso(direction,&pers);

} 
	  else 
	    if (evenement.key.keysym.sym==SDLK_UP){
	          direction='h'; 
	           move_perso(direction,&pers);

} 
	  else 
	    if (evenement.key.keysym.sym==SDLK_DOWN){
	          direction='b'; 
	           move_perso(direction,&pers);

} 




}
}
  
SDL_FillRect(ecran,NULL,couleurCapeDuPersonnage);
SDL_BlitSurface(pers.imageperso,NULL,ecran,&pers.positionperso);
SDL_BlitSurface(pers.score,NULL,ecran,&positionscore);

SDL_BlitSurface(pers.chrono,NULL,ecran,&poschrono);
SDL_Flip(ecran);



}
	

//Liberer la memoire
SDL_FreeSurface(pers.chrono);
SDL_FreeSurface(pers.score);
SDL_FreeSurface(pers.imageperso);
SDL_FreeSurface(ecran); 
	TTF_Quit;
	SDL_Quit();  
	return 0; 
	}
	



