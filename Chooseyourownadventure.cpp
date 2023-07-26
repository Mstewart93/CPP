#include <iostream>

int main()  {

int choice1 = 0;
int choice12 = 0;
int choice21 = 0;
int choice31 = 0;

std::cout << "You open your eyes to the blinding sun...\n\n";
std::cout << "Lookig around you see a large tree, sleeping, its giant eyes closed as it snores softly....\n\n";
std::cout << "In front of the tree rests 3 stumps....\n\n";
std::cout << "On top of the first stump rests a sword, the    second stump a sheild, and the last stump a giant tome.\n\n";
std::cout << " ================================\n";
std::cout << "Which one do you pick?\n\n";
std::cout <<         "1) Sword\n";
std::cout <<         "2) Sheild\n";
std::cout <<         "3) Tome\n";

std::cin >> choice1;

if (choice1 == 1) {

std::cout << "You reach forward to grab the sword, before your hand touches the sword the ground begins to shake....you look over at the tree and watch as his eyes open...\n\n";

std::cout << "What do you do?\n";
std::cout << "        1)Run.\n";
std::cout << "        2)Stay.\n";
std::cout << "        3)Grab the sword.\n";

std::cin >> choice12;
 
if (choice12 == 1) {

std::cout << "As you are running you trip over a root ascneding from the ground and impail yourself on a nearby post.";

}
else if (choice12 == 2){

std::cout << "The tree begins lifting off the ground, its roots pulling from deep within the earth to reach forward and wrap around your ankle. Before you get away the tree drags you down bellow the earth. You are trapped, destined to become food for the tree and its young.\n";

}
else if (choice12 == 3){

std::cout << "Using the sword you defend yourself as the tree begins lifting off the ground, its roots pulling up from deep within the earth reaching forward it tries to wrap around your foot. Using the sword you slice off the root, turning you run, and get away alone.\n ";
}

}
else if (choice1 == 2)  {

  std::cout << "As you pick up the sheild the tree opens its eyes slowly...\n ";
  std::cout << "I have been waiting for you....\n";
  std::cout << "The tree rumbles inside of your mind.\n";
  std::cout << "Time to face your destiny.\n";
  std::cout << "What do you do?\n";
 std::cout << "       1)Run.\n";
 std::cout << "       2)Stay and listen.\n";
 std::cout << "       3)Brandish your sheild.       \n";


  std::cin >> choice21;

    if (choice21 == 1){
    std::cout << "Hi\n";

    }
    else if (choice21 == 2){

    std::cout << "Hello\n";

    }
    else if (choice21 == 3){
    std::cout << "Hallo\n";
    }
    else { 
    std::cout <<  "Invalid entry\n";
  }
}
else if (choice1 == 3) {
  std::cout << "As you reach for the tome it begins to glow a    bright green. \n";
  std::cout << "Hello\n";
           std::cin >> choice31;

             if (choice31 == 1) {

            std::cout << "Wishes death";
          }

             else if (choice31 == 2) {

             std::cout << "turns down gets dream";
           }
        else if (choice == 3)

        std::cout "dies monster book entry";

      //1 glows bright green offers him alls his dreams and he takes it dies
      //2 turns down the tree get his wildet dreas 
      //3 grabs sword and kills the tree, inside the book under demons is a picture of the tree and its descriptions says it is a trickser monster bent on absorbing the life force of others.
    }

}

else {

  std::cout << "Invalid Input .\n";
}


}