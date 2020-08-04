.PHONY: clean All

All:
	@echo "----------Building project:[ polymorphism - Debug ]----------"
	@cd "polymorphism" && "$(MAKE)" -f  "polymorphism.mk"
clean:
	@echo "----------Cleaning project:[ polymorphism - Debug ]----------"
	@cd "polymorphism" && "$(MAKE)" -f  "polymorphism.mk" clean
