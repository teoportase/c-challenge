#ifndef UTIL_H
#define UTIL_H

/**
 * Simple lerp function that
 * takes delta time into account.
 * DO NOT USE FOR ROTATIONS!
 */
float lerpf(float a, float b, float scale, float dt);

void printArt(char* file_path);

#endif // UTIL_H

