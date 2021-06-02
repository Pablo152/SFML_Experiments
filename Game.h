//
// Created by pabloazuaje on 6/1/21.
//

#ifndef SFML_TEST__GAME_H_
#define SFML_TEST__GAME_H_
#include <SFML/Graphics.hpp>

class Game {
 public:
  Game();
  void run();

 private:
  void processEvents();
  void update(sf::Time deltaTime);
  void render();
  void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

 private:
  sf::RenderWindow mWindow;
  sf::CircleShape mPlayer;
  const float PlayerSpeed;
  bool mIsMovingUp{false};
  bool mIsMovingDown{false};
  bool mIsMovingLeft{false};
  bool mIsMovingRight{false};
};

#endif //SFML_TEST__GAME_H_
