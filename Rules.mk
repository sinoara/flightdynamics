# Directories
dir := tests
include $(dir)/Rules.mk

dir := src
include $(dir)/Rules.mk

# General rules
%.o : %.cpp
	$(COMP)
% : %.o
	$(LINK)
% : %.cpp
	$(COMPLINK)

.PHONY: clean
clean:
	rm -f $(CLEAN)

.SECONDARY:	$(CLEAN)
