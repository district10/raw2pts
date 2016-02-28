input   = input
output  = output
pts     = $(patsubst $(input)/%.raw, $(output)/%.txt, $(wildcard $(input)/*.raw))
allpts  = $(output)/all.txt

all: raw2pts $(pts) $(allpts)

$(allpts): $(pts)
	cat $^ > $@

$(pts): $(output)
$(output):
	mkdir -p $@

$(pts): raw2pts
raw2pts:
	gcc raw2pts.c -o $@

$(output)/%.txt: $(input)/%.raw
	raw2pts $< $@
