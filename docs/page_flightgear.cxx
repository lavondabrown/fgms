/**
 * \page FlightGear FlightGear
 * 
 * \section fgfs_intro FlightGear Project
 * 
 *  - <b>FlightGear</b> is the project as a whole
 * 		- Wiki:  http://wiki.flightgear.org
 * 	- \ref fgfs  below is the "command line" used to launch the simulator
 * 
 * \section fgfs fgfs
 * This is the command line used to launch a sim eg 
 * \code 
 * > fgms --callsign=cba963 --multiplay=out,10,mpserver14.flightgear.org,5000 --multiplay=in,10,localhost,5000
 * \endcode
 * The important command line vars for us in \ref fgms land are:
 * \code 
 * --multiplay=out,10,mpserverXX.flightgear.org,5000
 * --multiplay=in,10,server.ip.address,5000
 * \endcode
 * \warning 
 * 		There <b>must be no spaces</b> eg 
 * 		\code 
        --multiplay=in,10, my.server.address ,5000
                     oops ^           oops2 ^
 * 		\endcode
 * 
 * 
 * The <b>--multiplay</b> option is broken down as follows
 * \code 
	--multiplay=[direction],[freq_hz],[host],[port]
	\endcode
 * 
 *  - <b>direction</b> 
 *     - <b>out</b> for sending to an mpserver
 *     - <b>in</b> for recieving from a connection
 *  - <b>freq_hz</b> 
 *     - the number of times a second udp packets are sent
 *     - a high number eg 50 will be bombarding the network
 *     - around 15 frames a second is cool enough
 *     - even lower eg 5 frames a second for atc and alike
 *  - <b>host</b> 
 *     - for <b>out</b> - this needs to be the server address eg mpserverNN.flightgear.org
 *     - for <b>in</b> - this needs to be your host name or ip eg localhost
 *  - <b>port</b> 
 *     - by default this is 5000
 * 
 * \note 	
 * 		Command line options: 
 * 			- http://wiki.flightgear.org/Command_line_options#MultiPlayer_Options
 */
