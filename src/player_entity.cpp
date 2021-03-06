#include "player_entity.h"

Player::Player(Texture::ID id, TextureHolder &textures) : mType(mType), mSprite(textures.get(id))
{
    sf::FloatRect bounds = mSprite.getLocalBounds();
    mSprite.setOrigin(bounds.width / 2.0f, bounds.height / 2.0f);
}

void Player::drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mSprite, states);
}
