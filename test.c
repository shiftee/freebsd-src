#include <stdio.h>
#include <stdint.h>

void main()
{
	uint16_t hw_idx = 0;
	while(1)
	{
		uint16_t sw_idx = 0;
		while(1)
		{
			uint16_t diff1 = (1 << 16) - (sw_idx - hw_idx);
			uint16_t diff2 = hw_idx - sw_idx;
			if ( diff1 != diff2 )
				printf("ERROR: diff mismatch\n");
			sw_idx++;
			if ( sw_idx == 0xFFFF)
				break;
		}
		hw_idx++;
		if ( hw_idx == 0xFFFF)
			break;
	}
}
