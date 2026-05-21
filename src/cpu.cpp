#include <array>
#include <cstdint>
using namespace std;

class Hayyan16 {
public:
  Hayyan16();
  Hayyan16(Hayyan16 &&) = default;
  Hayyan16(const Hayyan16 &) = default;
  Hayyan16 &operator=(Hayyan16 &&) = default;
  Hayyan16 &operator=(const Hayyan16 &) = default;
  ~Hayyan16();

private:
  /*
   * Memory Map of the 64KB of RAM (Bassed off of the Astro-8):
   *
   * 0x0000-0x3fff: Program RAM (16KB or 16384 lines of code)
   * 0x4000-0x4fff: Program Variable RAM (4KB or 4096 words)
   * 0x5000-0xafff: Free RAM (24KB)
   * 0xb000-0xffff: Video RAM (20KB or a 160x128 display)
   */

  array<uint16_t, 65536> raam;
  array<uint16_t, 8> registers;
  uint16_t progCounter;
};

Hayyan16::Hayyan16() {}

Hayyan16::~Hayyan16() {}
