cmd_/home/km/LDD/atomic/Atomic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/km/LDD/atomic/Atomic.ko /home/km/LDD/atomic/Atomic.o /home/km/LDD/atomic/Atomic.mod.o;  true