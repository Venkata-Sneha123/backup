cmd_/home/km/LDD/chr_driver_dynamic/chr_drv_dynamic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/km/LDD/chr_driver_dynamic/chr_drv_dynamic.ko /home/km/LDD/chr_driver_dynamic/chr_drv_dynamic.o /home/km/LDD/chr_driver_dynamic/chr_drv_dynamic.mod.o;  true