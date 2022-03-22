# Directories
dir := src
include $(dir)/Rules.mk

dir := tests
include $(dir)/Rules.mk

# General rules
%.o : %.cpp
	$(COMP)
% : %.o
	$(LINK)
% : %.cpp
	$(COMPLINK)

# Variable to hold all objects
ALL_OBJS := 

.PHONY: clean
clean:
	rm -f $(CLEAN)

.SECONDARY:	$(CLEAN)
