.PHONY: clean All

All:
	@echo "----------Building project:[ unique_pointers - Debug ]----------"
	@cd "smart_pointers" && "$(MAKE)" -f  "unique_pointers.mk"
clean:
	@echo "----------Cleaning project:[ unique_pointers - Debug ]----------"
	@cd "smart_pointers" && "$(MAKE)" -f  "unique_pointers.mk" clean
