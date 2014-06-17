# Murraycoin 0.9.2+
=========================

Murraycoin 0.9.2 is a complete re-architecture of Murraycoin, changing from
using the Litecoin client as its base, to Bitcoin Core 0.9.2 with additional enhancements. 
It's still Murraycoin, with the same reward schedule, same cause, and (initially) the same
Scrypt PoW algorithm. However, there are lot of changes under the hood in addition to
the fork and PoW algorithm change.


For the full Bitcoin 0.9 changelog, please see https://bitcointalk.org/index.php?topic=522014


Downgrading
-----------

First and foremost, please note that downgrading from Murraycoin 0.9.2 to a previous version 
is not trivial. 0.9.2 now uses Berkeley DB 5.1 as its default database (in place of 4.8), and as
such may create database files which are incompatible with previous versions. In any case, this
is a required upgrade before block 130,000 so ensure you have a recent backup of your wallet.dat
file and proceed to upgrade at your earliest convenience. 

murraycoin-cli
------------

Where previously commands were sent to murraycoind by running "murraycoind <command>", 
0.9.2 adopts the model from Bitcoin Core 0.9 where there is a separate "murraycoin-cli" 
executable which can be used instead. This avoids the risk of accidentally trying to start two 
daemons at the same time, for example.


Transaction malleability-related fixes
--------------------------------------

Fixes for risk-cases involving transaction malleability have been added; this
is particularly important for any merchants or exchanges using the built-in
wallet system. 
