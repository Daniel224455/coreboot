/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi.h>

DefinitionBlock(
	"dsdt.aml",
	"DSDT",
	ACPI_DSDT_REV_2,
	OEM_ID,
	ACPI_TABLE_CREATOR,
	0x20220930
)
{
	#include <acpi/dsdt_top.asl>
	#include <soc/intel/common/block/acpi/acpi/platform.asl>
	#include <soc/intel/common/block/acpi/acpi/globalnvs.asl>
	#include <cpu/intel/common/acpi/cpu.asl>

	Device (\_SB.PCI0)
	{
#if CONFIG(SOC_INTEL_COMMON_SKYLAKE_BASE)
		/* Kaby Lake */
		#include <soc/intel/skylake/acpi/systemagent.asl>
		#include <soc/intel/skylake/acpi/pch.asl>
#elif CONFIG(SOC_INTEL_CANNONLAKE_BASE)
		/* Comet Lake */
		#include <soc/intel/common/block/acpi/acpi/northbridge.asl>
		#include <soc/intel/cannonlake/acpi/southbridge.asl>
#elif CONFIG(SOC_INTEL_TIGERLAKE)
		/* Tiger Lake */
		#include <soc/intel/common/block/acpi/acpi/northbridge.asl>
		#include <soc/intel/tigerlake/acpi/southbridge.asl>
		#include <soc/intel/tigerlake/acpi/tcss.asl>
#elif CONFIG(SOC_INTEL_ALDERLAKE) || CONFIG(SOC_INTEL_RAPTORLAKE)
		#include <soc/intel/common/block/acpi/acpi/northbridge.asl>
		#include <soc/intel/alderlake/acpi/southbridge.asl>
		#include <soc/intel/alderlake/acpi/tcss.asl>
#elif CONFIG(SOC_INTEL_METEORLAKE)
		#include <soc/intel/common/block/acpi/acpi/northbridge.asl>
		#include <soc/intel/meteorlake/acpi/southbridge.asl>
		#include <soc/intel/meteorlake/acpi/tcss.asl>
#endif
		#include <drivers/intel/gma/acpi/default_brightness_levels.asl>

		#include <soc/intel/common/block/acpi/acpi/gna.asl>

		/* PS/2 Keyboard */
		#include <drivers/pc80/pc/ps2_controller.asl>
	}

	#include <southbridge/intel/common/acpi/sleepstates.asl>

	/* Star Labs EC */
	#include <ec/starlabs/merlin/acpi/ec.asl>

	Scope (\_SB)
	{
		/* HID Driver */
		#include <ec/starlabs/merlin/acpi/hid.asl>

		/* Suspend Methods */
		#include <ec/starlabs/merlin/acpi/suspend.asl>
	}

	#include "acpi/mainboard.asl"
}
