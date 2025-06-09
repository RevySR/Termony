#include <stdio.h>
#include <asm/hwcap.h>
#include <elf.h>
#include <sys/auxv.h>

int main() {
  if (getauxval(AT_HWCAP2) & HWCAP2_SVE2)
    printf("HWCAP2_SVE2: true");
  else
    printf("HWCAP2_SVE2: false");

  asm volatile (
    "xar z0.d,z0.d,z0.d\n"
    :
    :
    : "z0"
  );
}
