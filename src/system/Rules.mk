# Standard things

sp 				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)


# Local variables

OBJS_$(d)		:= $(d)/system.o $(d)/vehicle.o
DEPS_$(d)		:= $(OBJS_$(d):%=%.d)

CLEAN			:= $(CLEAN) $(OBJS_$(d)) $(DEPS_$(d)) \

# Local rules

$(OBJS_$(d)):	CXXF_T := -I$(d)

#
# Standard things
ALL_OBJS := $(ALL_OBJS) $(OBJS_$(d))

-include	$(DEPS_$(d))

d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
