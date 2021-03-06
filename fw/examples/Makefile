PLATFORM ?= esp8266

REPO_ROOT = $(abspath ../..)
MJS_PATH = $(REPO_ROOT)/mjs
LIBS_PATH = $(REPO_ROOT)/mos_libs

EXAMPLES_cc3200 = c_aws_shadow c_hello c_http c_network c_mqtt c_uart
EXAMPLES_esp32 =  c_aws_shadow c_hello c_http c_mqtt c_rpc c_uart c_websocket
EXAMPLES_esp8266 = c_aws_shadow c_heater c_hello c_http c_mcast c_mqtt c_network c_uart c_websocket
EXAMPLES_pic32 =
EXAMPLES_stm32 =

MOS ?= mos

$(eval EXAMPLES=$(EXAMPLES_$(PLATFORM)))

.PHONY: all $(EXAMPLES) list_examples

export PLATFORM

all: $(EXAMPLES)

$(EXAMPLES): $(MJS_PATH)/mjs.c $(MJS_PATH)/mjs.h
	@echo "=== Building $@ / $(PLATFORM)"
	@cd $@ && $(MOS) build --local --clean --arch $(PLATFORM) \
		--repo $(REPO_ROOT) \
		--lib aws:$(LIBS_PATH)/aws \
		--lib blynk:$(LIBS_PATH)/blynk \
		--lib dns-sd:$(LIBS_PATH)/dns-sd \
		--lib gcp:$(LIBS_PATH)/gcp \
		--lib mjs:$(LIBS_PATH)/mjs \
		--lib mqtt:$(LIBS_PATH)/mqtt \
		--lib ota-http-client:$(LIBS_PATH)/ota-http-client \
		--lib ota-http-server:$(LIBS_PATH)/ota-http-server \
		--lib rpc-common:$(LIBS_PATH)/rpc-common \
		--lib rpc-loopback:$(LIBS_PATH)/rpc-loopback \
		--lib rpc-mqtt:$(LIBS_PATH)/rpc-mqtt \
		--lib rpc-service-atca:$(LIBS_PATH)/rpc-service-atca \
		--lib rpc-service-config:$(LIBS_PATH)/rpc-service-config \
		--lib rpc-service-fs:$(LIBS_PATH)/rpc-service-fs \
		--lib rpc-service-gpio:$(LIBS_PATH)/rpc-service-gpio \
		--lib rpc-service-i2c:$(LIBS_PATH)/rpc-service-i2c \
		--lib rpc-uart:$(LIBS_PATH)/rpc-uart \
		--lib rpc-service-ota:$(LIBS_PATH)/rpc-service-ota \
		--module mjs:$(MJS_PATH) \

$(MJS_PATH)/mjs.c $(MJS_PATH)/mjs.h:
	@echo "=== Creating $@"
	@make -C $(MJS_PATH) $(notdir $@)

clean:
	echo "TODO: add mgos clean"
	@for d in $(EXAMPLES) ; do \
	  rm -rf $$d/build; \
	done

list_examples:
	@echo $(EXAMPLES)
