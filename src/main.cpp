#include <cmath>
#include <print>
#include <raylib.h>
using namespace std;

const int screenWidth = 256;
const int screenHeight = 240;

double t = 0.0;

int main(int argc, char *argv[]) {
  InitWindow(screenWidth, screenHeight, "Thing");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    for (unsigned char y = 0; y < screenHeight; y++) {
      for (unsigned char x = 0; x < screenWidth - 1; x++) {
        Color screenColor = {
            static_cast<unsigned char>(trunc(128 * (sin((x + t) / 10) + 1))),
            static_cast<unsigned char>(
                trunc(128 * (sin((x + y - t) / 10) + 1))),
            static_cast<unsigned char>(
                trunc(128 * (sin((y + sin(t)) / 10) + 1))),
            255};
        DrawPixel(x, y, screenColor);
      }
    }
    EndDrawing();

    t += 2 * M_PI / 10;
  }

  CloseWindow();
  return 0;
}
