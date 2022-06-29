# Standard things

sp 				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)

# Local variables

OBJS_$(d)		:= $(d)/test_all.o $(d)/test_loads.o \
				   $(d)/test_system.o
DEPS_$(d)		:= $(OBJS_$(d):%=%.d)

CLEAN			:= $(CLEAN) $(OBJS_$(d)) $(DEPS_$(d)) \

# Local rules

$(OBJS_$(d)):	CXXF_T := -I$(d)
CXXLF_T := $(TESTLIBFLAG)


runtests: $(d)/test_all
	chmod +x $<
	./$<

$(d)/test_all: $(OBJS_$(d))


# Standard things

-include	$(DEPS_$(d))

d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
