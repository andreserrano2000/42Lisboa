L_FT        ?= .

FT_NAME        := libft.a

FT_LNK        := -L $(L_FT) -l ft
FT_INC        := -I $(L_FT)/includes
FT_LIB        := $(L_FT)/$(FT_NAME)
