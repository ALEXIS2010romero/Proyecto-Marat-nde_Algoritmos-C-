#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>

std::string translate_spanish_to_english(const std::string& spanish_word) {
    std::map<std::string, std::string> dictionary = {
        {"hola", "hello"},
        {"adiós", "goodbye"},
        {"por favor", "please"},
        {"gracias", "thank you"},
        {"sí", "yes"},
        {"no", "no"},
        {"agua", "water"},
        {"fuego", "fire"},
        {"sol", "sun"},
        {"luna", "moon"},
        {"casa", "house"},
        {"perro", "dog"},
        {"gato", "cat"},
        {"libro", "book"}
    };

    std::string lower_word = spanish_word;
    std::transform(lower_word.begin(), lower_word.end(), lower_word.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    auto it = dictionary.find(lower_word);

    if (it != dictionary.end()) {
        return it->second;
    } else {
        return "Word not found in dictionary.";
    }
}

int main() {
    std::string word_to_translate;

    std::cout << "--- Basic Spanish to English Translator ---" << std::endl;
    std::cout << "Enter a Spanish word (e.g., Hola, Sol, Perro): ";
    
    std::getline(std::cin, word_to_translate);

    std::string english_translation = translate_spanish_to_english(word_to_translate);

    std::cout << "\nTranslation:" << std::endl;
    std::cout << "Spanish: " << word_to_translate << std::endl;
    std::cout << "English: " << english_translation << std::endl;
    
    return 0;
}