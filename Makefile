.PHONY: clean All

All:
	@echo "----------Building project:[ stl_library - Debug ]----------"
	@cd "stl_library" && "$(MAKE)" -f  "stl_library.mk"
clean:
	@echo "----------Cleaning project:[ stl_library - Debug ]----------"
	@cd "stl_library" && "$(MAKE)" -f  "stl_library.mk" clean
