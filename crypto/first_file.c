__attribute__ ((section(".rodata"), used))
const unsigned char first_crypto_rodata = 0x10;

__attribute__ ((section(".text"), used))
void first_crypto_text(void){}

__attribute__ ((section(".init.text"), used))
void first_crypto_init(void){}
