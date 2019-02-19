TARGET:=e1 e2

all: $(TARGET)

e%: e%.c
	gcc $^ -o $@

clean:
	rm -f $(TARGET)
