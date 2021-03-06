ifeq ($(CONFIG_EC_GOOGLE_CHROMEEC),y)

ramstage-y += ec.c crosec_proto.c vstore.c
ramstage-$(CONFIG_EC_GOOGLE_CHROMEEC_I2C) += ec_i2c.c
ramstage-$(CONFIG_EC_GOOGLE_CHROMEEC_LPC) += ec_lpc.c
ramstage-$(CONFIG_EC_GOOGLE_CHROMEEC_MEC) += ec_mec.c
ramstage-$(CONFIG_EC_GOOGLE_CHROMEEC_SPI) += ec_spi.c
smm-y += ec.c crosec_proto.c vstore.c
smm-$(CONFIG_EC_GOOGLE_CHROMEEC_I2C) += ec_i2c.c
smm-$(CONFIG_EC_GOOGLE_CHROMEEC_LPC) += ec_lpc.c
smm-$(CONFIG_EC_GOOGLE_CHROMEEC_MEC) += ec_mec.c
smm-$(CONFIG_EC_GOOGLE_CHROMEEC_SPI) += ec_spi.c
romstage-y += ec.c crosec_proto.c vstore.c
romstage-$(CONFIG_EC_GOOGLE_CHROMEEC_I2C) += ec_i2c.c
romstage-$(CONFIG_EC_GOOGLE_CHROMEEC_LPC) += ec_lpc.c
romstage-$(CONFIG_EC_GOOGLE_CHROMEEC_MEC) += ec_mec.c
romstage-$(CONFIG_EC_GOOGLE_CHROMEEC_SPI) += ec_spi.c
verstage-y += ec.c crosec_proto.c vstore.c
verstage-$(CONFIG_EC_GOOGLE_CHROMEEC_I2C) += ec_i2c.c
verstage-$(CONFIG_EC_GOOGLE_CHROMEEC_LPC) += ec_lpc.c
verstage-$(CONFIG_EC_GOOGLE_CHROMEEC_MEC) += ec_mec.c
verstage-$(CONFIG_EC_GOOGLE_CHROMEEC_SPI) += ec_spi.c

ramstage-$(CONFIG_VBOOT_VERIFY_FIRMWARE) += vboot_storage.c
smm-$(CONFIG_VBOOT_VERIFY_FIRMWARE) += vboot_storage.c
romstage-$(CONFIG_VBOOT_VERIFY_FIRMWARE) += vboot_storage.c
verstage-$(CONFIG_VBOOT_VERIFY_FIRMWARE) += vboot_storage.c

endif
