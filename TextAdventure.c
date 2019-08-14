/*Author: Ahmed Nuur
  Objective: Text Based adventure game where the user chooses their own fate
  Date: July 31, 2019
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
 	start: 
 		printf("WELCOME TO MY GAME! This is my first Text Adventure Game. I hope you enjoy it!\n");
 		printf("MENU:\n");
 		printf("1. Start\n");
 		printf("2. Info about Author\n");
 		printf("3. Exit\n");
 		scanf("%d", &num);

 		if(num == 1){		//START GAME
 			printf("You wake up to your legs tied around a bed. Your hands are free and there's a key right next to you.\n");
 			printf("1. Grab Key\n");
 			scanf("%d", &num);
 			if(num == 1){		//grab key
 				printf("You use the key to unshackle yourself and get out of the bed. Now you look around the room to see that there are two doors on opposite sides of the room. Which one do you enter?\n");
 				printf("1. Door 1\n");
 				printf("2. Door 2\n");
 				printf("3. Explore current room\n");
 				scanf("%d", &num);
 				if(num == 1){	//Door 1
 					printf("As soon as you enter the room, you see a lion at the back of the room. It looks like it hasn't eaten in days and it looks at you with crazed eyes. What do you do?!\n");
 					printf("1. Slam Door Shut\n");
 					printf("2. Wrestle Lion\n");
 					scanf("%d", &num);
 					if(num == 1){		//slam door
 						printf("The Lion moves too fast and shoves the door, making you fall on the floor. The lion eats you. YOU LOST :(\n");
 						printf("1. Try again\n");
 						printf("2. Exit\n");
 						scanf("%d", &num);
 						if(num == 1){
 							goto start;
 						}
 						if(num = 2){
 							exit(0);
 						}
 					}
 					if(num == 2){	//wrestle lion
 						printf("You immediately get killed by the ferocious lion. YOU LOST :(\n");
 						printf("1. Try again\n");
 						printf("2. Exit\n");
 						scanf("%d", &num);
 						if(num == 1){
 							goto start;
 						}
 						if(num = 2){
 							exit(0);
 						}
 					}
 		
 				}
 				if(num == 2){	//Door 2
 					printf("As you enter the room you see an exit sign but you're a little cautious\n");
 					printf("1. Run towards the exit sign\n");
 					printf("2. Go back to the other room and explore\n");
 					scanf("%d", &num);
 					if(num == 1){	//run towards exit
 						printf("When you run towards the exit sign, you hear something behind you. You turn around to see that the door has shut behind you. You try to open it, but it doesn't budge. You try the other door with the exit sign, but it's a fake door. YOU LOST :(\n");
 						printf("1. Try again\n");
 						printf("2. Exit\n");
 						scanf("%d", &num);
 						if(num == 1){
 							goto start;
 						}
 						if(num = 2){
 							exit(0);
 						}
 					}
 					if(num == 2){	//go back to other room
 						goto otherRoom;
 					}
 				}
 				otherRoom:
 				if(num == 3){	//explore current room
 					printf("As you're exploring the room. You see that there is a secret door under a floorboard. You open it to reveal stairs, you go down the stairs to a room where there are two buttons\n");
 					printf("1. Click button that says PRESS ME\n");
 					printf("2. Click button that says DON'T PRESS ME\n");
 					scanf("%d", &num);
 					if(num == 1){ 	//PRESS ME button
 						printf("THE ROOM EXPLODES.YOU LOST :(\n");
 						printf("1. Try again\n");
 						printf("2. Exit\n");
 						scanf("%d", &num);
 						if(num == 1){
 							goto start;
 						}
 						if(num = 2){
 							exit(0);
 						}
 					}
 					if(num == 2){	//DON'T PRESS ME button
 						printf("The room opens up to reveal the outside world. With huge mountains and grass as far as you can see. The beautiful fresh air quickly fills the room and you take your first steps outside. YOU WON! :)\n");
 						printf("1. Play again\n");
 						printf("2. Exit\n");
 						scanf("%d", &num);
 						if(num == 1){
 							goto start;
 						}
 						if(num = 2){
 							exit(0);
 						}
 					}
 				
 				}
 			}
 		}

 		if(num == 2){	//INFO ABOUT ME
 			printf("I'm glad you want to know more about me! LOL\n");
 			printf("My name is Ahmed Nuur and I'm currently 18 years old. I'm enrolled at the University of Windsor for Honours Computer Science! I think coding is so mcuh fun and a great field for everyone to learn no matter what field you're in!!!\n");
 		}

 		if(num == 3){	//EXIT
 			exit(0);
 		}


	getchar();
	getchar();
	return 0;
}