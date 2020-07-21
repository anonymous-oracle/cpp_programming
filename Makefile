.PHONY: clean All

All:
	@echo "----------Building project:[ cpp_programming - Debug ]----------"
	@"$(MAKE)" -f  "cpp_programming.mk"
clean:
	@echo "----------Cleaning project:[ cpp_programming - Debug ]----------"
	@"$(MAKE)" -f  "cpp_programming.mk" clean
