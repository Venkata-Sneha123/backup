cmd_/home/km/LDD/char_driver_static/chr_drv_static.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/km/LDD/char_driver_static/chr_drv_static.ko /home/km/LDD/char_driver_static/chr_drv_static.o /home/km/LDD/char_driver_static/chr_drv_static.mod.o;  true
