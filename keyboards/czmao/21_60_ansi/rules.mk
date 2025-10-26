# 在 rules.mk 文件末尾添加

# 获取当前日期和时间
BUILD_DATE := $(shell date +"%Y%m%d")
BUILD_TIME := $(shell date +"%H%M%S")

# 设置固件名称格式
FIRMWARE_FORMAT = $(KEYBOARD)_$(KEYMAP)_v$(BUILD_DATE)_$(BUILD_TIME)

# 覆盖默认的固件生成规则
BUILD_DIR := $(TOP_DIR)/.build
FIRMWARE_DIR := $(TOP_DIR)/.build
TARGET := $(FIRMWARE_DIR)/$(FIRMWARE_FORMAT)

# 修改固件生成目标
$(BUILD_DIR)/$(TARGET).hex: $(BUILD_DIR)/$(TARGET).elf
	$(Q)$(OBJCOPY) -O ihex $< $@
	$(Q)cp $@ $(FIRMWARE_DIR)/$(FIRMWARE_FORMAT).hex

$(BUILD_DIR)/$(TARGET).bin: $(BUILD_DIR)/$(TARGET).elf
	$(Q)$(OBJCOPY) -O binary $< $@
	$(Q)cp $@ $(FIRMWARE_DIR)/$(FIRMWARE_FORMAT).bin