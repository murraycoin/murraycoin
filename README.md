Murraycoin [MRY] [<a href="https://www.murraycoin.org/" target="_blank">murraycoin.org</a>]
==========================

"There are two types of people in this world: Those who like Neil Diamond, and those who don't. My ex-wife loves him."

--Bob Wiley (Bill Murray), What About Bob?

![Murraycoin](https://23e581f9788c7942a462-826b8b60bdcccd5086d5eab06549f695.ssl.cf2.rackcdn.com/images/logo_big.png)

What is Murraycoin?
==========================
Murraycoin is a cryptocurrency like Bitcoin, although it does not use SHA256 as its proof of work (PoW). Taking development cues from Litecoin, Murraycoin currently employs a simplified variant of scrypt. However, on July 4th 2014, Murraycoin will automatically switch to a GPU/CPU-optimized and, as of this writing, Scrypt-ASIC-incompatible algorithm for PoW: Scrypt-2048; Scrypt-2048 is more memory intensive than standard scrypt. While other coins have adopted Scrypt-N to automatically adapt to advancing technology, Murraycoin opted to use Scrypt-2048 instead to ensure consistent and stable results with no surprises and a wider range of compatibility with consumer hardware down the line. Also, Scrypt-4096 ASIC miners are already in development and will likely begin shipping shortly into the Scrypt-N switch to Scrypt-4096 - Scrypt-2048 is the sweet spot that many Scrypt-N coins will likely end up having to create forks to adopt back to down the road. Also: Bill Murray.

License
==========================
Murraycoin is released under the terms of the MIT license. See [COPYING](COPYING)
for more information or see http://opensource.org/licenses/MIT.

Development and contributions
==========================
Development is ongoing and the development team as well as other volunteers can freely work in their own trees and submit pull requests when features or bug fixes are ready.

Specifications
==========================
 - Launched January 20th, 2014
 - Scrypt proof-of-work*
 - 100 second block targets
 - Subsidy halves every 300k blocks (~350 days)
 - Total coins: 58 million
 - 60 coins per standard block
 - 36 blocks to retarget difficulty with 144 sample and .25 damping*
 - 67% maximum change on difficulty retarget*
 - First 5,000 Blocks are promo blocks with a 1950 coin reward (Bill Murray was born in 1950.) Early miners are encouraged to be generous with promo block rewards.
 - Every 5,000 Blocks (~6 days) the reward steps down from 1950, 500, 320, 210, 130, 80.
 - During the following 80,000 blocks (~90 days) the reward is 75.
 - Every 300,000 Blocks (~350 days), the reward (starting at 60) is halved each period
 - Through the next few decades the Remaining 24 Million will be generated. 19.5 Million come from first 2 Years of 300K Blocks

*Hard-fork details [Hard-fork requires Murraycoin 0.9.2+]
 - Hard-fork begins at block# 130,000
 - Scrypt PoW adjusts to Scrypt-2048 for PoW on July 4th, 2014
 - Difficulty adjusts every block using a weighted formula starting at block 130,000 (will occur in June 2014)

Branches
==========================
There are 3 types of branches in this repository:

- **master:** Stable, contains the latest version of the latest *major.minor* release.
- **maintenance:** Stable, contains the latest version of previous releases, which are still under active maintenance. Format: ```<version>-maint```
- **development:** Unstable, contains new code for planned releases. Format: ```<version>-dev```

*Master and maintenance branches are exclusively mutable by release. Planned releases will always have a development branch and pull requests should be submitted against those. Maintenance branches are there for* ***bug fixes only,*** *please submit new features against the development branch with the highest version.*

### Ports
RPC: 11950
P2P: 11951
