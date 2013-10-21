export path = $(shell pwd)
include mk/path.mk
include mk/flags.mk

modules = test

.PHONY: all modules clean
.IGNORE: clean

all: $(modules)

$(modules):
	-mkdir $(bin_path)
	$(MAKE) -C $(modules_path)/$@

clean:
	rm -r $(bin_path)