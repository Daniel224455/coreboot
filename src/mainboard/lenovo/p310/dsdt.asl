/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi.h>
DefinitionBlock(
	"dsdt.aml",
	"DSDT",
	ACPI_DSDT_REV_2,
	OEM_ID,
	ACPI_TABLE_CREATOR,
	0x00001be0
)
{
	#include <acpi/dsdt_top.asl>
	#include <soc/intel/common/block/acpi/acpi/platform.asl>

	// global NVS and variables
	#include <soc/intel/common/block/acpi/acpi/globalnvs.asl>

	// CPU
	#include <cpu/intel/common/acpi/cpu.asl>

	Scope (\_SB) {
		Device (PCI0)
		{
			/* Image processing unit */
			#include <soc/intel/skylake/acpi/ipu.asl>
			#include <soc/intel/skylake/acpi/systemagent.asl>
			#include <soc/intel/skylake/acpi/pch.asl>
		}

		// Dynamic Platform Thermal Framework
		#include "acpi/dptf.asl"
	}

	#include <southbridge/intel/common/acpi/sleepstates.asl>

	// Mainboard specific
	#include "acpi/mainboard.asl"
}
