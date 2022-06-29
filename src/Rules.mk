# Standard things

sp 				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)

# Subdirectories
dir := $(d)/system
include		$(dir)/Rules.mk

dir := $(d)/loads
include		$(dir)/Rules.mk

# Standard things

-include	$(DEPS_$(d))

d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
