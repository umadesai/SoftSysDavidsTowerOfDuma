#ifndef INCLUDE_TEXTURE_MANAGER_HPP_
#define INCLUDE_TEXTURE_MANAGER_HPP_

#include <string>
#include <map>
#include <SFML/Graphics.hpp>

class TextureManager {
 private:
    /* Array of textures used */
    std::map<std::string, sf::Texture> textures;

 public:
    /* Add a texture from a file */
    void loadTexture(const std::string& name, const std::string &filename);

    /* Translate an id into a reference */
    sf::Texture& getRef(const std::string& texture);

    /* Constructor */
    TextureManager() {
    }
};

#endif  // INCLUDE_TEXTURE_MANAGER_HPP_
