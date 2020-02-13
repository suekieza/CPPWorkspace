.PHONY: clean All

All:
	@echo "----------Building project:[ Section8 - Debug ]----------"
	@cd "Section8" && "$(MAKE)" -f  "Section8.mk"
clean:
	@echo "----------Cleaning project:[ Section8 - Debug ]----------"
	@cd "Section8" && "$(MAKE)" -f  "Section8.mk" clean
