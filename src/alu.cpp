#include <cstdint>
using namespace std;

class ALU {
public:
  ALU();
  ALU(ALU &&) = default;
  ALU(const ALU &) = default;
  ALU &operator=(ALU &&) = default;
  ALU &operator=(const ALU &) = default;
  ~ALU();

private:
  /*
   * Different operator types:
   * 0  - Addition
   * 1  - Subtraction
   * 2  - Multiplication
   * 3  - Division
   * 4  - Bitwise Left Shift  (0010 << 1 = 0100)
   * 5  - Bitwise Right Shift (0010 >> 1 = 0001)
   * 6  - AND                 (1001 & 0111 = 0001)
   * 7  - NAND                (1001 !& 0111 = 1110)
   * 8  - OR                  (1010 | 1001 = 1011)
   * 9  - NOR                 (1010 | 1001 = 0100)
   * 10 - XOR                 (1010 ^ 1001 = 0011)
   * 11 - XNOR                (1010 ^ 1001 = 1100)
   * 12 - NOT                 (!1101 = 0010)
   */

  uint16_t inputA;
  uint16_t inputB;
  uint8_t operType;
};

ALU::ALU() {}

ALU::~ALU() {}
