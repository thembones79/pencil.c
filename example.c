#include "pencil.c"
#include <stdint.h>
#include <stdio.h>

#define WIDTH 800
#define HEIGHT 600

void pencil_fill(uint32_t *pixels, size_t width, size_t height,
                 uint32_t color) {
  for (size_t i = 0; i < width * height; ++i) {
    pixels[i] = color;
  }
}

int pencil_save_to_ppm(uint32_t *pixels, WIDTH, HEIGHT, "output.ppm") {}
static uint32_t pixels[HEIGHT * WIDTH];

int main(void) {
  printf("Hello world!\n");
  pencil_fill(pixels, WIDTH, HEIGHT, 0xFF0000FF);
  pencil_save_to_ppm(pixels, WIDTH, HEIGHT, "output.ppm");
  return 0;
}
