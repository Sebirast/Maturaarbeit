#include "utils/StringCalculation.h"

int utils::getLengthOfInt(int input)
{
    return log10(input) + 1;
}

/**
 *
 */
const char* utils::getStringFromInt(int input)
{
    char* buffer = (char*)malloc(sizeof(char) * getLengthOfInt(input));
    sprintf(buffer, "%d", input);
    const char* result = buffer;
    return result;
}