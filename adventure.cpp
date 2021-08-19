#include <iostream>
int main () {

  int path1, path2;
  int bird = 1;
  int fox = 2;
  int fish = 3;
  int tries = 0;
  std::cout<< "You are a professional slingshotter and today is the big day. Its time for the national tournament, and you've woken up extra early to get a headstart. While going to the very cool sling shot tournament, 3 portals open up before you in the middle of the road. You could just ignore them but that wouldn't be fun, so the creator of the adventure is forcing you to enter a portal. One has the sigil of a bird, the other of a fox, and the third of a fish. Which do you enter? Make sure you pick a listed option or you will suffer a horrible fate.\n\n";
  std::cout << "1. The bird\n";
  std::cout << "2. The fox\n";
  std::cout << "3. The fish\n";
  std::cin >> path1;
  
  while (path1 != 1 && path1 !=2 && path1 !=3 && tries < 3){
    std::cout << "Try again fool, you have limited chances to choose a valid option. \n";
    std::cin >> path1;
    tries ++;
  }  

  if (path1 == 1){
    std::cout << "You enter the portal and zoop to see a warrior with a bird head apporaching you. He looks out of breath. This looks very urgent, and you see a destroyed smokey city behind him. Staggering, he requests you come with him. Do you?\n\n" ;
    std::cout << "1. Follow the bird!\n";
    std::cout << "2. Leave him be. \n";
    std::cin >> path2;

  
      if(path2 == 1 ){
        std::cout <<"You follow the bird and he hands you a high powered high tech sling shot. You have just became a contract mercenary for the bird alliance in the intergalactic war. Good luck soldier.\n";
      }else if(path2 == 2){
        std::cout << "You leave the poor bird behind, step back through the portal in a moon walk, and waltz to the sling shot tourney, feeling a nagging guilt. You got second.\n";
      }else {
        std::cout << "You couldnt listen to the rules huh. You've been attacked by a hoard of river frogs that materialized out of no where. Try harder on the next life \n";
    return 0;
      }

  
      
  }if (path1 == 2){
    std::cout << "You enter the portal and zoop to see a very cute fox with a nice picnic table set up. Atop it are home cooked foods, and bowls of steaming rice, miso, and a nostalgic smelling tea. She requests you eat with her. Do you?\n\n" ;
    std::cout << "1. Eat with the fox\n";
    std::cout << "2. Leave. \n";
    std::cin >> path2;

  
      if(path2 == 1 ){
        std::cout <<"You eat with the fox, and enjoy are hearty meal. She send you off afterwards, and you make it to the slingshot tourney just in time.\n";
      }else if(path2 == 2){
        std::cout << "The fox doesnt let you leave. She forces you to eat, and your stubborness delays you twenty minutes, causing you to arrive late to the slingshot tourney.\n";
      }else {
        std::cout << "You couldnt listen to the rules huh. You've been attacked by a hoard of river frogs that materialized out of no where. Try harder on the next life \n";
    return 0;
      }
  }

    if (path1 == 3){
    std::cout << "You enter the portal and zoop to see a classy looking fish. He must be rich, you think. He drags you to see his daughter, a kind looking child, and requests your aid in building a lemonade stand. Do you help?\n\n" ;
    std::cout << "1. Build the stand.!\n";
    std::cout << "2. Refuse your services. \n";
    std::cin >> path2;

  
      if(path2 == 1 ){
        std::cout <<"You become a house hero, congrats. You also become the daughters mentor, in slingshotting, allowing her to compete in and win the intergalactic slingshot tourney.\n";
      }else if(path2 == 2){
        std::cout << "You refuse, but the fish man is still considerate. You become a house hold friend, and begin training with some of the house members. Eventually you compete in the intergalactic tourney and win.\n";
      }else {
        std::cout << "You couldnt listen to the rules huh. You've been attacked by a hoard of river frogs that materialized out of no where. Try harder on the next life \n";
    return 0;
      }

    }
  
  
  
  else if (tries = 3){
    std::cout << "You couldnt listen to the rules huh. You've been attacked by a hoard of river frogs that materialized out of no where. Try harder on the next life \n";
    return 0;
  }


