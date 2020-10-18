# Embedded Device Analysis

We use CyberPower Smart App Sinewave Uninterruptable Power Supplies (UPS) in our network closets. Each device has a microprocessor-based digital control and an Ethernet adapter permitting remote management. The challenges that the designers must have faced includ detecting voltage fluctuations, monitoring battery life, switching to priority power when the batteries are depleted to a specified level, and conserving power for the longest time possible.

I presume that the controller unit has some sort of small operating system kernel controlling several sensors: voltage, power, temperature, and the TCP/IP stack of the remote management module.
