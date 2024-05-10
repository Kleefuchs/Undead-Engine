#include "../include/Sprite/TexturedSprite.h"

//Texture:

Texture* UE::TexturedSprite::getTexture() {
    return this->texture;
}

void UE::TexturedSprite::setTexture(Texture* texture) {
    this->texture = texture;
}

//Source:

Rectangle* UE::TexturedSprite::getSource() {
    return &this->source;
}

void UE::TexturedSprite::setSource(Rectangle source) {
    this->source = source;
}

void UE::TexturedSprite::render() {
    DrawTexturePro(*this->texture, this->source, this->body, this->origin, this->rotation, this->tint);
}