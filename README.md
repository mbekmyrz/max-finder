# max-finder
Vivado Project for finding the maximum number in an input sequence of 32-bit usigned integers.Custom IP 
ip_repo contains the sortingIP which is the custom IP for the FPGA implementation. It stores the maximum between the last maximum and the new value that come to the input register.
ip_generator project is used for the creation of the custom ip (i.e. it is an empty project).
testing_sorting_ip is a sdk project that tests the hardware. It interfaces the user through a UART interface and sends the data to the internal register of the FPGA and gives output to the user.
