cmd_/home/km/LDD/module_param/module_param.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/km/LDD/module_param/module_param.ko /home/km/LDD/module_param/module_param.o /home/km/LDD/module_param/module_param.mod.o;  true
